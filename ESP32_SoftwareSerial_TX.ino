#include <SoftwareSerial.h>
#define ON_BOARD_LED 2

SoftwareSerial softSerial(12, 13); //5 = RX | 4 = TX

char user_int = 0;

void setup()
{
  Serial.begin(9600);
  softSerial.begin(9600);
  pinMode(ON_BOARD_LED, OUTPUT);
}
void loop()
{
  softSerial.write("ATMF\r\n");
  Serial.println("ATMF");
  delay (500);
}
