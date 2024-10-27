int ldrPin = A0;   // LDR'nin bağlı olduğu analog pin
int ledPin = 13;   // LED'in bağlı olduğu dijital pin

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < 500) { // Işık seviyesi düşükse
    digitalWrite(ledPin, HIGH); // LED yanar
  } else {
    digitalWrite(ledPin, LOW);  // LED söner
  }
  delay(500);
}
