
/* TRANSCRITO y CORREGIDO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:SENSOR PARA DETERMINAR LA TEMPERATURA
  PAGINA 79- 80 - 91 DEL TEXTO*   */
#include <AutoPID.h>
#include <DallasTemperature.h>
#include <OneWire.h>
#define POT_PIN A0
#define OUTPUT_PIN A1
#define TEMP_PROBE_PIN  5
#define LED_PIN   6
#define TEMP_READ_DELAY 800
#define OUTPUT_MIN 0
#define OUTPUT_MAX 255
#define KP .12
#define KI .0003
#define KD 0
double temperature, setPoint, outputVal;
OneWire oneWire(TEMP_PROBE_PIN);
DallasTemperature temperatureSensors(&oneWire);
AutoPID myPID(&temperature, &setPoint, &outputVal, OUTPUT_MIN, OUTPUT_MAX, KP, KI, KD);
unsigned long lastTempUpdate;
bool updateTemperature() {
  if ((millis() - lastTempUpdate) > TEMP_READ_DELAY) {
    temperature = temperatureSensors.getTempFByIndex(0);
    lastTempUpdate = millis();
    temperatureSensors.requestTemperatures();
    return true;
  }
  return false;
}
void setup() {
  // put your setup code here, to run once:
  pinMode(POT_PIN, INPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  temperatureSensors.begin();
  temperatureSensors.requestTemperatures();
  while (!updateTemperature()) {}
  myPID.setBangBang(4);
  myPID.setTimeStep(4000);
}

void loop() {
  // put your main code here, to run repeatedly:
    updateTemperature();
    setPoint = analogRead(POT_PIN);
    myPID.run();
    analogWrite(OUTPUT_PIN, outputVal);
    digitalWrite(LED_PIN, myPID.atSetPoint(1));
  }
