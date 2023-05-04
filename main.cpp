#include <Arduino.h>
#include "Display.h"

Display display(3, 5, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  //setup COMport baudrate
  display.setup();
  display.cls();

  //any type of same arguments canbe pass
  display.printLines(200,350,5);
  delay(5000);

  //pass any type arguments to each display row and all text align is right.
  display.printFirstLine(67000);
  display.printSecondLine("Press");
  display.printThirdLine(5.6);
  delay(5000);
  
  //pass char string arguments to each display row and all text align is left.
  display.printFirstRow("HI");
  display.printSecondRow("PAY");
  display.printThirdRow("EVM");
  delay(5000);
}


void loop() {
  ;
}
