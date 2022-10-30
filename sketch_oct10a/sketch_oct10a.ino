#define BLYNK_TEMPLATE_ID           "TMPLNhVJ-0aV"
#define BLYNK_DEVICE_NAME           "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "EMSzRfgj77JFztQT_doaDu0v0306xwyM"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "HaveFun";
char pass[] = "";

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  if(value == 1){
    digitalWrite(D1, HIGH);
  }else{
   digitalWrite(D1, LOW);
  }
  }
  
void setup()
{
  pinMode(D1, OUTPUT);
 
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();

}
