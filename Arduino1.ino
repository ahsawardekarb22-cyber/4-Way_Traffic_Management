//TRAFFIC AUTOMATION = 1) CODE FOR COUNTER AND TRAFFIC LIGHTS
//counter_1
int a1=22,b1=23,c1=24,d1=25,e1=26,f1=27,g1=28,h1=29;
//counter_2
int a2=30,b2=31,c2=32,d2=33,e2=34,f2=35,g2=36,h2=37;
//counter_3
int a3=38,b3=39,c3=40,d3=41,e3=42,f3=43,g3=44,h3=45;
//counter_4
int a4=46,b4=47,c4=48,d4=49,e4=50,f4=51,g4=52,h4=53;
//traffic lights
int R1=2,Y1=3,G1=4,R2=5,Y2=6,G2=7,R3=8,Y3=9,G3=10,R4=11,Y4=12,G4=13;
//counter count array
int counter[10][4] = {
 {1,0,0,1}, //9
 {1,0,0,0}, //8
 {0,1,1,1}, //7
 {0,1,1,0}, //6
 {0,1,0,1}, //5
 {0,1,0,0}, //4
 {0,0,1,1}, //3
 {0,0,1,0}, //2
 {0,0,0,1}, //1
 {0,0,0,0} //0
};
//initiallizing arduino pins with array
int arduino_c11[4] = {22,23,24,25};
int arduino_c12[4] = {26,27,28,29};
int arduino_c21[4] = {30,31,32,33};
int arduino_c22[4] = {34,35,36,37};
int arduino_c31[4] = {38,39,40,41};
int arduino_c32[4] = {42,43,44,45};
int arduino_c41[4] = {46,47,48,49};
int arduino_c42[4] = {50,51,52,53};
//Indexes for running loops
int i,j,n;
void setup() {
 // put your setup code here, to run once:
//counter pins
pinMode(a1,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(c1,OUTPUT);
pinMode(d1,OUTPUT);
pinMode(e1,OUTPUT);
pinMode(f1,OUTPUT);
pinMode(g1,OUTPUT);
pinMode(h1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(b2,OUTPUT);
pinMode(c2,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(e2,OUTPUT);
pinMode(f2,OUTPUT);
pinMode(g2,OUTPUT);
pinMode(h2,OUTPUT);
pinMode(a3,OUTPUT);
pinMode(b3,OUTPUT);
pinMode(c3,OUTPUT);
pinMode(d3,OUTPUT);
pinMode(e3,OUTPUT);
pinMode(f3,OUTPUT);
pinMode(g3,OUTPUT);
pinMode(h3,OUTPUT);
pinMode(a4,OUTPUT);
pinMode(b4,OUTPUT);
pinMode(c4,OUTPUT);
pinMode(d4,OUTPUT);
pinMode(e4,OUTPUT);
pinMode(f4,OUTPUT);
pinMode(g4,OUTPUT);
pinMode(h4,OUTPUT);
//Traffic lights pins
pinMode(R1,OUTPUT);
pinMode(Y1,OUTPUT);
pinMode(G1,OUTPUT);
pinMode(R2,OUTPUT);
pinMode(Y2,OUTPUT);
pinMode(G2,OUTPUT);
pinMode(R3,OUTPUT);
pinMode(Y3,OUTPUT);
pinMode(G3,OUTPUT);
pinMode(R4,OUTPUT);
pinMode(Y4,OUTPUT);
pinMode(G4,OUTPUT);
}
void loop() {
 // put your main code here, to run repeatedly:
digitalWrite(R2,HIGH);
digitalWrite(R3,HIGH);
digitalWrite(R4,HIGH);
digitalWrite(G1,HIGH);
counter_DOWN30();
digitalWrite(G1,LOW);
digitalWrite(Y1,HIGH);
digitalWrite(R2,LOW);
digitalWrite(Y2,HIGH);
delay(100);
digitalWrite(Y1,LOW);
digitalWrite(Y2,LOW);
digitalWrite(R1,HIGH);
digitalWrite(G2,HIGH);
counter_RIGHT30();
digitalWrite(G2,LOW);
digitalWrite(R3,LOW);
digitalWrite(Y2,HIGH);
digitalWrite(Y3,HIGH);
delay(100);
digitalWrite(Y3,LOW);
digitalWrite(Y2,LOW);
digitalWrite(R2,HIGH);
digitalWrite(G3,HIGH);
counter_UP30();
digitalWrite(G3,LOW);
digitalWrite(R4,LOW);
digitalWrite(Y3,HIGH);
digitalWrite(Y4,HIGH);
delay(100);
digitalWrite(Y4,LOW);
digitalWrite(Y3,LOW);
digitalWrite(R3,HIGH);
digitalWrite(G4,HIGH);
counter_LEFT30();
digitalWrite(G4,LOW);
digitalWrite(R1,LOW);
digitalWrite(Y4,HIGH);
digitalWrite(Y1,HIGH);
delay(100);
digitalWrite(Y1,LOW);
digitalWrite(Y4,LOW);
}
void counter_DOWN30()
{
 digitalWrite (G1,HIGH);
 for (n=7;n<10;n++)
 {
 for (i=0;i<10;i++)
 {
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c11[j],counter[n][j]);
 }
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c12[j],counter[i][j]);
 }
 delay(100);
 }
 }
}
void counter_RIGHT30()
{
 digitalWrite(G2,HIGH);
 for (n=7;n<10;n++)
 {
 for (i=0;i<10;i++)
 {
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c21[j],counter[n][j]);
 }
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c22[j],counter[i][j]);
 }
 delay(100);
 }
 }
}
void counter_UP30()
{
 digitalWrite(G3,HIGH);
 for (n=7;n<10;n++)
 {
 for (i=0;i<10;i++)
 {
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c31[j],counter[n][j]);
 }
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c32[j],counter[i][j]);
 }
 delay(100);
 }
 }
}
void counter_LEFT30()
{
 digitalWrite(G4,HIGH);
 for (n=7;n<10;n++)
 {
 for (i=0;i<10;i++)
 {
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c41[j],counter[n][j]);
 }
 for (j=0;j<4;j++)
 {
 digitalWrite(arduino_c42[j],counter[i][j]);
 }
 delay(100);
 }
 }
}