

#define GREEN_PIN 11
#define RED_PIN 10
#define BLUE_PIN 9

void setup() {

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
  
  analogWrite(BLUE_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(RED_PIN, 255);
  delay(500);

  int b;
  for (b=0; b<255; b++){
    analogWrite(BLUE_PIN, 255);
    analogWrite(GREEN_PIN, 255-b);
    analogWrite(RED_PIN, 255-b);
    delay(50);
  }

  int p;
  for (p=0; p<255; p++){
    analogWrite(BLUE_PIN, 255);
    analogWrite(GREEN_PIN, p);
    analogWrite(RED_PIN, p);
    delay(50);
  }
 // Delay for readability
}