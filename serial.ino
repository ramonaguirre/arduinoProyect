void void setup(){
    pinMode(13, OUTPUT);
    Serial.begin(9600);
}

void void loop(){
    Serial.print("Hola");
    delay(1000);
    Serial.print("Mundo");
    delay(1000);
}