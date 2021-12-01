using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class woodliceScript : MonoBehaviour
{
    public void woodliceAction()
    {
        if (gameObject.GetComponent<FollowPlayer>().enabled == false)
        {
            gameObject.GetComponent<FollowPlayer>().enabled = true;
        }
        else
        {
            gameObject.GetComponent<FollowPlayer>().enabled = false;
        }
    }
}
