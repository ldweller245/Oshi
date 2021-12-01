using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeetleScript : MonoBehaviour
{

    [SerializeField] DialogueTrigger dialogue1;
    [SerializeField] DialogueTrigger dialogue2;

    int state;
    public GameObject[] enableLayer;
    public GameObject[] disableLayer;
    bool alreadySpoken;

    public void BeetleAction()
    {
        var wormCount = GameObject.Find("Player").GetComponent<PlayerInteract>().worms.Count;

        DialogueManager dialogue = FindObjectOfType<DialogueManager>();

        if (wormCount < 10 || !alreadySpoken)
        {
            alreadySpoken = true;
            dialogue.StartDialogue(dialogue1.dialogue);
        }
        else
        {
            gameObject.GetComponent<FollowPlayer>().enabled = true;
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
            dialogue.StartDialogue(dialogue2.dialogue);
        }
    }
}
