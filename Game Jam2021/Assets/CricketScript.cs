using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CricketScript : MonoBehaviour
{
    public void cricketAction()
    {
        if (gameObject.GetComponent<FollowPlayer>().enabled == false)
        {
            Debug.Log("follow script: " + gameObject.GetComponent<FollowPlayer>().enabled);
            gameObject.GetComponent<FollowPlayer>().enabled = true;
            Debug.Log("follow script: " + gameObject.GetComponent<FollowPlayer>().enabled);
        }
    }
}
