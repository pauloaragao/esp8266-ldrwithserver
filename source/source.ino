#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>

#define USERNAME "pauloaragaoo"
#define DEVICE_ID "ESP8266"
#define DEVICE_CREDENTIAL "Z8PsfWQ9&03p"

#define SSID "LEIA-PROJ"
#define SSID_PASSWORD "l&1@79BkT_COM"

ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  pinMode(BUILTIN_LED, OUTPUT);

  thing.add_wifi(SSID, SSID_PASSWORD);
  
   //LDR resource
  thing["LUX"] >> outputValue(analogRead(A0));

}

void loop() {
  thing.handle();
}
