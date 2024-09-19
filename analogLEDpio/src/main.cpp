#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL4eaDBjs8i"
#define BLYNK_TEMPLATE_NAME "AnalogLED"
#define BLYNK_AUTH_TOKEN "q8vm40fjnocxbgwH9E5GAzi6ghfeoE7A"

#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

const char *ssid = "LukoSpot";
const char *password = "Duisbu5.";


#define RED 27
#define GREEN 26
#define BLUE 25

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  // analogWrite(RED, 0);
  // analogWrite(GREEN, 0);
  // analogWrite(BLUE, 0);
  // delay(3000);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 255);
  delay(1000);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(1000);
  analogWrite(RED, 255);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(1000);  
  analogWrite(RED, 0);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
  delay(1000);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 255);
  delay(1000);
}
