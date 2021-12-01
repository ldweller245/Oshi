using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;

public class SceneTreePack : MonoBehaviour 
{
	public bool showLeaf;
	public float windpower;

	public Text treeNumberText;
	public List<GameObject> treePC = new List<GameObject>();

	List<TreeControll> treeControlls = new List<TreeControll> ();

	int showNumber;
	int treeCount;


	void Start () 
	{
		treeCount = transform.childCount;

		for(int i = 0 ; i < treeCount ; ++i)
		{
			treePC.Add (transform.GetChild(i).gameObject);
			treeControlls.Add (transform.GetChild(i).GetComponent<TreeControll>());
		}

		TreeShowHide (true);
	}
	
	public void TreeShowHide(bool show)
	{ 
		treePC [showNumber].SetActive (show);
		treeControlls [showNumber].SetWindPower = windpower;
		treeControlls [showNumber].LeafHideShow(showLeaf);

		treeNumberText.text = string.Format ("Tree {0}",showNumber + 1);
	}

	public void ButtonRight()
	{
		TreeShowHide (false);

		if (showNumber.Equals (treeCount - 1))
			showNumber = 0;
		else
			showNumber++;
		
		TreeShowHide (true);
	}
	public void ButtonLeft()
	{
		TreeShowHide (false);

		if (showNumber.Equals (0))
			showNumber = treeCount - 1;
		else
			showNumber--;

		TreeShowHide (true);
	}

	public void SetWindPower(float wind)
	{
		windpower = wind;
		treeControlls [showNumber].SetWindPower = wind;
	}

	public void ShowLeaf(bool show)
	{
		showLeaf = show;
		treeControlls [showNumber].LeafHideShow(showLeaf);
	}



}
