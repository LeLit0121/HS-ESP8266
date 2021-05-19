#include <dummy.h>
#include<ESP8266WiFi.h> // libraries

//clare varieties accesspointmode
char* ssid = "E-SMART HOME"; // name wifi
char* pass = "12345678"; // password
IPAddress ip_ap(10,0,231,76);
IPAddress gateway_ap(10,0,0,1);
IPAddress subnet_ap(255,255,0,0);

//clare varieties stationmode//
char* ssid_sta = "DESKTOP-NC5GEUV 8790"; // name wifi
char* pass_sta = "lalalalala"; // password

void setup() {
// set up chế độ//
WiFi.disconnect();
WiFi.mode(WIFI_AP_STA);
//AP//
WiFi.softAPConfig(ip_ap ,gateway_ap subnet_ap);
WiFi.softAP(ssid_ap ,pass_ap);
//STA//
WiFi.begin(ssid_sta, pass_sta);
//set up Serial port và print out IP đã kết nối ở staM//
Serial.begin(9600);
Serial.begin("connecting");
while (WiFi.status() != Wl_CONNECTED) {
  delay(500);
  Serial.print("...")'
}
Serial.println(WiFi.localIP());
}
void loop() {
  
}
