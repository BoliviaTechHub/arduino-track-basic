/* TRANSCRITO y CORREGIDO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:LIBRERIA Y CIRCUITOS INTEGRADOS PARA CONTROLAR MOTORES PASO A PASO
  PAGINA 20 DEL TEXTO*   */
  #include <Stepper.h>
  #define PASOS 200
  Stepper MiMotor(PASOS, 8, 9, 10, 11);
  
  
void setup() {
  // put your setup code here, to run once:
MiMotor.setSpeed(2);
}

void loop() {
  // put your main code here, to run repeatedly:
MiMotor.step(1024);
delay(500);
MiMotor.step(-1024);
delay(500);
}
