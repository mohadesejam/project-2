#include <LiquidCrystal.h>
LiquidCrystal led(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
led.begin(16,2);
led.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  led.print("Hello world");
  led.setCursor(0,1);
  led.print("LCD Tutorial");

}
