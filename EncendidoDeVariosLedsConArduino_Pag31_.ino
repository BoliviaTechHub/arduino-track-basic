/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: ENCENDIDO DE VARIOS  LEDS CON ARDUINO
   *  PAGINA 31 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(3, LOW);
   digitalWrite(4, LOW);
    digitalWrite(5, LOW);
     digitalWrite(6, LOW);
      digitalWrite(7, LOW);
       digitalWrite(8, LOW);
       delay(500);
  

}
