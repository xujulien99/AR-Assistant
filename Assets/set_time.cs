using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class set_time : MonoBehaviour
{

    public Text changingText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        update_time();
    }

    public void update_time()
	{
        string time = System.DateTime.UtcNow.ToString("t");
        changingText.text = time;
	}
}


/*
 
 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class setTIme : MonoBehaviour
{

    public Text changingText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        updateTime();
    }

    void updateTime(){
        changingText.text = System.DateTime.UtcNow.ToString("HH:mm:ss");
    }
}

 */