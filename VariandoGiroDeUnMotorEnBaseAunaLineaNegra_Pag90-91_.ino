/* TRANSCRITO y CORREGIDO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:VARIANDO EL GIRO DE UN MOTOR EN BASE A UNA LINEA NEGRA
  PAGINA 90 - 91 DEL TEXTO*   */
#include<QTRSensors.h>
#define PWMB 6
#define BIN1 8
#define BIN2 7
#define NUM_SENSORS             6  // number of sensors used
#define NUM_SAMPLES_PER_SENSOR  4  // average 4 analog samples per sensor reading
#define EMITTER_PIN             11
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

QTRSensorsAnalog qtra ((unsigned char[]) {
  A0, A1, A2, A3, A4, A5
},
NUM_SENSORS, NUM_SAMPLES_PER_SENSOR, EMITTER_PIN);
unsigned int sensorValues[NUM_SENSORS];
void MotorAtras(int value) {
  if (value >= 0) {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);

  }
  else
  {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
    value *= -1;
  }
  analogWrite(PWMB, value);
  Serial.println("Izquierda");

}
void MotorAdelante(int value) {
  if (value >= 0) {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);

  }
  else
  {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
    value *= -1;
  }
  analogWrite(PWMB, value);
  Serial.println("Derecha .. ");

}
void Motor (int left, int righ) {
  MotorAtras(left);
  MotorAdelante(righ);
}
void freno (boolean left, boolean righ, int value) {
  if (left) {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, HIGH);
    analogWrite(PWMB, value);
  }
  if (righ) {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, HIGH);
    analogWrite(PWMB, value);
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

  for (int i = 0; i < 70; i++) {
    digitalWrite(LED, HIGH);
    delay(20);
    qtra.calibrate();
    digitalWrite(LED, LOW);
    delay(20);

  }
  delay(3000);

}
unsigned int position = 0;
int proporcional = 0;
int integral = 0;
int derivativo = 0;
int diferencial = 0;
int last_prop;
int Target = 2500;


void loop() {
  // put your main code here, to run repeatedly:
  position = qtra.readLine(sensorValues, true, true);
  proporcional = ((int)position) - 2500;
  if (proporcional <= -Target) {
    MotorAdelante(0);
    freno(true, false, 255);

  }
  else if (proporcional <= Target) {
    MotorAtras(0);
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
  else if (diferencial < -Velmax) diferencial = -Velmax;
  ( diferencial < 0)?
  Motor(Velmax + diferencial, Velmax) : Motor(Velmax, Velmax - diferencial);
  delay(250);
}
