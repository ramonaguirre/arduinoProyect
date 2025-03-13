#define trig 7  //Emisor del pulso o señal
#define echo 6  //Receptor "del eco" del pulso o señal
#define buzzer 12 //Zumbador

void setup(){
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  long duracion, distancia; //Establecemos duracion y distancia como varialbes númericas extensas

  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(5);
  digitalWrite(trig, LOW);

  duracion = pulseIn(echo, HIGH); //Medimos el tiempo que la señal tarde en volver al sensor en microsegundos
  distancia = (duracion/2) * 0.0343; //La distancia es el tiempo por la velocidad del sonido (343 m/s = 0.0343 cm/microsegundo)
  
  if(distancia < 100){  //Si la distancia es menor de un metro
    tone(buzzer, 1000); //Suena el zumbador con una frecuencia de 1000Hz
    delay(5000);
  }else{
    noTone(buzzer);
  }
  Serial.println("Distancia");
  delay(1000);
  Serial.println(distancia);
}