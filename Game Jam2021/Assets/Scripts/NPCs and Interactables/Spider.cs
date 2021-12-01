using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spider : MonoBehaviour
{
    [SerializeField] GameObject web1;
    [SerializeField] GameObject web2;
    [SerializeField] GameObject web3;

    [SerializeField] GameObject colliderWeb1;
    [SerializeField] GameObject colliderWeb2;

    [SerializeField] GameObject collider1;
    [SerializeField] GameObject collider2;

    [SerializeField] Transform point1;
    [SerializeField] Transform point2;
    [SerializeField] Transform point3;

    [SerializeField] DialogueTrigger dialogue1;
    [SerializeField] DialogueTrigger dialogue2;
    [SerializeField] DialogueTrigger dialogue3;
    [SerializeField] DialogueTrigger dialogue4;

    int state;

    const int START_DIALOGUE1 = 0;
    const int START_DIALOGUE2 = 1;
    const int START_DIALOGUE3 = 2;
    const int START_DIALOGUE4 = 3;
    const int DIALOGUE1 = 4;
    const int DIALOGUE2 = 5;
    const int DIALOGUE3 = 6;
    const int DIALOGUE4 = 7;

    public void SpiderAction()
    {
        DialogueManager dialogue = FindObjectOfType<DialogueManager>();

        if (state == START_DIALOGUE1)
        {
            dialogue.StartDialogue(dialogue1.dialogue);
            state = DIALOGUE1;
        }
        else if (state == START_DIALOGUE2)
        {
            dialogue.StartDialogue(dialogue2.dialogue);
            state = DIALOGUE2;
        }
        else if (state == START_DIALOGUE3)
        {
            dialogue.StartDialogue(dialogue3.dialogue);
            state = DIALOGUE3;
        }
        else if (state == START_DIALOGUE4)
        {
            dialogue.StartDialogue(dialogue4.dialogue);
            state = DIALOGUE4;
        }
    }

    private void Update()
    {
        DialogueManager dialogue = FindObjectOfType<DialogueManager>();

        if (!dialogue.DialogueOpen())
        {
            if (state == DIALOGUE1)
            {
                state = START_DIALOGUE2;

                SetTransform(point1);
            }
            else if (state == DIALOGUE2)
            {
                state = START_DIALOGUE3;

                SetTransform(point2);
                web1.SetActive(true);
                colliderWeb1.SetActive(true);
                collider1.SetActive(false);
            }
            else if (state == DIALOGUE3)
            {
                state = START_DIALOGUE4;

                SetTransform(point3);
                web2.SetActive(true);
            }
            else if (state == DIALOGUE4)
            {
                web3.SetActive(true);
                colliderWeb2.SetActive(true);
                collider2.SetActive(false);
                Destroy(gameObject);
            }
        }
    }

    void SetTransform(Transform _transform)
    {
        transform.position = _transform.position;
        transform.rotation = _transform.rotation;
        transform.localScale = _transform.localScale;
    }
}
