/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:INVERTIR GIRO DE UN MOTOR CON CIRCUITO L298D
   *  PAGINA 66  DEL TEXTO*   */
char dato;

void setup() {
  // put your setup code here, to run once:
dato = '0';
pinMode(5, OUTPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
dato = Serial.read();
if(dato == '0'){
  digitalWrite(5,LOW);
  digitalWrite(13, LOW);
  
}
if(dato == '1'){
  digitalWrite(5,HIGH);
  digitalWrite(13, LOW);
}
if(dato == '2'){
  digitalWrite(5,LOW);
  digitalWrite(13, HIGH);
}

/*TRASNCRIPCION POR GUSTAVO JARRO CALLIZAYA*/
}
