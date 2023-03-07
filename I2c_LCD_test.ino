#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  delay(1000);
}


void loop()
{
    lcd.setCursor(3,0);
  lcd.print("ATL testing");
    lcd.setCursor(3,1);
  lcd.print("LCD Success");

}
