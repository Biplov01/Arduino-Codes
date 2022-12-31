int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, LOW);
  for (int i = 0; i < 10; i++){
    Serial.print(i);
    delay(1000);    
  }
  digitalWrite(ledPin, HIGH);
  delay(2000);
}
