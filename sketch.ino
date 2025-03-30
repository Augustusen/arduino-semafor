int crvena1 = 8;
int zuta1 = 9;
int zelena1 = 10;
int crvena2 = 5;
int zuta2 = 6;
int zelena2 = 7;
void setup() {
  pinMode(zelena1, OUTPUT);
  pinMode(zuta1, OUTPUT);
  pinMode(crvena1, OUTPUT);
  pinMode(zelena2, OUTPUT);
  pinMode(zuta2, OUTPUT);
  pinMode(crvena2, OUTPUT);
}

void loop() {
  digitalWrite(zuta1, LOW);
  digitalWrite(zuta2, LOW);
  digitalWrite(crvena1, HIGH);
  digitalWrite(zelena2, HIGH);
  delay(5000);
  digitalWrite(zuta1, HIGH);
  delay(1000);
  digitalWrite(zuta1, LOW);
  digitalWrite(crvena1, LOW);
  digitalWrite(zelena2, LOW);
  digitalWrite(zuta1, HIGH);
  digitalWrite(zuta2, HIGH);
  delay(2000);
  digitalWrite(zuta1, LOW);
  digitalWrite(zuta2, LOW);
  digitalWrite(zelena1, HIGH);
  digitalWrite(crvena2, HIGH);
  delay(5000);
  digitalWrite(zuta2, HIGH);
  delay(1000);
  digitalWrite(zelena1, LOW);
  digitalWrite(crvena2, LOW);
  digitalWrite(zuta2, LOW);
  digitalWrite(zuta1, HIGH);
  digitalWrite(zuta2, HIGH);
  delay(2000);


}
