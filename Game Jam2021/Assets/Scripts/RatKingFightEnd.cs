using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RatKingFightEnd : MonoBehaviour
{
    [SerializeField] GameObject ratKing;
    [SerializeField] GameObject ratSpawners;
    bool fightOver;
    public void EndFight()
    {
        if (fightOver) return;

        if (!ratKing.activeInHierarchy)
        {
            fightOver = true;
            GetComponent<DialogueTrigger>().TriggerDialogue();
            ratSpawners.SetActive(false);

            Rat[] rats = FindObjectsOfType<Rat>();
            foreach (Rat rat in rats)
            {
                rat.gameObject.SetActive(false);
            }
        }
    }
}
