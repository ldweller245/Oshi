using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    [SerializeField] Transform target;

    public void TeleportPlayer()
    {
        PlayerMovement player = FindObjectOfType<PlayerMovement>();

        if (player != null)
        {
            player.transform.position = target.position;
        }
    }
}

