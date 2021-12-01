using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteract : MonoBehaviour
{
    public GameObject currentInteractionObject = null;

    public List<string> worms;
    public AudioSource collectChime;

    void Start()
    {
        worms = new List<string>();
    }

    private void Update()
    {
        if (Input.GetButtonDown("Submit") && currentInteractionObject)
        {
            //Do interaction
            currentInteractionObject.SendMessage("DoInteraction");
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Interactable"))
        {
            Debug.Log(other.name);
            currentInteractionObject = other.gameObject;

        }
        if (other.CompareTag("Collectible"))
        {
            string itemType = other.gameObject.GetComponent<CollectibleScript>().itemType;
            collectChime.Play();

            worms.Add(itemType);
            Destroy(other.gameObject);
        }
    }
    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag("Interactable"))
        {
            if (other.gameObject == currentInteractionObject)
            {
                currentInteractionObject = null;
            }

        }
    }
}
