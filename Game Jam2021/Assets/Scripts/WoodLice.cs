using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WoodLice : MonoBehaviour
{
    private Animator anim;
    [SerializeField] GameObject interactable;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    public void Cut()
    {
        anim.SetBool("Fallen", true);
        interactable.SetActive(false);
    }
}