#include<LiquidCrystal.h>
const int rs = 25, e = 26, d4 = 27, d5 = 28, d6 = 29, d7 = 30;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);
int IR1 = 9;
int IR2 = 10;
int IR3 = 12;
int IR4 = 13;
int led1 = 22;
int led2 = 23;
int buzz = 24;
void setup()
{
 pinMode(IR1,INPUT);
 pinMode(IR2,INPUT);
 pinMode(IR3,INPUT);
 pinMode(IR4,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(buzz,OUTPUT);
 // Starting with serial print scrolling display
 lcd.begin(16,2);
 lcd.setCursor(0,0);
 lcd.print("WELCOME TO TRAFFIC AUTOMATION");
 delay(50);
 for(int i=0;i<29;i++)
 {
 lcd.scrollDisplayLeft();
 delay(30);
 }
 lcd.clear();
}
void loop()
{
 // Sensor detection for lane 1
 if (digitalRead(IR1)==HIGH)
 {
 lcd.setCursor(0,0);
 lcd.print("VEHICLES PASSING");
 lcd.setCursor(0,1);
 lcd.print("ROAD 1");
 delay(200);
 lcd.clear();
 delay(1300);
 if(digitalRead(IR1)==HIGH)
 {
 lcd.clear();
 digitalWrite(led2,LOW);
 lcd.setCursor(0,0);
 lcd.print("Accident on");
 lcd.setCursor(0,1);
 lcd.print("ROAD 1");
 digitalWrite(buzz,HIGH);
 digitalWrite(led1,HIGH);
 delay(200);
 digitalWrite(led1,LOW);
 delay(300);
 lcd.clear();
 digitalWrite(buzz,LOW);
 }
 }
 // Sensor detection for lane 2
 else if (digitalRead(IR2)==HIGH)
 { 
 lcd.setCursor(0,0);
 lcd.print("VEHICLES PASSING");
 lcd.setCursor(0,1);
 lcd.print("ROAD 2");
 delay(200);
 lcd.clear();
 delay(1300);
 if(digitalRead(IR2)==HIGH)
 {
 lcd.clear();
 digitalWrite(led2,LOW);
 lcd.setCursor(0,0);
 lcd.print("Accident on");
 lcd.setCursor(0,1);
 lcd.print("ROAD 2");
 digitalWrite(buzz,HIGH);
 digitalWrite(led1,HIGH);
 delay(200);
 digitalWrite(led1,LOW);
 delay(300);
 lcd.clear();
 digitalWrite(buzz,LOW);
 }
 }
 // Sensor detection for lane 3
 else if (digitalRead(IR3)==HIGH)
 {
 lcd.setCursor(0,0);
 lcd.print("VEHICLES PASSING");
 lcd.setCursor(0,1);
 lcd.print("ROAD 3");
 delay(200);
 lcd.clear();
 delay(1500);
 if(digitalRead(IR3)==HIGH)
 {
 lcd.clear();
 digitalWrite(led2,LOW);
 lcd.setCursor(0,0);
 lcd.print("Accident on");
 lcd.setCursor(0,1);
 lcd.print("ROAD 3");
 digitalWrite(buzz,HIGH);
 digitalWrite(led1,HIGH);
 delay(200);
 digitalWrite(led1,LOW);
 delay(300);
 lcd.clear();
 digitalWrite(buzz,LOW);
 }
 }
 // Sensor detection for lane 4
 else if (digitalRead(IR4)==HIGH)
 {
 lcd.setCursor(0,0);
 lcd.print("VEHICLES PASSING");
 lcd.setCursor(0,1);
 lcd.print("ROAD 4");
 delay(200);
 lcd.clear();
 delay(1500);
 if(digitalRead(IR4)==HIGH)
 {
 lcd.clear();
 digitalWrite(led2,LOW);
 lcd.setCursor(0,0);
 lcd.print("Accident on");
 lcd.setCursor(0,1);
 lcd.print("ROAD 4");
 digitalWrite(buzz,HIGH);
 digitalWrite(led1,HIGH);
 delay(200);
 digitalWrite(led1,LOW);
 delay(300);
 lcd.clear();
 digitalWrite(buzz,LOW);
 }
 }
 // Work flow when everything is normal
 else
 {
 lcd.setCursor(4,0);
 lcd.print("NORMAL");
 digitalWrite(led2,HIGH);
 digitalWrite(led1,LOW);
 }
}