using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LowerWaterLevel : MonoBehaviour
{
    [SerializeField] GameObject level1;
    [SerializeField] GameObject level2;
    [SerializeField] GameObject level3;

    [SerializeField] GameObject collider1;
    [SerializeField] GameObject collider2;
    [SerializeField] GameObject collider3;
    [SerializeField] GameObject collider4;

    [SerializeField] GameObject ratKing;
    [SerializeField] GameObject ratGuard;

    public void LowerWater()
    {
        if (level1.activeInHierarchy)
        {
            level1.SetActive(false);
            collider4.SetActive(false);
            collider3.SetActive(true);
        }
        else if (level2.activeInHierarchy && level3.activeInHierarchy)
        {
            level2.SetActive(false);
            level3.SetActive(false);
            collider2.SetActive(true);
            collider3.SetActive(false);
            collider1.SetActive(true);
        }
        else if (ratKing && ratGuard)
        {
            ratKing.SetActive(false);
            ratGuard.SetActive(false);
        }
    }
}