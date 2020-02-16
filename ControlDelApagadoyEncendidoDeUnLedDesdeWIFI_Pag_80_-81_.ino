
#include <ESP8266WiFi.h>


/* TRANSCRITO   POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 6º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:CONTROL Y APAGADO Y ENCENDIDO DE UN LED DESDE WIFI(HTML BASICO PARA LA VISTA WEB)
  PAGINA 80 DEL TEXTO**/
const char* ssid = "BTH-101";
const char* password = "t3cn0log1a";
WiFiServer server(80);


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
delay(10);
pinMode(D7, OUTPUT);
digitalWrite(D7, LOW);
Serial.println();
Serial.println();
Serial.print("Connecting to  ");
Serial.println(ssid);
WiFi.begin(ssid, password);
while(WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.print(".");
  
}
Serial.println(" ");
Serial.println("WiFi connected");
server.begin();
Serial.println("Server started");
Serial.print("Use This URL to connect: ");
Serial.println("http://");
Serial.println(WiFi.localIP());
Serial.println("/");
}

void loop() {
  // put your main code here, to run repeatedly:
WiFiClient client = server.available();
if(!client){
  return;
}
Serial.println("New client");
while(!client.available()){
  delay(1);
}
String request = client.readStringUntil('\r');
Serial.println(request);
client.flush();
int value = LOW;
if(request.indexOf("/LED=ON") != -1){
digitalWrite(D7, HIGH);
value = HIGH;
}
if(request.indexOf("/LED = OFF") != -1){
  digitalWrite(D7, LOW);
  value = LOW;
  
}
client.println("HTTP/1.1 200 OK");
client.println("Content-Type; text/html");
client.println("");
client.println("<1DOCTYPE HTML>");
client.println("<html>");
client.println("Led pin is Now : ");
if(value == HIGH){
  client.print("On");
}
else{
  client.print("Off");
}
client.println("<br></br>");
client.println("<a href=\"LED=ON\'\'><button>ON</button></a>");
client.println("<a href=\"LED=OFF\'\'><button>OFF</button></a>");
client.println("</html>");
delay(1);
Serial.println("Client disconnected");
Serial.println("");

}
