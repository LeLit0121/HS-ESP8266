#include <dummy.h>
#include<ESP8266WiFi.h> // libraries

//clare varieties
char* ssid = "E-SMART HOME"; // name wifi
char* pass = "12345678"; // password
IPAddress ip(10,0,231,76);
IPAddress gateway(10,0,0,1);
IPAddress subnet(255,255,0,0);

void setup() {
// set up Accesspoint
WiFi.disconnect();
WiFi.mode(WIFI_AP);
WiFi.softAPConfig(ip ,gateway, subnet);
WiFi.softAP(ssid ,pass);
Serial.begin(9600);
Serial.println("ESP operating in accesspoin mode!"); // done set up accesspoint
pinMode(2 , OUTPUT);

}
void loop() {
digitalWrite(2, HIGH);
delay(100);
digitalWrite(2, LOW);
delay(100);
}
