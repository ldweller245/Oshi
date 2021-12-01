using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollingTitle : MonoBehaviour
{
    RectTransform rectT;

    [SerializeField] float scrollingInterval;
    float scrollingTimer;
    [SerializeField] float numberOfScrollings;
    float scrollingAmount;

    [SerializeField] float targetY;

    [SerializeField] GameObject mainMenu;

    private void Awake()
    {
        rectT = GetComponent<RectTransform>();

        scrollingAmount = Mathf.Abs(targetY - rectT.localPosition[1]) / numberOfScrollings;
    }

    private void FixedUpdate()
    {
        if (scrollingTimer >= scrollingInterval)
        {
            scrollingTimer = 0;
            if (Mathf.Abs(rectT.localPosition[1] - targetY) >= scrollingAmount)
            {
                rectT.localPosition -= new Vector3(0, scrollingAmount, 0);
            }
            else
            {
                Vector3 pos = rectT.localPosition;
                rectT.localPosition = new Vector3(pos[0], targetY, pos[2]);

                mainMenu.SetActive(true);
                enabled = false;
                //FindObjectOfType<Audiomanager>().Play("Main Menu theme");
            }
        }
        else
        {
            scrollingTimer += Time.deltaTime;
        }
    }
}

