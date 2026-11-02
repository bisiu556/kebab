#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

String messages[] = {
  "COMILLA KEBAB",
  "NAJLEPSZY W MIESCIE",
  "SOCZYSTE MIESO",
  "PROSTO Z GRILLA",
  "WPADNIJ NA ROLLO",
  "KEBAB & GRILL"
};

int numMessages = 6;

void setup()
{
  lcd_1.begin(16, 2);
}

void loop()
{
  for (int i = 0; i < numMessages; i++) {

    //  MIGANIE
    for (int m = 0; m < 4; m++) {
      lcd_1.clear();
      lcd_1.setCursor(1, 0);
      lcd_1.print("*** COMILLA ***");
      lcd_1.setCursor(3, 1);
      lcd_1.print("== KEBAB ==");
      delay(150);
      lcd_1.clear();
      delay(100);
    }

    //  GORA DOL
    lcd_1.clear();
    lcd_1.setCursor(0, 1);
    lcd_1.print(messages[i]);
    delay(300);

    lcd_1.clear();
    lcd_1.setCursor(0, 0);
    lcd_1.print(messages[i]);
    lcd_1.setCursor(2, 1);
    lcd_1.print("COMILLA KEBAB");
    delay(900);

    // LEWO PRAWO
    for (int pos = 0; pos < 6; pos++) {
      lcd_1.scrollDisplayLeft();
      delay(150);
    }
    for (int pos = 0; pos < 12; pos++) {
      lcd_1.scrollDisplayRight();
      delay(150);
    }
    for (int pos = 0; pos < 6; pos++) {
      lcd_1.scrollDisplayLeft();
      delay(150);
    }

    delay(400);
  }
}
