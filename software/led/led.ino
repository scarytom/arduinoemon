int greenPin = 5;
int redPin = 6;
int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 200);
  analogWrite(bluePin, 200);
}
