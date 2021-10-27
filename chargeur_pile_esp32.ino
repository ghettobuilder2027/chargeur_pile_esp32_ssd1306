#include <Wire.h>
#include "SSD1306.h" 
 
SSD1306  display(0x3c, 21, 22);
int analogValue;
float volt;
 
void setup() {
  pinMode (4,INPUT); 
  display.init();
  display.drawString(0, 0, "Hello World");
  display.display();
  delay(1000);
}
 
void loop() {
  display.clear();
  analogValue = analogRead(4);
  volt = analogValue*3.3/4096;
  
  display.drawString(0,0,String(analogValue));
  display.drawString(0,20,String(volt));
  
  display.display();  
  delay(2000);
  }
