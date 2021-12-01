using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;


public class LoadSceneAfterVideo : MonoBehaviour
{

    VideoPlayer video;
    public LevelChanger levelChanger;
    string levelLoaderString;

    void Awake()
    {
        Scene currentScene = SceneManager.GetActiveScene ();
        string sceneName = currentScene.name;

        if(sceneName == "Start-Cave")
        {
            levelLoaderString = "Cave_Scene";
        }
        else if(sceneName == "Cave-Sewer")
        {
            levelLoaderString = "Sewer_Scene";
        }
        else if(sceneName == "Sewer-Forest")
        {
            levelLoaderString = "Forest";
        }
        else if(sceneName == "Forest-End")
        {
            levelLoaderString = "StartMenu";
        }


        video = GetComponent<VideoPlayer>();
        video.Play();
        video.loopPointReached += CheckOver;
        Debug.Log("VIDEO PLAYER AWAKE: " + video.isPlaying);
    }
    void CheckOver(UnityEngine.Video.VideoPlayer vp)
    {
        Debug.Log("VIDEO PLAYER CO: " + video.isPlaying);
        levelChanger.GetComponent<LevelChanger>().FadeToLevel(levelLoaderString);

        //SceneManager.LoadScene(1);//the scene that you want to load after the video has ended.
    }
}
