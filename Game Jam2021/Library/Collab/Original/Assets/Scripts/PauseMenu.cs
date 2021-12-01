using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    private GameObject pauseMenu;
    public KeyCode pauseKey;
    public static bool isPaused;
    public bool pauseCheck;
    public Animator anim;
    public GameObject Dialogue, DialogueManager;
    // Start is called before the first frame update
    void Start()
    {
        pauseMenu = GameObject.Find("PauseMenuPanel");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(pauseKey))
        {
            if (isPaused)
            {
                ResumeGame();
               
            }
            else
            {
                PauseGame();
               
            }
        }
    }


    public void PauseGame()
    {
        Dialogue.SetActive(false);
        DialogueManager.SetActive(false);
        anim.SetBool("Paused", true);
        Time.timeScale = 0f;
        isPaused = true;
        pauseCheck = isPaused;
        AudioSource[] audios = FindObjectsOfType<AudioSource>();
        foreach(AudioSource a in audios)
        {
            a.volume = a.volume/3;
        }
    }

    public void ResumeGame()
    {
        Dialogue.SetActive(true);
        DialogueManager.SetActive(true);
        anim.SetBool("Paused", false);
        AudioSource[] audios = FindObjectsOfType<AudioSource>();
        foreach(AudioSource a in audios)
        {
            a.volume = a.volume*3;
        }
        Time.timeScale = 1f;
        isPaused = false;
        pauseCheck = isPaused;
    }
    
    public void GoToMainMenu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene("StartMenu");
    }

    public void QuitGame()
    {
        Application.Quit();
        Debug.Log("Qutting game");
    }
}
