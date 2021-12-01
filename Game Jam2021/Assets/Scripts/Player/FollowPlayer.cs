using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    [SerializeField] private GameObject player;
    [SerializeField] private int followDistance;
    private List<Vector3> storedPositions;
    Vector3 defaultScale;
    private void Start()
    {
        enabled = false;
        storedPositions = new List<Vector3>();//Create Blank list
        defaultScale = transform.localScale;
        
    }

    private void LateUpdate()
    {
        Vector3 playerPos = player.transform.position;

        if (storedPositions.Count == 0)//Check if list is empty
        {
            storedPositions.Add(playerPos); //store player currentposition
            return;
        }
        else if (storedPositions[storedPositions.Count - 1] != playerPos)
        {
            storedPositions.Add(playerPos); //Store player position everyFrame
        }

        if(storedPositions.Count > followDistance)
        {
            Vector3 previousPos = transform.position;

            transform.position = storedPositions[0]; //move

            Vector3 movement = transform.position - previousPos;
            float movementX = Mathf.Sign(movement.x) != 0 ? Mathf.Sign(movement.x) : 0;
            float movementY = Mathf.Sign(movement.y) != 0 ? Mathf.Sign(movement.y) : 0;
            Vector3 movementDir = new Vector3(movementX, movementY, 0);
            if (movementDir.x != 0)
            {
                transform.localScale = new Vector3(-defaultScale.x * movementDir.x, transform.localScale.y, transform.localScale.z);
            }

            storedPositions.RemoveAt(0); //Delete position that player moved to
        }
    }
}
