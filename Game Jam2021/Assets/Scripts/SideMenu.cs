using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SideMenu : MonoBehaviour
{
    [SerializeField] GameObject menu1;

    public enum MenuIndex
    {
        NONE, MENU1
    }

    MenuIndex currentMenu = MenuIndex.NONE;
    public void SetCurrentMenu(MenuIndex menu)
    {
        DeactivateAllMenus();

        currentMenu = menu;

        switch (currentMenu)
        {
            case MenuIndex.MENU1:
                menu1.SetActive(true);
                break;
        }
    }

    public void ActivateSideMenu()
    {
        if (currentMenu == MenuIndex.NONE)
        {
            SetCurrentMenu(MenuIndex.MENU1);
        }
        else if (currentMenu == MenuIndex.MENU1)
        {
            SetCurrentMenu(MenuIndex.NONE);
        }
    }

    public MenuIndex GetCurrentMenu()
    {
        return currentMenu;
    }

    private void DeactivateAllMenus()
    {
        menu1.SetActive(false);
    }
}

