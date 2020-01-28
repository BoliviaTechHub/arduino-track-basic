/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:ENCENDIDO DE 3 LEDS POR DISTANCIA
   *  PAGINA 78-79  DEL TEXTO*   */
long dis;
long tiempo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8, INPUT);
pinMode(9, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, 0);
delayMicroseconds(5);
digitalWrite(9, 1);
delayMicroseconds(10);
tiempo=pulseIn(8, 1);
dis= int(0.017-tiempo);
Serial.println(dis);
delay(10);
if(dis> 45){
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);  
}
if(dis>=0 and dis<15){
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);  
}
if(dis>=15 and dis<30){
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);  
}
if(dis>=30 and dis<45){
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);  
}
}
