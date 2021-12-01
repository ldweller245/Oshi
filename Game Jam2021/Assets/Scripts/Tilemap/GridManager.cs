using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GridManager: MonoBehaviour
{
    [SerializeField] Tilemap tilemap;
    [SerializeField] Tilemap roadMap;
    public Vector3Int[,] spots;
    [SerializeField] TileBase roadTile;
    Astar astar;
    List<Spot> roadPath = new List<Spot>();
    BoundsInt bounds;
    public Vector2Int start;

    private void Start()
    {
        tilemap.CompressBounds();
        roadMap.CompressBounds();
        bounds = tilemap.cellBounds;

        CreateGrid();
        astar = new Astar(spots, bounds.size[0], bounds.size[1]);
    }

    void CreateGrid()
    {
        spots = new Vector3Int[bounds.size[0], bounds.size[1]];

        for (int x = bounds.xMin, i = 0; i < bounds.size[0]; x++, i++)
        {
            for (int y = bounds.yMin, j = 0; j < bounds.size[1]; y++, j++)
            {
                if (tilemap.HasTile(new Vector3Int(x, y, 0)))
                {
                    spots[i, j] = new Vector3Int(x, y, 0);
                }
                else
                {
                    spots[i, j] = new Vector3Int(x, y, 1);
                }
            }
        }
    }

    public void DrawPath(Vector3 target)
    {
        CreateGrid();

        if (roadPath != null && roadPath.Count > 0)
        {
            roadPath.Clear();
        }

        Vector3Int gridTarget = tilemap.WorldToCell(target);
        roadPath = astar.CreatePath(spots, start, new Vector2Int(gridTarget[0], gridTarget[1]), 1000);

        if (roadPath == null) return;

        DrawRoad();
        start = new Vector2Int(roadPath[0].X, roadPath[0].Y);
    }

    private void DrawRoad()
    {
        for (int i = 0; i < roadPath.Count; i++)
        {
            roadMap.SetTile(new Vector3Int(roadPath[i].X, roadPath[i].Y, 0), roadTile);
        }
    }
}
