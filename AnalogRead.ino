int potPin = A0;
int potValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
 potValue = analogRead(A0);
 Serial.print("POT value is: ");
 Serial.println(potValue);
 delay(1000);
}
