const int emIzq = 9;
const int emDer = 8;
const int ledTest = 13;
const int AIA = 3;
const int AIB = 11;
const int BIA = 10;
const int BIB = 6;
const int reIzq = A0;
const int reDer = A1;

int valIzq = 0;
int valDer = 0;

void setup() {
  pinMode(emIzq, OUTPUT);
  pinMode(emDer, OUTPUT);
  pinMode(ledTest, OUTPUT);
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

  digitalWrite(ledTest, LOW);
  digitalWrite(emIzq, 0);
  digitalWrite(emDer, 0);

  for(int i = 0; i < 3; i++){
    digitalWrite(ledTest, HIGH);
    delay(250);
    digitalWrite(ledTest, LOW);
    delay(250);
  }
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledTest, HIGH);
  digitalWrite(emIzq, HIGH);
  valIzq = analogRead(reIzq);
  
  digitalWrite(emDer, HIGH);
  valDer = analogRead(reDer);
  digitalWrite(ledTest, LOW);

  Serial.print(valIzq);
  Serial.print(" , ");
  Serial.print(valDer);

  movimiento();
  delay();
}

void movimiento(){
  if(valDer < 100 && valIzq < 100){
    atras();
  }else if(valDer > 100 && valIzq > 100){
    adelante();
  }else if(valDer < 100 && valIzq > 100){
    derecha();
  }else if(valDer > 100 && valIzq < 100){
    izquierda();
  }
}

void adelante(){
  digitalWrite(AIA, 255);
  digitalWrite(AIB, 0);
  digitalWrite(BIA, 255);
  digitalWrite(BIB, 0);
}
void atras(){
  digitalWrite(AIA, 0);
  digitalWrite(AIB, 255);
  digitalWrite(BIA, 0);
  digitalWrite(BIB, 255);
}
void derecha(){
  digitalWrite(AIA, 255);
  digitalWrite(AIB, 255);
  digitalWrite(BIA, 255);
  digitalWrite(BIB, 0);
}
void izquierda(){
  digitalWrite(AIA, 255);
  digitalWrite(AIB, 0);
  digitalWrite(BIA, 255);
  digitalWrite(BIB, 255);
}

















