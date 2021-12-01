using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Interaction : MonoBehaviour
{
    //DetectionPoint
    public Transform detectionPoint;
    //Detection radius
    private const float detectionRadius = 0.1f;
    //Detection layer
    public LayerMask detectionLayer;
    void Update()
    {
        //if the empty game object is detecting another object with collider then we can interact
        //if we interact make something happen!
        if (DetectObject())
        {
            if (InteractInput())
            {
                Debug.Log("Interact");
            }
        }
    }
    
    bool InteractInput()
    {
        //input which is enter
      return Input.GetButtonDown("Submit");
    }

    bool DetectObject()
    {
        //Detecting empty game object position with overlapcircle
        return Physics2D.OverlapCircle(detectionPoint.position,detectionRadius,detectionLayer);

        
    }

    private void OnDrawGizmosSelected()
    {
        //Gizmos
        Gizmos.color = Color.green;
        Gizmos.DrawSphere(detectionPoint.position,detectionRadius);
    }
}
