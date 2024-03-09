void setup() {
  pinMode (3, OUTPUT);// put your setup code here, to run once:
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
}

void loop() {
  digitalWrite(6, LOW);// put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delay (500);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay (500);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay (500);
}
