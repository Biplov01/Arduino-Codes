int potValue;
int pwmPin = 3;

void setup() {
  pinMode(pwmPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(A0);
  Serial.println(potValue/4);
  analogWrite(pwmPin, potValue/4);
  delay(1000);
}
