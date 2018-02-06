void setup() {
  for (int i=0; i<=8; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
 for (int i=0; i<=8; i++){
  for (int j=0; j<=i; j++){
    digitalWrite(j, HIGH);
  }
  delay(1000);
  for (int j=0; j<=i; j++){
    digitalWrite(j, LOW);
  }
  delay(1000);
 }
}
