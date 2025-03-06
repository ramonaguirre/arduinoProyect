int ledBD = 2;
int ledBI = 6;
int ledRD = 7;
int ledRI = 8;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledBD, OUTPUT);
  pinMode(ledBI, OUTPUT);
  pinMode(ledRD, OUTPUT);
  pinMode(ledRI, OUTPUT);

  digitalWrite(ledBD, HIGH);
  digitalWrite(ledBI, HIGH);
  digitalWrite(ledRD, LOW);
  digitalWrite(ledRI, LOW);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);  
  delay(500);

  //Blancas Fijas
  digitalWrite(ledBD, HIGH);
  digitalWrite(ledBI, HIGH);    
  //Rojas parpadean
  for(int j = 0; j < 10; j++){
  digitalWrite(ledRD, LOW);    
  digitalWrite(ledRI, LOW);
  delay(500);
  digitalWrite(ledRD, HIGH);    
  digitalWrite(ledRI, HIGH); 
  delay(500);
  }   
  digitalWrite(ledBD, LOW);
  digitalWrite(ledBI, LOW);
  digitalWrite(ledRD, LOW);
  digitalWrite(ledRI, LOW);
  delay(2000);
}