

#include <WiFi.h>                                     // needed to connect to setup an accesspoint

// SSID and password that are going to be used for the Access Point you will create -> DONT use the SSID/Password of your router:
const char* ssid = "Ttaylor";
const char* password = "password";

// Configure IP addresses of the local access point
IPAddress local_IP(192,168,1,22);
IPAddress gateway(192,168,1,5);
IPAddress subnet(255,255,255,0);

void setup() {
  Serial.begin(115200);                               // init serial port for debugging
 
  Serial.print("Setting up Access Point ... ");
  Serial.println(WiFi.softAPConfig(local_IP, gateway, subnet) ? "Ready" : "Failed!");

  Serial.print("Starting Access Point ... ");
  Serial.println(WiFi.softAP(ssid, password) ? "Ready" : "Failed!");

  Serial.print("IP address = ");
  Serial.println(WiFi.softAPIP());
  
}

void loop() {
  // do something fun :-)
}
