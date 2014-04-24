/* Clock_Run
 *
 *Runs my binary clock
 *
 *Andy Tracy
 */

#include <SPI.h> //For talking to the clock

const int data = 2; //led driver data
const int strobS = 3; //led driver strobe, sec
const int strobM = 5; //led driver strobe, min
const int strobH = 6; //led driver strobe, hr
const int clock = 7; //led driver clock
const int oe = 8; //led driver output enable
const int cs=10; //serial chip select (clock)
int count = 0;
int second = 0; //clock value, sec (send to led driver)
int minute = 0; //clock value, min (send to led driver)
int hour = 0; //clock value, hr (send to led driver)
int TimeDate[7]; //clock reading (sec, min, hr, null, day, mo, yr)
int a = 0;
int b = 0;

void setup() {
  pinMode(data, OUTPUT);
  pinMode(strobS, OUTPUT);
  pinMode(strobM, OUTPUT);
  pinMode(strobH, OUTPUT);
  pinMode(clock, OUTPUT);
  pinMode(oe, OUTPUT);
  pinMode(cs,OUTPUT);
  RTC_init();
}

void loop() {
  ReadTimeDate();
  if (TimeDate[2] != hour){
    hour=TimeDate[2];
    a = hour%10;
    b = (hour/10)*16;
    hour = a+b;
    DisplayHours(hour);
  }
  if (TimeDate[1] != minute){
    minute=TimeDate[1];
    a = minute%10;
    b = (minute/10)*16;
    minute = a+b;
    DisplayMinutes(minute);
  }
  second=TimeDate[0];
  a = second%10;
  b = (second/10)*16;
  second = a+b;
  DisplaySeconds(second);
  delay(1000);
}
//=====================================
int RTC_init(){ 
  // start the SPI library:
  SPI.begin();
  SPI.setBitOrder(MSBFIRST); 
  SPI.setDataMode(SPI_MODE1); // both mode 1 & 3 should work 
  //set control register 
  digitalWrite(cs, LOW);  
  SPI.transfer(0x8E);
  SPI.transfer(0x60); //60= disable Oscillator and Battery SQ wave @1hz, temp compensation, Alarms disabled
  digitalWrite(cs, HIGH);
  delay(10);
}
//=====================================
void ReadTimeDate(){		
  for(int i=0; i<=6;i++){
    if(i==3)
      i++;
    digitalWrite(cs, LOW);
    SPI.transfer(i+0x00); 
    unsigned int n = SPI.transfer(0x00);        
    digitalWrite(cs, HIGH);
    int a=n & B00001111;    
    if(i==2){	
      int b=(n & B00010000)>>4;
      TimeDate[i]=a+b*10;
    }
    else if(i==4){
      int b=(n & B00110000)>>4;
      TimeDate[i]=a+b*10;
    }
    else if(i==5){
      int b=(n & B00010000)>>4;
      TimeDate[i]=a+b*10;
    }
    else if(i==6){
      int b=(n & B11110000)>>4;
      TimeDate[i]=a+b*10;
    }
    else{
      int b=(n & B01110000)>>4;
      TimeDate[i]=a+b*10;	
    }
  }
}
//=====================================
void DisplayHours(int hour){
  digitalWrite(oe, LOW);
  digitalWrite(strobH, HIGH);
  for (count = 0; count < 8; count++) {
    digitalWrite(data, hour & 01);
    hour>>=1;
    PulseClock();
 }
  delayMicroseconds(20);
  digitalWrite(strobH, LOW);
  digitalWrite(oe, HIGH);
}
void DisplayMinutes(int minute){
  digitalWrite(oe, LOW);
  digitalWrite(strobM, HIGH);
  for (count = 0; count < 8; count++) {
    digitalWrite(data, minute & 01);
    minute>>=1;
    PulseClock();
 }
  delayMicroseconds(20);
  digitalWrite(strobM, LOW);
  digitalWrite(oe, HIGH);
}
void DisplaySeconds(int second){
  digitalWrite(oe, LOW);
  digitalWrite(strobS, HIGH);
  for (count = 0; count < 8; count++) {
    digitalWrite(data, second & 01);
    second>>=1;
    PulseClock();
 }
  delayMicroseconds(20);
  digitalWrite(strobS, LOW);
  digitalWrite(oe, HIGH);
}
//=====================================
void PulseClock(void) {
    digitalWrite(clock, LOW);
    delayMicroseconds(20);
    digitalWrite(clock, HIGH);
    delayMicroseconds(50);
    digitalWrite(clock, LOW);
}

