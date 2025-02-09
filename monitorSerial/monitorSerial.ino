const int pulsador = 7;
const int led = 8;
int contador = 0;

void setup(){
  pinMode(pulsador, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int lectura = digitalRead(pulsador);

  if (lectura == LOW){
    Serial.print("Pulsador = ON");
    digitalWrite(8, HIGH);
    delay(250);
    digitalWrite(8, LOW);
    delay(250);
  }
  else{
    Serial.print("Pulsador = OFF");
    delay(250);
  }
  Serial.print(" ");
  Serial.print(contador);
  contador =contador+1;
  Serial.println();
}