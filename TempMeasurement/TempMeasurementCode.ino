#include <LiquidCrystal.h>         

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // The LCD pins are connected to these digital pins 
const int TempPin= 0;                   // the sensor pin is connected to A0 
void setup()
{
  lcd.begin(16,2);
}
void loop()
{
  lcd.clear();
  int value = analogRead(TempPin); 
  float CelsiusTemp = value * (5.0 / 1023.0 * 100.0); // converting the value given to celsius temp
  float FahrenheitTemp = CelsiusTemp * 1.8 + 32;
  
  lcd.setCursor(0,0);
  lcd.print(CelsiusTemp);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print(FahrenheitTemp); //turning the celsius into fahrehait
  lcd.print("F");
  delay(1000);
}
