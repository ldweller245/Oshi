using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class collectedScript : MonoBehaviour
{
    Text text;
    public static int amount;
    void Start()
    {
        var hand = GameObject.Find("Player").GetComponent<PlayerInteract>().worms.Count;
        Debug.Log("COUNT::: " + hand);
        text = GetComponent<Text>();

    }
    void Update()
    {
        var hand = GameObject.Find("Player").GetComponent<PlayerInteract>().worms.Count;
        text.text = hand.ToString() + "/10";
//        if (GetComponent<PlayerInteract>().worms.Count > 0)
  //      {
    //        text.text = GetComponent<PlayerInteract>().worms.Count.ToString();
      //  }
    }
}
