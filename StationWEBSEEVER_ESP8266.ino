#include <dummy.h>
#include<ESP8266WiFi.h> // libraries
#include<ESP8266WebServer.h> // khai bao thu vien va bien webserver
ESP8266WebServer webServer(80);

//clare varieties
char* ssid = "DESKTOP-NC5GEUV 8790"; // name wifi
char* pass = "lalalalala"; // password//
  
void setup() {
pinMode(2 ,OUTPUT);
digitalWrite(2, HIGH);

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
//THIET LAP WEBSER
webServer.on("/", []() {
  webServer.send(200,"text/html", "button><a href =\"/toggle\">TOGGLE</a></button>"); 
});
webServer.on("toggle",[] () {
  digitalWrite(2 ,!digitalRead(2));
  webServer.send(200,"text/html", "button><a href =\"/toggle\">TOGGLE</a></button>");
});
webServer.begin();

}
webServer.handleClient();
}
