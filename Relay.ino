int ldrValue;
int relayPin = 12;
void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  ldrValue = analogRead(A1);
  Serial.println(ldrValue);
  if (ldrValue < 100) {
    digitalWrite(relayPin, HIGH);
  }
  else {
    digitalWrite(relayPin, LOW);
  }
  delay(1000);
}
