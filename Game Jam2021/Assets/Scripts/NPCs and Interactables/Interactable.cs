using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Interactable : MonoBehaviour
{
    [SerializeField] UnityEvent action;
    SpriteRenderer spriteRenderer;
    [HideInInspector] public bool inRange;
    [HideInInspector] public bool actionUsed;
    [SerializeField] bool reusable;
    public string actionName;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            inRange = true;
        }

        if (spriteRenderer != null) spriteRenderer.color = Color.gray;
    }

    public void Action()
    {
        if (!actionUsed)
        {
            action.Invoke();
            if (!reusable) actionUsed = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            if (spriteRenderer != null) spriteRenderer.color = Color.white;
            inRange = false;
        }
    }
}