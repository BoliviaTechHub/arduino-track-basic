 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: ENCENDIDO DE VARIOS LEDS CON ARDUINO
   *  PAGINA 44 DEL TEXTO*   */
int led1=0;
int led2=0;
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, INPUT); /*PULSADOR1*/
pinMode(9, INPUT); /*PULSADOR2*/

}

void loop() {
  // put your main code here, to run repeatedly:
  int pulsador1=digitalRead(8);
  int pulsador2=digitalRead(9);
  delay(200);
  if(pulsador1==0){
    led1 ++;
  }
  if(led1==3){/*Tercera Secuencia*/
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    led1=0;
  }
  if(pulsador2==0){
    led2 ++;
    }
if(led2==1){/*Primera Secuencia*/
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);
}
if(led2==3){/*Tercera Secuencia*/
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    led2=0;
  
}
} 
