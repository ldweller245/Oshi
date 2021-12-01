using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger : MonoBehaviour
{
    public int ObjectID;
    public Dialogue dialogue;

    public void TriggerDialogue()
    {
            FindObjectOfType<DialogueManager>().StartDialogue(dialogue);        
    }
}
