/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:APLICACION PARA MOSTRAR DIGITOS DEL 0 AL 9 EN EL DISPLAY DE 7 SEGMENTOS
  PAGINA 75 76077 DEL TEXTO*   */
  char estado = 'a';
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for (int i = 2; i < 9; i++)
{
  pinMode(i, OUTPUT);
}
}
void fDisplay(int a, int b, int c, int d, int e, int f, int g){
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
if(Serial.available() !='a'){
  estado = Serial.read();
}
 switch(estado){
    case '0': fDisplay(1,1,1,1,1,1,0); break;
    case '1': fDisplay(0,1,1,0,0,0,0); break;
    case '2': fDisplay(1,1,0,1,1,0,1); break;
    case '3': fDisplay(1,1,1,1,0,0,1); break;
    case '4': fDisplay(0,1,1,0,0,1,1); break;
    case '5': fDisplay(1,0,1,1,0,1,1); break;
    case '6': fDisplay(1,0,1,1,1,1,1); break;
    case '7': fDisplay(1,1,1,0,0,0,0); break;
    case '8': fDisplay(1,1,1,1,1,1,1); break;
    case '9': fDisplay(1,1,1,1,0,1,1); break;
 
 }
}
