//Adjustable Variables:-
int timeout=150; // (msx10) max time for a person to cross distance between 2 sensors.
int door_end=60
; //should be less than 310 and more than 8.
int num=1;  //number of zeros that can be ignored between string of 1's.(value is 1 for ideal condition)
int vindael=900;


#include <SoftwareSerial.h>
SoftwareSerial s(2,3);//rx,tx

#include <LiquidCrystal.h>
/*  The circuit:
 * LCD RS pin to digital pin 13
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 7
 * LCD D5 pin to digital pin 6
 * LCD D6 pin to digital pin 5
 * LCD D7 pin to digital pin 4
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
*/
const int rs = 13, en = 11, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



//ultrasonic sensor pins.
const int trig1=9;
const int echo1=8;
const int trig2=12;
const int echo2=10;

int c=0;

void setup()
{
  lcd.begin(16, 2);
  s.begin(115200);
  Serial.begin(9600);
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);
  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
}
  int g=0;
void loop()
{
  if(s1()==1 && s2()==0){
    for(int i=0;i<timeout;i++){
      if(s2()==1 && s1()==0){c++;lcdp();s.println(c);break;}
      delay(10);
      }
      delay(vindael);
    }
 
  if(s2()==1 && s1()==0){
    for(int i=0;i<timeout;i++){
      if(s1()==1 && s2()==0){c--;lcdp();s.println(c);break;}
      delay(10);
      }
      delay(vindael);
    }
}

int s1(){
  return chk(trig1,echo1);
  }

int s2(){
  return chk(trig2,echo2);
  }


//function to print c on lcd.
void lcdp(){
  lcd.begin(16, 2);
  lcd.print(c);
  }

  

//function to return (1)/(0) for (obstacle after going out off way)/(no-obstacle) with error filter.(it ignores 'zeros by error' between 1s)
int chk(int trig, int echo){
 int s=ultra(trig,echo);
 int a=0;
if(s!=404){
  while(1){
    s=ultra(trig,echo);
    if(s==404){a++;}
    if(s!=404){a=0;}
    if(a>=num){return 1;}
    }  
  }
 else{return 0;}
}

//function to get distance of obstacle.
int ultra(int trig, int echo){
  
  long duration;
  int distance;
 
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration*0.0343/2; //veolcity of sound.
  
  if(distance>door_end || distance<8){
   return 404; 
  }
  else{
    return distance;
  }
}
