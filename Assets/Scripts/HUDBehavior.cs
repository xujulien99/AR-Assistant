using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HUDBehavior : MonoBehaviour
{

    GameObject test;
    public Rigidbody rigidbody;

    // Start is called before the first frame update
    void Start()
    {
        rigidbody = GetComponent<Rigidbody>();

        EnableRagdoll();
    }

    // Update is called once per frame
    void Update()
    {
        //var headPosition = Camera.main.transform.position;
        //var gazeDirection = Camera.main.transform.forward;

        //this.transform.position = headPosition + gazeDirection * 5;
        //this.transform.rotation = Quaternion.LookRotation(this.transform.position - Camera.main.transform.position);
    }

    void EnableRagdoll()
    {
        rigidbody.isKinematic = false;
        rigidbody.detectCollisions = true;
    }

    void DisableRagdoll()
    {
        rigidbody.isKinematic = true;
        rigidbody.detectCollisions = false;
    }
}
