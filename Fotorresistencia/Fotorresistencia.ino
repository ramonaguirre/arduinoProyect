const int ledTest
const int fotoDer = A0;
int valDer = 0;

void setup() {
  Serial.begin(9600);  

  pinMode(ledTest, OUTPUT);
  digitalWrite(ledTest, LOW);

  for(int i = 0; i < 3; i++){
    digitalWrite(ledTest, HIGH);
    delay(250);
    digitalWrite(ledTest, LOW);
    delay(250);
  }
}

void loop() { 
  valDer = analogRead(fotoDer);
  delay(100);

  Serial.println("Derecha");
  Serial.print(valDer);
  delay(500);
}
