const float resolucao = 0.0048828125;
void setup() {
  Serial.begin(115200);
}

void loop() {
  float v[2];
  Serial.println(analogRead(1)*resolucao);
  delay(5);
 
}
