using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using TMPro;

public class PlayerMovement : MonoBehaviour
{
    Rigidbody2D rb;

    [SerializeField] private float moveSpeed = 1f;
    Health healthSystem;
    [SerializeField] private int SceneIndex;
    Vector2 lastClicked;
    private bool moving;
    [SerializeField] Animator anim;

    [SerializeField] TextMeshPro interactionPrompt;
    [SerializeField] Vector3 interactionPromptPos;

    [SerializeField] LayerMask stairsMask;

    Vector2 movement;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();

        if (interactionPrompt != null)
        {
            interactionPrompt.transform.position = transform.position + interactionPromptPos;
        }
    }
    private void Update()
    {
        GetMovement();

        OpenSideMenu();
    }

    bool DialogueOpen()
    {
        DialogueManager dialogue = FindObjectOfType<DialogueManager>();
        if (dialogue)
        {
            return dialogue.DialogueOpen();
        }

        return false;
    }

    private void GetMovement()
    {
        if (DialogueOpen())
        {
            movement = Vector2.zero;
            return;
        }

        bool leftInput = Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A);
        bool rightInput = Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D);
        bool downInput = Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S);
        bool upInput = Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W);

        int left = leftInput ? 1 : 0;
        int right = rightInput ? 1 : 0;
        int down = downInput ? 1 : 0;
        int up = upInput ? 1 : 0;

        int hInput = right - left;
        int vInput = up - down;

        if (hInput != 0)
        {
            movement[0] = hInput;
        }
        else
        {
            movement[0] = 0;
        }

        if (vInput != 0)
        {
            movement[1] = vInput;
        }
        else
        {
            movement[1] = 0;
        }

        movement.Normalize();
        movement *= moveSpeed * Time.fixedDeltaTime;

        int angle = (int)Vector2.SignedAngle(Vector2.right, movement);

        float degree = 0;
        
        if (angle == 45 || angle == -135)
        {
            degree = -18.5f;
        }
        else if (angle == -45 || angle == 135)
        {
            degree = 18.5f;
        }

        if (OnStairs())
        {
            if (angle == 45 || angle == -135)
            {
                degree = 10f;
            }
            else if (angle == -45 || angle == 135)
            {
                degree = -10f;
            }
        }
        
        movement = Quaternion.Euler(0, 0, degree) * movement;

        Interactable[] interactables = FindObjectsOfType<Interactable>();
        string text = "";

        foreach (Interactable interactable in interactables)
        {
            if (interactable.inRange)
            {
                if (!interactable.CompareTag("AutoDialogue"))
                {
                    if (Input.GetKeyDown(KeyCode.Space)) interactable.Action();
                }
                else if (interactable.CompareTag("AutoDialogue"))
                {
                    interactable.Action();
                }

                if (!interactable.actionUsed) text = interactable.actionName;
            }
        }

        if (interactionPrompt != null)
        {
            interactionPrompt.text = text;
            interactionPrompt.transform.position = transform.position + interactionPromptPos;
        }
    }

    bool OnStairs()
    {
        return Physics2D.OverlapPoint(rb.position, stairsMask);
    }

    private void OpenSideMenu()
    {
        if (Input.GetKeyDown(KeyCode.Tab))
        {
            SideMenu sideMenu = FindObjectOfType<SideMenu>();

            if (sideMenu != null)
            {
                SideMenu.MenuIndex menu = sideMenu.GetCurrentMenu() == SideMenu.MenuIndex.NONE ? SideMenu.MenuIndex.MENU1 : SideMenu.MenuIndex.NONE;
                sideMenu.SetCurrentMenu(menu);
            }
        }
    }

    private void FixedUpdate()
    {
        if (!DialogueOpen()) CollisionAndMove();

        if (movement != Vector2.zero)
        {
            anim.SetFloat("Horizontal", movement.x);
            anim.SetFloat("Vertical", movement.y);
        }

        anim.SetBool("Move", movement.sqrMagnitude != 0);
    }

    private void Movement()
    {
        if (moving && (Vector2)transform.position != lastClicked)
        {
            float speed = moveSpeed * Time.deltaTime;
            movement = Vector2.MoveTowards(rb.position, lastClicked, speed) - rb.position;
        }
        else
        {
            moving = false;
            movement = Vector2.zero;
        }
    }

 

    void CollisionAndMove()
    {
        /*
        if (Physics2D.BoxCast(boxC.bounds.center, boxC.bounds.size, 0, new Vector2(movement[0], 0), Mathf.Abs(movement[0]), collisionMask))
        {
            movement[0] = 0;
        }
        */

        /*
        if (Physics2D.BoxCast(boxC.bounds.center, boxC.bounds.size, 0, new Vector2(0, movement[1]), Mathf.Abs(movement[1]), collisionMask))
        {
            movement[1] = 0;
        }
        */

        rb.MovePosition(rb.position + new Vector2(movement[0], movement[1]));
    }

    private void Death()
    {
        if(healthSystem.CurrentHealth == 0)
        {
            //Play Death animation
            //then wait for seconds then restart
            SceneManager.LoadScene(SceneIndex);
        }
    }


}
