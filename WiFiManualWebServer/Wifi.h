#include <ESP8266WiFi.h>

#define STASSID "Diogo_Fibra"
#define STAPSK "19830512"

const char* ssid = STASSID;
const char* password = STAPSK;

// Create an instance of the server
// specify the port to listen on as an argument
WiFiServer server(80);
