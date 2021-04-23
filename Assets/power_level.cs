using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class power_level : MonoBehaviour
{

    public Text changingText;
    public GameObject deactivated;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(startActivationDelay());
    }

    // Update is called once per frame
    void Update()
    {
        update_battery_info();
    }

    public void update_battery_info()
	{
        string power_text = "Power Level: ";
        string power_text_value = string.Format("{0}%", SystemInfo.batteryLevel * 100);
        
        changingText.text = power_text + power_text_value;
	}

    IEnumerator startActivationDelay()
	{
        bool activation_state = true;
		while (true)
		{
            yield return new WaitForSecondsRealtime(5);
            deactivated.SetActive(activation_state);
            activation_state = ! activation_state;
        }
    }

}
