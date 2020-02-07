/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:ENCENDIDO Y APAGADO DE UN LED DESDE UN CELULAR BLUETOOTH
  PAGINA 66 - 67 DEL TEXTO*   */
int led1=2;
char estado = 'A';

void setup() {
  // put your setup code here, to run once:
BT.begin(9600);
pinMode(led1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()!= 0) 
{
  estado = Serial.read();
}
switch(estado){
  case 'E': digitalWrite(led1, HIGH); break;
  case 'A': digitalWrite(led1, LOW); break;
}
}
