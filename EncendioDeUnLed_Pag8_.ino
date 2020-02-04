/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: ENCENDIDO DE UN LED
  PAGINA 8 DEL TEXTO*   */
const int ledPIN = 9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); /*INICIAR PUERTO EN SERIE*/
pinMode(ledPIN, OUTPUT); /*INICIAR PIN DE SALIDA*/


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPIN, HIGH);
delay(1000);
digitalWrite(ledPIN, LOW);
delay(1000);

}
