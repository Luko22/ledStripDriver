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

int redPin, greenPin, bluePin;
BLYNK_WRITE(V0) {
  redPin = param.asInt();
}

BLYNK_WRITE(V1) {
  greenPin = param.asInt();
}

BLYNK_WRITE(V2) {
  bluePin = param.asInt();
}
void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
  Serial.println();
  delay(1000);

  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(500);
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 255);
  delay(500);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(500);
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 255);
  delay(500);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(500);
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 255);
  delay(500);

}

void loop() {
  Blynk.run();
  // put your main code here, to run repeatedly:
  analogWrite(RED, redPin);
  analogWrite(GREEN, greenPin);
  analogWrite(BLUE, bluePin);
  delay(10);

  Serial.print("RED: "); Serial.print(redPin); Serial.print(" | ");
  Serial.print("GREEN: "); Serial.print(greenPin); Serial.print(" | ");
  Serial.print("BLUE: "); Serial.print(bluePin); Serial.print(" | ");
  Serial.println();
}
