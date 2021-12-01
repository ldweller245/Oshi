using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RockScript : MonoBehaviour
{
    [SerializeField] DialogueTrigger dialogue1;
    [SerializeField] DialogueTrigger dialogue2;

    int state;
    public GameObject[] enableLayer;
    public GameObject[] disableLayer;

    public void RockAction()
    {
        var wormCount = GameObject.Find("Player").GetComponent<PlayerInteract>().worms.Count;
        var beetleFollowing = GameObject.Find("NPCs/Brumbulli").GetComponent<FollowPlayer>().enabled;

        DialogueManager dialogue = FindObjectOfType<DialogueManager>();
        AudioSource audio = gameObject.GetComponent<AudioSource>();

        if (wormCount != 10)
        {
            dialogue.StartDialogue(dialogue1.dialogue);
        }
        else if (wormCount == 10 && beetleFollowing == true)
        {
            foreach (var layer in disableLayer)
            {
                if (layer != null)
                {
                    layer.gameObject.SetActive(true);
                }
            }
            GameObject.Find("NPCs/Brumbulli").GetComponent<FollowPlayer>().enabled = false;
            gameObject.GetComponent<SpriteRenderer>().enabled = false;
            gameObject.GetComponent<CircleCollider2D>().enabled = false;
            audio.Play();

            dialogue.StartDialogue(dialogue2.dialogue);

            foreach (var layer in enableLayer)
            {
                if (layer != null)
                {
                    layer.gameObject.SetActive(false);
                }
            }
        }
    }

}
