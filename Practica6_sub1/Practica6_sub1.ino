/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso de la pantalla LCD sin interfaz I2C
   Dev: Jefferson Yahir González González
   Fecha: 07 de mayo   
*/

#include <LiquidCrystal.h>
#define RS  6
#define Habilitar 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

LiquidCrystal LCD_Jeff(RS, Habilitar, D4, D5, D6, D7);

void setup()
{
  LCD_Jeff.begin(16,2);
  LCD_Jeff.setCursor(0,1);
  LCD_Jeff.print("2023495");
  LCD_Jeff.setCursor(0,0);
  LCD_Jeff.print("Jefferson");
}
void loop()
{
 
}
