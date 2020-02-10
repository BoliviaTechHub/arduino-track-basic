/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:VENTILADOR CONTROLADO DESDE CELULAR POR BLUETOOTH
  PAGINA 68 DEL TEXTO*   */
int pinV = 2;
char estado = 'A';
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinV, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() !=0){
  estado = Serial.read();
}
switch ( estado){
  case 'E': digitalWrite(pinV, HIGH); break;
  case 'A': digitalWrite(pinV, LOW); break;
}
}
