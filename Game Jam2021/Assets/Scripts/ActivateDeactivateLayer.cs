using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateDeactivateLayer : MonoBehaviour
{
    public GameObject[] enableLayer;
    public GameObject[] disableLayer;

    public void ActivateDeactivate()
    {
        foreach (var layer in enableLayer)
        {
            if (layer != null)
            {
                layer.gameObject.SetActive(true);
            }
        }
        foreach (var layer in disableLayer)
        {
            if (layer != null)
            {
                layer.gameObject.SetActive(false);
            }
        }
    }
}
