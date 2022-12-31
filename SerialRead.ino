int ledPin = 13;
char command;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){
    command = Serial.read();
  }
  if (command == '1'){
    digitalWrite(ledPin, HIGH);
  }
  else if (command == '0'){
    digitalWrite(ledPin, LOW);
  }
  else{
    Serial.println("The command is not proper.");
  }
  delay(1000);
}
