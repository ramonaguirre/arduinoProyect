bool estado = 0;

void setup(){
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop(){
  int lectura = digitalRead(7);
  if (lectura == LOW){
    delay(250);
    estado =!estado;
  }
  if (estado == 0){
    digitalWrite(8, LOW);
  }
  else{
    digitalWrite(8, HIGH);
  }
}