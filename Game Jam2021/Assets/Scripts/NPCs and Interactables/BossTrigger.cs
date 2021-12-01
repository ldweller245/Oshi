using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossTrigger : MonoBehaviour
{

    [HideInInspector]
    public bool BossActive = false;

    // In seconds
    private void OnTriggerExit2D(Collider2D other)
    {
        var go = other.gameObject;

        if (BossActive == false)
        {
            BossActive = true;
        }
        else
        {
            BossActive = false;
        }
    }
}


