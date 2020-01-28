/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:ENCENDIDO DE UN LED
   *  PAGINA 8  DEL TEXTO*   */
const int ledPIN=11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);/*Iniciar puerto de serie*/
pinMode(ledPIN, OUTPUT); /*definir pin como Salida*/
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPIN, HIGH); /*Poner el PIN en HIGH*/
  delay(1000); /*Esperar un Segundo*/
  digitalWrite(ledPIN, LOW); /*Poner el PIN en LOW*/
  delay(1000); /*Esperar un Segundo*/
}
   
