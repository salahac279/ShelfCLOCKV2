

#include <DS3231.h>
#include <Wire.h>
#include <FastLED.h>
#include <SoftwareSerial.h> 
SoftwareSerial Blue(11 , 12);// rx, tx 
#define LED_PIN     7
#define NUM_LEDS    207
#define n   20
#define LEDS_PIN    8
CRGBArray<NUM_LEDS> leds;
CRGB led[n];
CRGB color = CRGB(250,0,0);
CRGB color1 = CRGB(0, 255, 153);
bool col = true;
DS3231 clock;
RTCDateTime dt; 

void setup() {
  Wire.begin();
  Serial.begin(9600);
   Blue.begin(9600); 
   pinMode(LED_PIN, OUTPUT );
   clock.begin();
   FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2812, LEDS_PIN, GRB>(led, n);
  FastLED.setBrightness(100);
 for(int i=0; i <n; i++) {
  
   led[i] = CRGB(250,250,250);
 }
  FastLED.show();
 
 
}
void loop() {
  dt = clock.getDateTime();
  Serial.println(1);
 delay(500);
show2(dt.hour,dt.minute, color, color1);
 
  if(Blue.available()) {
     
   int data =  Blue.parseInt();
   Serial.println(data);
   if(data>99) {
    Serial.println(data);
    uint8_t min = data % 100;
    uint8_t hour = data / 100;
    Serial.println(hour);
   if(min != 0 || hour !=0) {
   clock.setDateTime(dt.year,dt.month,dt.day, hour,min ,00);}}
   else {
    if(col) {
    Serial.println(data);
    color = change(data);
    col = false;
    }
    else {
      color1 = change(data);
      col = true;
      }
    }
    }
     if(dt.second == 0) {
      change(12);
     } 
     
  
   }
 
 
