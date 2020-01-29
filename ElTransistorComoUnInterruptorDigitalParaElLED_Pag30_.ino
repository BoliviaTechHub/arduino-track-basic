/* TRANSCRITO Y CORREGIDO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:EL TRANSISTOR COMO UN INTERRUPTOR DIGITAL PARA EL LED
   *  PAGINA 30 DEL TEXTO*   */

const int ledPIN = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPIN, OUTPUT);
/*DEFINIR PIN COM SALIDA*/

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPIN, HIGH);
delay(1000);
digitalWrite(ledPIN, LOW);
delay(1000);
}
