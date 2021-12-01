using UnityEngine;

public class FollowThePath : MonoBehaviour {

	[SerializeField]
	Transform[] waypoints;

	[SerializeField]
	float moveSpeed = 2f;

	int waypointIndex = 0;

	Vector3 defaultScale;
	void Start () {
		transform.position = waypoints [waypointIndex].transform.position;

		defaultScale = transform.localScale;
	}

	void Update () {
		Move ();
	}

	void Move()
	{
		Vector3 previousPos = transform.position;
		transform.position = Vector2.MoveTowards (transform.position,
												waypoints[waypointIndex].transform.position,
												moveSpeed * Time.deltaTime);

		Vector3 movement = transform.position - previousPos;
		float movementX = Mathf.Sign(movement.x) != 0 ? Mathf.Sign(movement.x) : 0;
		float movementY = Mathf.Sign(movement.y) != 0 ? Mathf.Sign(movement.y) : 0;
		Vector3 movementDir = new Vector3(movementX, movementY, 0);
		if (movementDir.x != 0)
        {
			transform.localScale = new Vector3(-defaultScale.x * movementDir.x, transform.localScale.y, transform.localScale.z);
        }

		if (transform.position == waypoints [waypointIndex].transform.position) {
			waypointIndex += 1;
		}
				
		if (waypointIndex == waypoints.Length)
			waypointIndex = 0;
	}

}
