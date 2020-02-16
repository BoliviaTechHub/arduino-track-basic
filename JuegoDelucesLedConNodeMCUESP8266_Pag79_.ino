
/* TRANSCRITO   POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 6º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:JIUEGO DE LUCES  LED CON NODEMCU ESP8266
  PAGINA 79 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);
pinMode(D4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(D2, HIGH);
delay(500);
digitalWrite(D2, LOW);
delay(500);
digitalWrite(D3, HIGH);
delay(500);
digitalWrite(D3, LOW);
delay(500);
digitalWrite(D4, HIGH);
delay(500);
digitalWrite(D4, LOW);
delay(500);
}
