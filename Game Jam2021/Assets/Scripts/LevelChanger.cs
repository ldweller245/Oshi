using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;

public class LevelChanger : MonoBehaviour
{
    public AudioSource Sound1;
    public AudioSource Sound2;
    private IEnumerator fadeSound1;
    private IEnumerator fadeSound2;

    public Animator animator;

    private string levelToLoad;
    void Start()
    {

    }

    public void FadeToLevel(string levelName)
    {
        Time.timeScale = 1f;
        levelToLoad = levelName;
        Debug.Log("levelChanger NAME: " + levelName);
        Debug.Log("leveto LOAD : " + levelToLoad);
        animator.SetTrigger("FadeOut");

        fadeSound1 = AudioFadeOut.FadeOut(Sound1, 2f);
        if(Sound2 != null)
        {
            fadeSound2 = AudioFadeOut.FadeOut(Sound2, 2f);
        }
        else
        {

        }
        StartCoroutine(fadeSound1);
        StopCoroutine(fadeSound1);
    }

    public void OnFadeComplete()
    {
        Debug.Log("levelChanger Script");
        SceneManager.LoadScene(levelToLoad);
    }
}
