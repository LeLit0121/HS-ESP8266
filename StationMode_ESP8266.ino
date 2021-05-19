#include <dummy.h>
#include<ESP8266WiFi.h> // libraries

//clare varieties
char* ssid = "DESKTOP-NC5GEUV 8790"; // name wifi
char* pass = "lalalalala"; // password

void setup() {
// set up Accesspoint
WiFi.disconnect();
WiFi.mode(WIFI_STA);
WiFi.begin(ssid ,pass);

Serial.begin(9600);
Serial.print("connecting");
while(WiFi.status() !=WL_CONNECTED) {
  delay(500);
  Serial.print("....");
}
Serial.println(WiFi.localIP()); 

}
void loop() {
digitalWrite(2, HIGH);
delay(100);
digitalWrite(2, LOW);
delay(100);
}
