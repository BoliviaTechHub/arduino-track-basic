/* TRANSCRITO y CORREGIDO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:DISEÑO DEL CONTROL PARA AUTO EN APP INVENTOR
  PAGINA 78 DEL TEXTO*   */
int Pin_Motor_Der_A = 8;
int Pin_Motor_Der_B = 9;
int Pin_Motor_Izq_A = 10;
int Pin_Motor_Izq_B = 11;
int tiempo = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Pin_Motor_Der_A, OUTPUT);
pinMode(Pin_Motor_Der_B, OUTPUT);
pinMode(Pin_Motor_Izq_A, OUTPUT);
pinMode(Pin_Motor_Izq_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  char dato = Serial.read();
  switch(dato){
    case 'A': Mover_Adelante(); break;
    case 'R': Mover_Retroceso(); break;
    case 'D': Mover_Dereccha(); break;
    case 'I': Mover_Izquierda(); break;
    case 'S': Mover_Stop(); break;
  }
}
delay(1); /*pausa de 1ms por ciclo*/

}
void Mover_Adelante(){
  digitalWrite(Pin_Motor_Der_A, HIGH);
  digitalWrite(Pin_Motor_Der_B, LOW);
  digitalWrite(Pin_Motor_Izq_A, HIGH);
  digitalWrite(Pin_Motor_Izq_B, LOW);
}
void Mover_Retroceso(){
  digitalWrite(Pin_Motor_Der_A, LOW);
  digitalWrite(Pin_Motor_Der_B, HIGH);
  digitalWrite(Pin_Motor_Izq_A, LOW);
  digitalWrite(Pin_Motor_Izq_B, HIGH);
}
void Mover_Dereccha(){
  digitalWrite(Pin_Motor_Der_A, LOW);
  digitalWrite(Pin_Motor_Der_B, HIGH);
  digitalWrite(Pin_Motor_Izq_A, HIGH);
  digitalWrite(Pin_Motor_Izq_B, LOW);
}
void Mover_Izquierda(){
  digitalWrite(Pin_Motor_Der_A, HIGH);
  digitalWrite(Pin_Motor_Der_B, LOW);
  digitalWrite(Pin_Motor_Izq_A, LOW);
  digitalWrite(Pin_Motor_Izq_B, HIGH);
}
void Mover_Stop(){
  digitalWrite(Pin_Motor_Der_A, LOW);
  digitalWrite(Pin_Motor_Der_B, LOW);
  digitalWrite(Pin_Motor_Izq_A, LOW);
  digitalWrite(Pin_Motor_Izq_B, LOW);
}
