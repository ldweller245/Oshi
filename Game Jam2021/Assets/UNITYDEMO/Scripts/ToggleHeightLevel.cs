using UnityEngine;
using UnityEngine.Tilemaps;

public class ToggleHeightLevel : MonoBehaviour
{
    public float height = 0.0f;
    public GameObject[] enableCollider;
    public GameObject[] disableCollider;

    private void OnTriggerExit2D(Collider2D other)
    {
        var go = other.gameObject;

        Transform playerTransform;
        Transform parent = go.transform.parent;
        if (parent == null)
        {
            playerTransform = go.transform;
        }
        else
        {
            playerTransform = parent;
        }

        if (go == null || !other.gameObject.CompareTag("Player") || playerTransform.position.z == height)
            return;

        if (enableCollider != null)
        {
            foreach (var collider in enableCollider)
            {
                if (collider != null)
                {
                    collider.gameObject.SetActive(true);
                }
            }
        }
        if (disableCollider != null)
        {
            foreach (var collider in disableCollider)
            {
                if (collider != null)
                {
                    collider.gameObject.SetActive(false);
                }
            }
        }

        if (height == -50) return;

        var position = go.transform.position;
        var newPosition = new Vector3(position.x, position.y, height);
        playerTransform.position = newPosition;
    }
}

