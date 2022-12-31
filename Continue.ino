void setup() {
  Serial.begin(9600);
}


void loop() {
  for (int i = 0; i < 10; i ++) {
    if (i > 2 && i < 6) { // skips 3, 4 and 5
        continue;
    }
    Serial.println(i);
    delay(1000);
  }
}
