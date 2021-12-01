using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class DialogueManager : MonoBehaviour
{
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI dialogueText;
    public Image characterSprite;

    public Animator animator;

    public float typingSpeed;
    private  Queue<string> sentences;

    string currentSentence;

    void Start()
    {
        sentences = new Queue<string>();
    }

    private void Update()
    {
        if (DialogueOpen())
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                if (dialogueText.text.Length < currentSentence.Length)
                {
                    StopAllCoroutines();
                    TypeInstantly(currentSentence);
                }
                else
                {
                    DisplayNextSentence();
                }
            }
        }
    }

    public void StartDialogue(Dialogue dialogue)
    {
        characterSprite.sprite = dialogue.art;
        animator.SetBool("IsOpen", true);
        nameText.text = dialogue.name;
        
        sentences.Clear();

        foreach(string sentence in dialogue.sentences)
        {
            sentences.Enqueue(sentence);
        }

        DisplayNextSentence();

    }

    public void DisplayNextSentence()
    {
        if(sentences.Count == 0)
        {
            EndDialogue();
            return;
        }
        string sentence = sentences.Dequeue();
        dialogueText.text = sentence;
        currentSentence = sentence;
        Debug.Log(sentence);
        StopAllCoroutines();
        StartCoroutine(Type(sentence));
    }
    IEnumerator Type(string sentence)
    {
        dialogueText.text = "";
        foreach(char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            yield return new WaitForSeconds(typingSpeed);
        }
    }

    void TypeInstantly(string sentence)
    {
        dialogueText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
        }
    }

    void EndDialogue()
    {
        animator.SetBool("IsOpen", false);
        Debug.Log("End of convo");
    }

    public bool DialogueOpen()
    {
        return animator.GetBool("IsOpen");
    }

   
}
