#include <Arduino.h>
// bynk stuff comes here blablabla
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
