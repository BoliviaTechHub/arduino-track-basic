/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: AUTO ANTICHOQUES
  PAGINA  43 DEL TEXTO*   */
long distancia;
long tiempo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8, INPUT);
pinMode(9, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, LOW);
delayMicroseconds(5);
digitalWrite(9, HIGH);
delayMicroseconds(10);
tiempo=pulseIn(8, HIGH);
distancia= int (0.017*tiempo);
Serial.println(distancia);
delay(1000);
if(distancia>=20){
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  
}
else{
  digitalWrite(4,LOW);
  digitalWrite(5, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);  
}
}
