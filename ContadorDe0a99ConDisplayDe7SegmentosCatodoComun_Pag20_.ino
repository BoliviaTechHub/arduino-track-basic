/* TRANSCRITO Y CORREGIDO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:CONTADOR DEL 0 A 99 CON DOS DISPLAY DE 7 SEGMENTOS CATODO COMUN
   *  PAGINA 19 20 DEL TEXTO*   */

void setup() {
  // put your setup code here, to run once:
for(int a=2; a<=11; a++){
  pinMode(a, OUTPUT);
}
}
void fdisplay( int a, int b, int c, int d, int e, int f, int g){
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  digitalWrite(6, e);
  digitalWrite(7, f);
  digitalWrite(8, g);  
}
void loop() {
  // put your main code here, to run repeatedly:
for(int d=0; d<10; d++){
  for(int u=0; u<10; u++){
    numero(d,u);
  }
}
}
void digito(int d){
  switch(d){
    case 0: fdisplay(1,1,1,1,1,1,0); break;
    case 1: fdisplay(0,1,1,0,0,0,0); break;
    case 2: fdisplay(1,1,0,1,1,0,1); break;
    case 3: fdisplay(1,1,1,1,0,0,1); break;
    case 4: fdisplay(0,1,1,0,0,1,1); break;
    case 5: fdisplay(1,0,1,1,0,1,1); break;
    case 6: fdisplay(1,0,1,1,1,1,1); break;
    case 7: fdisplay(1,1,1,0,0,0,0); break;
    case 8: fdisplay(1,1,1,1,1,1,1); break;
    case 9: fdisplay(1,1,1,1,0,1,1); break;
  }
  delay(5); //*puede variar el tiempo entre 1 a 15*/
}
void numero(int d, int u){
  for( int i=0; i<50; i++){
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digito(d);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digito(u);
  }
}
