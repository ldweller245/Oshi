using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    private GameObject pauseMenu;
    public KeyCode pauseKey;
    public bool isPaused;
    public bool pauseCheck;
    public Animator pauseMenuAnim;
    public GameObject characterImage, textFrame;
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
        characterImage.SetActive(false);
        textFrame.SetActive(false);
        pauseMenuAnim.SetBool("paused", true);
        Time.timeScale = 0f;
        isPaused = true;
        AudioSource[] audios = FindObjectsOfType<AudioSource>();
        foreach(AudioSource a in audios)
        {
            a.volume = a.volume/3;
        }
    }

    public void ResumeGame()
    {
        characterImage.SetActive(true);
        textFrame.SetActive(true);
        pauseMenuAnim.SetBool("paused", false);
        AudioSource[] audios = FindObjectsOfType<AudioSource>();
        foreach(AudioSource a in audios)
        {
            a.volume = a.volume*3;
        }
        Time.timeScale = 1f;
        isPaused = false;
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
