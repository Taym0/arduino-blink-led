// Blink External LED - Pin 10
// Components: LED, 220Ω Resistor, Breadboard
// Arduino Uno

int led = 10;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
