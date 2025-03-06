int ledR = 11;
int ledG = 10;
int ledB = 9;

int red = 0;
int green = 0;
int blue = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);

  analogWrite(ledR, 0);
  analogWrite(ledG, 0);
  analogWrite(ledB, 0);
  
  for(int i = 0; i <= 3; i++){
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(200);                     
    digitalWrite(LED_BUILTIN, LOW);  
    delay(200);
  }
}

void loop() {
  //ROJO
  /*
  for(red = 0; red <= 255; red++){
    analogWrite(ledR, red);
    delay(10);
  }
  for(red = 255; red >= 0; red--){
    analogWrite(ledR, red);
    delay(10);
  }
  //AZUL
  for(blue = 0; blue <= 255; blue++){
    analogWrite(ledB, blue);
    delay(10);
  }
  for(blue = 255; blue >= 0; blue--){
    analogWrite(ledB, blue);
    delay(10);
  }
  //VERDE
  for(green = 0; green <= 255; green++){
    analogWrite(ledG, green);
    delay(10);
  }
  for(green = 255; green >= 0; green--){
    analogWrite(ledG, green);
    delay(10);
  }
  */

  //VIOLETA
  analogWrite(ledB, 255);
  analogWrite(ledR, 90);

}