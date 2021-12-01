using System.Collections;
using System.Collections.Generic;

using UnityEngine;

public class TreeControll : MonoBehaviour 
{
	public Animator treeAni;

	[Range(0.0f, 1.0f)]
	public float windPower = 0.5f;

	public bool showLeaf = true;
//	bool leafState;
	public List<GameObject> leafs = new List<GameObject>();


	public float SetWindPower
	{
		set 
		{
			windPower = value;

			if (!treeAni.Equals (null)) 
				treeAni.SetFloat ("Wind",windPower);
		}
	}

	public bool ShowLeaf
	{
		set 
		{
			showLeaf = value;
			LeafHideShow (showLeaf);
		}
	}


	void Start()
	{
//		leafState = showLeaf;
		LeafHideShow (showLeaf);
	}
	
//	void Update () 
//	{
//		if (!showLeaf.Equals (leafState)) {
//			leafState = showLeaf;
//			LeafHideShow (showLeaf);
//		}
//
//		if (!treeAni.Equals (null)) 
//			treeAni.SetFloat ("Wind",windPower);
//	}


	public void LeafHideShow(bool value)
	{
		showLeaf = value;

		if (!leafs.Count.Equals (0)) 
		{
			int count = leafs.Count;
		
			for(int i = 0 ; i < count ; ++i)
			{
				leafs [i].SetActive (showLeaf);
			}
		}
	}

}
