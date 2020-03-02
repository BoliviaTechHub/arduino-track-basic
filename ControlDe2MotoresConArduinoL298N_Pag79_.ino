 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: CONTROL 2 DE MOTORES CON ARDUINO Y L298N
   *  PAGINA 79 DEL TEXTO*   */


void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000);
    digitalWrite(2, LOW);
      digitalWrite(3, LOW);
        digitalWrite(4, LOW);
          digitalWrite(5, LOW);
          delay(1000);
  

}
/*Los dos motores Funcionan a la vez*/
