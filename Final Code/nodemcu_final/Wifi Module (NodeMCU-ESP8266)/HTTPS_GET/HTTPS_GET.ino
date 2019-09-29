#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <WiFiClient.h>
String readString;
const char* ssid = "S9";
const char* password = "siddhesh";
const char* host = "script.google.com";
const int httpsPort = 443;
// Use WiFiClientSecure class to create TLS connection
WiFiClientSecure client;
// SHA1 fingerprint of the certificate, don't care with your GAS service
const char* fingerprint = "46 B2 C3 44 9C 59 09 8B 01 B6 F8 BD 4C FB 00 74 91 2F EF F6";
String GAS_ID = "AKfycbxWXqv6KXwNbcvMJtDEv6-uhULy2RyoJcExgZyj-QYm08CkyEy2";   // Replace by your GAS service id 
void setup() 
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  Serial.println(WiFi.localIP());
  client.setInsecure();
}

void loop() 
{
  sendData(100);
  delay(3000);
 /* while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
int a;
  if (Serial.available()) {
   a=Serial.read();
   Serial.print(a);
   sendData(a);
  }*/

}

// Function for Send data into Google Spreadsheet

void sendData(int peop)
{
  client.setInsecure();
  if (!client.connect(host, httpsPort)) {
    return;
  }
  

  if (client.verify(fingerprint, host)) {
  }
  String string_people =  String(peop, DEC); 
  String url = "/macros/s/" + GAS_ID + "/exec?people=" + string_people;

  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
         "Host: " + host + "\r\n" +
         "User-Agent: BuildFailureDetectorESP8266\r\n" +
         "Connection: close\r\n\r\n");

  while (client.connected()) {
  String line = client.readStringUntil('\n');
  if (line == "\r") {
    break;
  }
  }
  String line = client.readStringUntil('\n');
Serial.println("Done");
} 
