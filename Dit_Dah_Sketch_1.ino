int blueLED=5;
int greenLED=4;
int dit=50;
int dah=300;
int longW=600;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(blueLED, HIGH);
delay(dah);
digitalWrite(blueLED, LOW);
delay(100);
digitalWrite(blueLED, HIGH);
delay(dah);
digitalWrite(blueLED, LOW);
delay(100);
digitalWrite(blueLED, HIGH);
delay(dah);
digitalWrite(blueLED, LOW);
delay(longW);
digitalWrite(blueLED, HIGH);
delay(dit);
digitalWrite(blueLED, LOW);
delay(100);
digitalWrite(blueLED, HIGH);
delay(dit);
digitalWrite(blueLED, LOW);
delay(100);
digitalWrite(blueLED, HIGH);
delay(dit);
digitalWrite(blueLED, LOW);
delay(longW);

digitalWrite(greenLED, LOW);
delay(dah);
digitalWrite(greenLED, HIGH);
delay(100);
digitalWrite(greenLED, LOW);
delay(dah);
digitalWrite(greenLED, HIGH);
delay(100);
digitalWrite(greenLED, LOW);
delay(dah);
digitalWrite(greenLED, LOW);
delay(longW);
digitalWrite(greenLED, LOW);
delay(dit);
digitalWrite(greenLED, HIGH);
delay(100);
digitalWrite(greenLED, LOW);
delay(dit);
digitalWrite(greenLED, HIGH);
delay(100);
digitalWrite(greenLED, LOW);
delay(dit);
digitalWrite(greenLED, LOW);
delay(longW);

}


