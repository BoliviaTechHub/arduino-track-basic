/*AUTO SEGUIDOR DE LINEA CON SENSOR QTR 8A*/
 /*El auto avanza en zig zag,no sigue la linea NEGRA*/
  
#include<QTRSensors.h>
#define AIN1 3
#define AIN2 4
#define PWMA 5
#define PWMB 6
#define BIN1 8
#define BIN2 7
#define NUM_SENSORS             6  // numero de sensores usados
#define NUM_SAMPLES_PER_SENSOR  4  // 
#define EMITTER_PIN             2
#define LED 13
float KP = 0.5;
float KD = 1.0;
float Ki = 0.006;
int Velmax = 255;
int error1 = 0;
int error2 = 0;
int error3 = 0;
int error4 = 0;
int error5 = 0;
int error6 = 0;
/*configuracion de la libreria  QTR - 8A*/
QTRSensorsAnalog qtra ((unsigned char[]) {
A0, A1, A2, A3, A4, A5
},
NUM_SENSORS, NUM_SAMPLES_PER_SENSOR, EMITTER_PIN);
unsigned int sensorValues[NUM_SENSORS]; /*USO 6 DE LOS 8 PINES DEL SENSOR QTRA*/
void Motoriz(int value) {/*FUNCION PARA ACCIONAR EL MOTOR IZQ*/
  if (value >= 0) {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);
  }
  else {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
    value *= -1;
  }
  analogWrite(PWMA, value);
  Serial.println("Izquierda ");
}
void Motorde(int value) { /*FUNCION PARA USAR EL MOTOR DERECHO*/
  if (value >= 0) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
  }
  else {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
    value *= -1;
  }
  analogWrite(PWMB, value);
  Serial.println("Derecha . . ");
}
void Motor(int left, int righ) {/*ACTIVACION DE NOTORES*/
  Motoriz(left);
  Motorde(righ);

}
void freno (boolean left, boolean righ, int value) {/*FUNCION FRENO*/
  if (left) {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);
    analogWrite(PWMB, value);
  }
  if (righ) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);
    analogWrite(PWMA, value);
  }
  Serial.println("Freno..");

}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  for (int i = 0; i < 70; i++) {
    digitalWrite(LED, HIGH);
    delay(20);
    qtra.calibrate();/*CALIBRADO PARDEA LED*/
    
    digitalWrite(LED, LOW);
    delay(20);

  }
  delay(3000);
}
 

unsigned int position = 0;
/*VARIABLES A UTILIZAR PID*/
int proporcional = 0;
int integral = 0;
int derivativo = 0;
int diferencial = 0;
int last_prop;
int Target = 2500;

void loop() {
  // put your main code here, to run repeatedly:
  position = qtra.readLine(sensorValues, true, true);
  
  for (unsigned char i = 0; i < NUM_SENSORS; i++)
  {
    Serial.print(sensorValues[i]);
    Serial.print('\t');
  }
  //Serial.println(); // uncomment this line if you are using raw values
  Serial.println(position); // comment this line out if you are using raw values
  
  delay(250);
  
  proporcional = ((int)position) - 2500;
  if (proporcional <= -Target) {
    Motorde(0);
    freno(true, false, 255);

  }
  else if (proporcional <= Target) {
    Motoriz(0);
    freno(false, true, 255);

  }
  derivativo = proporcional - last_prop;
  integral = error1 + error2 + error3 + error4 + error5 + error6;
  last_prop = proporcional;
  error6 = error5;
  error5 = error4;
  error4 = error3;
  error3 = error2;
  error2 = error1;
  error1 = proporcional;
  int diferencial = (proporcional * KP) + (derivativo * KD) + (integral * Ki);
  if (diferencial > Velmax) diferencial = Velmax;
  else if (diferencial < - Velmax) diferencial = - Velmax;
  ( diferencial < 0) ?
  Motor(Velmax + diferencial, Velmax) : Motor(Velmax, Velmax - diferencial);
  delay(250);
}
/*El auto avanza en zig zag se enciende y se apaga los motores uno despues del otro, no sigue la linea NEGRA*/
