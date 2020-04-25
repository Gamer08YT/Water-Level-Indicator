#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>          

#include <DNSServer.h>            
#include <ESP8266WebServer.h>     
#include <WiFiManager.h>          
#include <BlynkSimpleEsp8266.h>

char blynk_token[] = "YOUR-BLYNK-TOKEN";

void setup()
{
  // Debug console
  Serial.begin(115200);

  // Init WifiManager
  WiFiManager wifiManager;
  
   wifiManager.autoConnect("Zisterne", "FALLBACK-PASSWORD");

   WiFiManagerParameter tokenIO("Blynk", "blynk token", blynk_token, 33);
   wifiManager.addParameter(&tokenIO);
   wifiManager.autoConnect("Blynk");
   
   Blynk.config(tokenIO.getValue());
}

void loop()
{
  Blynk.run();
}
