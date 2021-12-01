using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SpeechBubble : MonoBehaviour
{
    float timer;
    [SerializeField] float speechDuration;

    TextMeshPro tmp;

    private void Awake()
    {
        tmp = GetComponent<TextMeshPro>();
    }

    private void OnEnable()
    {
        timer = 0;
    }

    private void FixedUpdate()
    {
        if (timer >= speechDuration)
        {
            gameObject.SetActive(false);
        }
        else
        {
            timer += Time.deltaTime;
        }
    }

    public void SetText(string text)
    {
        tmp.text = text;
    }
}
