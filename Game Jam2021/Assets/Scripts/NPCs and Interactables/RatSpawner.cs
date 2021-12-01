using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RatSpawner : MonoBehaviour
{

    public GameObject prefab;
    private GameObject go;
    public float delay = 0.5f;
    public float speed = 2f;
    float nextTimeToSpawn;

    [SerializeField]
    private Transform targetPoint;

    private bool paused = false;
    private float timePassed = 0f;

    private bool arrived;

    void Start()
    {
        nextTimeToSpawn = Time.time;
    }
    void Update()
    {
        if (GameObject.Find("BossEntry").GetComponent<BossTrigger>().BossActive == true)
        {
            timePassed += Time.deltaTime;
            if (timePassed > 5f)
            {
                if (paused == true)
                {
                    Debug.Log("unpaused");
                    paused = false;
                    timePassed = 0;
                }
                else
                {
                    Debug.Log("paused");
                    paused = true;
                    timePassed = 0;
                }
            }
            if (paused == true)
            {
                Destroy(go);
            }
            else if (paused == false)
            {
                if (Time.time > nextTimeToSpawn)
                {
                    nextTimeToSpawn = Time.time + delay;
                    go = Instantiate(prefab, transform.position, Quaternion.identity);
                    go.AddComponent<Move>();
                    go.GetComponent<Move>().speed = speed;
                    go.GetComponent<Move>().target = targetPoint;
                    go.GetComponent<Move>().gobj = go;
                    /*arrived = go.GetComponent<Move>().reachedDest;
                    if(arrived == false)
                    {
                    }
                    else if(arrived == true)
                    {
                        //Destroy(go);
                    }*/
                }
            }
        }
        else
        {
        }
    }
}



