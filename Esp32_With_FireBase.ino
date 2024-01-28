#include<WiFi.h>
#include<IOXhop_FirebaseESP32.h>
#define firebase_host "xyz"
#define firebase_auth "abc"
#define Wifi_SSID "Name Of your Hotspot"
#define Wifi_Password "XYZ"
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
WiFi.begin(Wifi_SSID,Wifi_Password);
Serial.print("connecting");
while(WiFi.status()!=WL_CONNECTED){
  Serial.print("*");
  delay(500);
}
Serial.println("Connected: ");
Firebase.begin(firebase_host,firebase_auth);
Serial.println("Firebase Connected");
}

void loop() {
  // put your main code here, to run repeatedly:
//  Get the values from firebase real time database
int getInt(String path) ;
float getFloat(String path) ;
String getString(String path) ;
bool getBool(String path) ;
void get(String path, int &value) ;
void get(String path, float &value) ;
void get(String path, String &value) ;
void get(String path, bool &value) ;

// Set the values to the realtime database
void setInt(String path, int value) ;
void setFloat(String path, float value, int point = 2) ;
void setString(String path, String value) ;
void setBool(String path, bool value) ;
void set(String path, int value) ;
void set(String path, float value, int point = 2) ;
void set(String path, String value) ;
void set(String path, bool value) ;
void set(String path, JsonVariant value) ;
}
