  /* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: CONSTRUIMOS UN SELECTOR DE COLORES CON SERVOMOTOR Y SENSOR DE COLOR
  PAGINA  68 DEL TEXTO*   */
 #include <Servo.h>
 Servo MI_SERVO;
 int posicion = 0;
  const int s0 = 8;
  const int s1 = 9;
  const int s2 = 12;
  const int s3 = 11;
  const int out = 10;
  byte colorRojo = 0;
  byte colorVerde = 0;
  byte colorAzul = 0;
  
void setup() {
  // put your setup code here, to run once:
MI_SERVO.attach(3);
pinMode(s0, OUTPUT);
pinMode(s1, OUTPUT);
pinMode(s2, OUTPUT);
pinMode(s3, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(out, INPUT);
digitalWrite(s0, HIGH);
digitalWrite(s1, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
getColor();
if( colorRojo < colorAzul && colorVerde> 100 && colorRojo < 80)
{
  for(posicion =  0; posicion <= 60; posicion +=1){
    MI_SERVO.write(posicion);
    delay(150);
  }
}
  else if(colorAzul < colorRojo && colorAzul < colorVerde)
  {
    for(posicion =  0; posicion <= 120; posicion +=1){
    MI_SERVO.write(posicion);
    delay(15);
    }
  }
    else if(colorVerde < colorRojo && colorVerde < colorAzul){
    for(posicion =  0; posicion <= 180; posicion +=1){
    MI_SERVO.write(posicion);
    delay(15);  
}
    }
else{
  for(posicion =  0; posicion <= 0; posicion -=1){
    MI_SERVO.write(posicion);
    delay(15);
}
  }
  delay(300);
}

void getColor(){
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  colorRojo = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  digitalWrite(s3, HIGH);
  colorAzul = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  digitalWrite(s2, HIGH); 
   colorVerde = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
}
