using UnityEngine.Audio;
using UnityEngine;
using System;

public class Audiomanager : MonoBehaviour
{
    //public Sound[] sounds;
    public AudioClip sewer;
    public AudioClip sewerBoss;

    private AudioSource audioSource;

    private bool bossFight = false;


    public static Audiomanager instance;
    private void Awake()
    {
        /*if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);

        foreach (Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;
            s.source.pitch = s.pitch;
            s.source.loop = s.loop;
            s.source.volume = s.volume;
        }*/
    }
 void Start ()
     {
         audioSource = gameObject.GetComponent<AudioSource>();
         if (audioSource == null)
         {
             audioSource = gameObject.AddComponent<AudioSource>();
         }
         PlayRegularAudioClip();
     }

      public void PlayRegularAudioClip()
     {
         audioSource.Stop();
         audioSource.loop = true;
         audioSource.PlayOneShot(sewer);
         audioSource.loop = true;

     }
     
     public void PlayBossClip()
     {
         audioSource.Stop();
         audioSource.loop = true;
         audioSource.PlayOneShot(sewerBoss);
        audioSource.loop = true;

     }

    public void Update() 
    {
        if (GameObject.Find("BossEntry").GetComponent<BossTrigger>().BossActive == true){
            if(bossFight == false)
            {
                bossFight = true;
                PlayBossClip();
            }
            else
            {

            }
        }
  
    }



    /*public void Play(string name)
    {
       Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }
            
        s.source.Play();
    }
    public void Stop(string sound)
    {
        Sound s = Array.Find(sounds, item => item.name == sound);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }

        s.source.volume = s.volume * (1f + UnityEngine.Random.Range(-s.volume / 2f, s.volume / 2f));
        s.source.pitch = s.pitch * (1f + UnityEngine.Random.Range(-s.pitch / 2f, s.pitch / 2f));

        s.source.Stop();
    }*/

}

