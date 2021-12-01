using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Health : MonoBehaviour
{
    public int CurrentHealth;
    public int numOfHearts;
    public Image[] hearts;
    public Sprite fullHeart;
    public Sprite emptyHeart;

    public float immuned;
    public float blink;
    private float blinkTime = 0.1f;
    private float immunedTime;

    public LevelChanger levelChanger;
    private string levelToLoad;

    public AudioSource hitSource;
    public AudioSource deathSource;

    public void Start()
    {

    }

    private void Update()
    {        
        for (int i = 0; i < hearts.Length; i++)
        {
            if (i < CurrentHealth)
            {
                hearts[i].sprite = fullHeart;
            }
            else
            {
                hearts[i].sprite = emptyHeart;
            }
            if (i < numOfHearts)
            {
                hearts[i].enabled = true;
            }
            else
            {
                hearts[i].enabled = false;
            }
        }
        if (CurrentHealth > numOfHearts)
        {
            CurrentHealth = numOfHearts;
        }
        if (immunedTime > 0)
        {
            immunedTime -= Time.deltaTime;
            blinkTime -= Time.deltaTime;
            if (blinkTime <= 0)
            {
                gameObject.GetComponent<SpriteRenderer>().enabled = !gameObject.GetComponent<SpriteRenderer>().enabled;

                blinkTime = blink;
            }
            if (immunedTime <= 0)
            {
                gameObject.GetComponent<SpriteRenderer>().enabled = true;

            }
        }
    }

    public void takingDamage()
    {
        if (immunedTime <= 0)
        {
            CurrentHealth -= 1;

            if (CurrentHealth <= 0)
            {
                immunedTime = immuned;
                gameObject.GetComponent<SpriteRenderer>().enabled = false;
                blinkTime = blink;
                deathSource.Play();
                //other.GetComponent<ScriptB>().DoSomething();
                levelChanger.GetComponent<LevelChanger>().FadeToLevel("DeathScene");

            }
            else
            {
                immunedTime = immuned;
                gameObject.GetComponent<SpriteRenderer>().enabled = false;
                blinkTime = blink;
                hitSource.Play();
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("enemy"))
        {
            Debug.Log("OSHI DAMAGED Running");
            takingDamage();
        }
    }
}
