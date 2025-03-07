int trig = 8;
int eco = 11;
long tiempoPulso;
float dstMedida;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);

  digitalWrite(trig, LOW);
}
void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  tiempoPulso = pulseIn(eco, HIGH);
  dstMedida = 0.0340 / 2 * tiempoPulso;
  Serial.println("Tiempo / Distancia");
  Serial.print(tiempoPulso);
  Serial.print(" / ");
  Serial.println(dstMedida);
  delay(500);
}