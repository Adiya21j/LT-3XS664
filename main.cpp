#include <Arduino.h>
#include "lcd.hpp"
#include "Display.h"

Display display(3, 5, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  //setup COMport baudrate
  display.setup();
  display.cls();

  // put your main code here, to run repeatedly:

  // display.printLines(200,350,5);
  // delay(5000);

  // display.print(50005,25,5);
  // delay(5000);

  // display.print(999999,6000,8888);
  // delay(5000);
  
  // display.print(45, 21, 9);
  // delay(3000);
  // display.print("MARCH", "21", "9");
  // delay(3000);
  // display.print(a, b, c);
  // delay(3000);

  // display.printFirstLine(67000);
  // display.printSecondLine("Press");
  // display.printThirdLine(5.6);
  // delay(5000);

  // display.printFirstLine(500);
  // display.printSecondLine("Press");
  // display.printThirdLine(25.6);
  // delay(5000);
  // display.printFirstRow("67000");
  // display.printSecondRow("HELLO");
  // display.printThirdRow("5.6");
  // delay(5000);
}


void loop() {
  display.printFirstLine(52.3);
  display.printSecondLine("Press");
  display.printThirdLine(500);
  delay(5000);
  display.printFirstRow("67000");
  display.printSecondRow("HELLO");
  display.printThirdRow("53.6");
  delay(5000);
  uint32_t a=555555, b=444444, c=3333;
  display.printLines(a,b,c);
  delay(5000);
}