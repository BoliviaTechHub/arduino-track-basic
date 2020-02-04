/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: ASIGNACION DE PINES PWM PARA VARIAR LA VELOCIDAD DE LOS MOTORES
  PAGINA 87 - 88 DEL TEXTO*   */
int IN1=5;
int IN2=6;
void setup() {
  // put your setup code here, to run once:
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(IN1, 255);
analogWrite(IN2, 0);
delay(2000);
analogWrite(IN1, 200);
analogWrite(IN2, 0);
delay(2000);
analogWrite(IN1, 120);
analogWrite(IN2, 0);
delay(2000);
analogWrite(IN1, 0);
analogWrite(IN2, 0);
delay(2000);
analogWrite(IN1, 0);
analogWrite(IN2, 255);
delay(2000);
analogWrite(IN1, 0);
analogWrite(IN2, 155);
delay(2000);
analogWrite(IN1, 0);
analogWrite(IN2, 0);
delay(3000);
}
