using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WoodLice : MonoBehaviour
{

    private Animator anim;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    public void DestroySelf()
    {
        gameObject.SetActive(false);
    }
}
