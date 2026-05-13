// Blink LED - Pin 10
// Arduino Uno

int led = 10;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH); 
  delay(2000); // 2 SEC
  digitalWrite(led, LOW);
  delay(2000); // 2 SEC
}
