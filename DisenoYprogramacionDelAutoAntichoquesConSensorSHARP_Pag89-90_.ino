/* TRANSCRITO y CORREGIDO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:DISEÑO Y PROGRAMACION DEL AUTO ANTICHOQUES CON SENSOR SHARP
  PAGINA 90 DEL TEXTO*   */
#include <SharpIR.h>
#define ir A0
#define model 1080
bool direccion = true;
SharpIR sharp(model, ir);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ir, INPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int dis = sharp.getDistance();
Serial.println(dis);
if(dis>100){
  adelanteVelocidadTres();
}
else {
  if(dis>50){
    adelanteVelocidadDos();
  }
  else{
    if(dis>20){
    adelanteVelocidadUno();
  }
  else {
    if (dis <= 20 and dis >7){
      parar();
      if(direccion){
        derecha();
        direccion = not direccion;
        delay(500);
      }
      else{
        izquierda();
        direccion = not direccion;
        delay(500);
      }
      
    }else{
      retro();
      delay(500);
    }
  }
    
  }
}
delay(10);
}
void adelanteVelocidadTres(){
  analogWrite(6, 255);
  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 0);
}
void adelanteVelocidadDos(){
  analogWrite(6, 200);
  analogWrite(9, 0);
  analogWrite(10, 200);
  analogWrite(11, 0);
}
void adelanteVelocidadUno(){
  analogWrite(6, 120);
  analogWrite(9, 0);
  analogWrite(10, 120);
  analogWrite(11, 0);
}
void parar(){
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
}
void retro(){
  analogWrite(6, 0);
  analogWrite(9, 200);
  analogWrite(10, 0);
  analogWrite(11, 200);
}
void derecha(){
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 200);
  analogWrite(11, 0);
}void izquierda(){
  analogWrite(6, 200);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
}
