 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: USO DE LDR PARA ENCENDIDO DEL LED DEL ARDUINO
   *  PAGINA 55 DEL TEXTO*   */
int entrada;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  entrada=digitalRead(3);
  if(entrada==1){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }

}
/*La luz del led del arduino permanecera encendida mientras haya luz, 
 * si la tapamos que se quede a oscuras el led del arduino se apagara*/
