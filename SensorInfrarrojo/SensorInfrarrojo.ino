const int emIzq = 9;
const int emDer = 8;

const int reIzq = A0;
const int reDer = A1;

int ledTest = 13;

int refDer = 0;
int refIzq = 0;

void setup() {
  Serial.begin(9600);
  pinMode(emIzq, OUTPUT);
  pinMode(emDer, OUTPUT);
  pinMode(ledTest, OUTPUT);

  digitalWrite(emIzq, LOW);
  digitalWrite(emDer, LOW);
  digitalWrite(ledTest, LOW);

  //Saludo
  for(int i = 0; i <= 3; i++){
    digitalWrite(ledTest, HIGH);
    delay(500);
    digitalWrite(ledTest, LOW);
    delay(500);
  }
}

void loop() {
  //Sensor Izquierda

  digitalWrite(emIzq, HIGH);
  refIzq = analogRead(reIzq);
  delay(100);
  digitalWrite(emIzq, LOW);
  
  //Sensor Derecha
  digitalWrite(emDer, HIGH);
  refDer = analogRead(reDer);
  delay(100);
  digitalWrite(emDer, LOW);

  Serial.println("Izquierda / Derecha");
  Serial.print("   ");
  Serial.print(refIzq);
  Serial.print("         ");
  Serial.println(refDer);
  delay(1000);
}