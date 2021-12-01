using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Centipede : MonoBehaviour
{
    [SerializeField] GameObject centipede;
    [SerializeField] GameObject centipedeCollider;
    [SerializeField] GameObject removableCollider;

    public void CreateBridge()
    {
        centipede.SetActive(true);
        centipedeCollider.SetActive(true);
        removableCollider.SetActive(false);
        gameObject.SetActive(false);
    }
}