void setup() {
  
  pinMode(24, OUTPUT);
  pinMode(22,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(24, LOW);
  delay(2);
  digitalWrite(24, HIGH);
  delay(10);
  digitalWrite(24, LOW);

  long duration = pulseIn(22, HIGH);
  Serial.println("duration");
  Serial.println(duration);
  float distance = duration * 0.034 / 2;
  Serial.println(distance);
  delay(10);
}
