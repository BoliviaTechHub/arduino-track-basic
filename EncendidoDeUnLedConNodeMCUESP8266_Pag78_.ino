
/* TRANSCRITO   POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 6º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:ENCENDIDO DE UN LED CON NODEMCU ESP8266
  PAGINA 78 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(D7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(D7, HIGH);
delay(500);
digitalWrite(D7, LOW);
delay(500);
}
