// Define pin numbers for the LEDs
#include <cvzone.h>

SerialData serialData(3,1);

int valsRec[3]; // array of int with size numOfValsRec 

#define GREEN_PIN 11
#define RED_PIN 10
#define BLUE_PIN 9

void setup() {
  serialData.begin();

  // Set pin modes for the LEDs
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  analogWrite(BLUE_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(RED_PIN, 255);
  delay(500);

  analogWrite(BLUE_PIN, 0);
  analogWrite(GREEN_PIN, 0);
  analogWrite(RED_PIN, 0);
  delay(500);

   analogWrite(BLUE_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(RED_PIN, 255);
  delay(500);

}

void loop() {
  
  serialData.Get(valsRec);

  // Turn on all LEDs to their maximum brightness
  analogWrite(BLUE_PIN, valsRec[0]);
  analogWrite(GREEN_PIN, 0);
  analogWrite(RED_PIN, 0);

  int Test = valsRec[0];

  // Print analog readings for each LED
  Serial.print("LED:");
  Serial.print(analogRead(BLUE_PIN));
  Serial.print(" | ");
  Serial.println(valsRec[0]);

  // Serial.print("Red: ");
  // Serial.print(analogRead(RED_PIN));
  // Serial.print(" | ");
  // Serial.print("Blue: ");
  // Serial.println(analogRead(BLUE_PIN));

 // Delay for readability
}