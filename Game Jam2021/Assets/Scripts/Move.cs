using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    public float speed;
    [SerializeField]
    private Transform[] waypoints;
    public Transform target;

    public GameObject gobj;

    void Update()
    {
        transform.position = Vector2.MoveTowards(transform.position, new Vector2(target.position.x, target.position.y), Time.deltaTime * speed);
        if (transform.position == target.position)
        {
            Destroy(gobj);
        }
    }
}
