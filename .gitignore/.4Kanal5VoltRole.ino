
#include <SoftwareSerial.h>

SoftwareSerial bt_mcan(9,8);
int role7 = 7;
int role6 = 6;
int role5 = 5;
int role4 = 4;
int delay1 =2000; 


void setup() {
    pinMode(13, OUTPUT);
    Serial.begin(9600);
    bt_mcan.begin(9600);
    pinMode(role7, OUTPUT);
    pinMode(role6, OUTPUT);
    pinMode(role5, OUTPUT);
    pinMode(role4, OUTPUT);
    
    digitalWrite(role7,HIGH);digitalWrite(role6,HIGH);digitalWrite(role5,HIGH);digitalWrite(role4,HIGH);
  
}

void loop() {
 
      
    if(bt_mcan.available())
    {
      char data=bt_mcan.read();
      Serial.println(data);
      
      if(data=='0'){
                
        digitalWrite(13, HIGH);
        digitalWrite(role7,LOW);
                  
      }
      else if(data=='9')
      {
        digitalWrite(role6,LOW);
        digitalWrite(13, HIGH);
       
      }
      else if(data=='8')
      {
        digitalWrite(role5,LOW);
        digitalWrite(13, HIGH);
      }
      else if(data=='7')
      {
        digitalWrite(role4,LOW);
        digitalWrite(13, HIGH);
      }
      else if(data=='5')
      {
        digitalWrite(role7,LOW);
        digitalWrite(role6,LOW);
        digitalWrite(role5,LOW);
        digitalWrite(role4,LOW);
        digitalWrite(13, HIGH);
      }
      else
      {
        digitalWrite(role7,HIGH);
        digitalWrite(role6,HIGH);
        digitalWrite(role5,HIGH);
        digitalWrite(role4,HIGH);
        digitalWrite(13, LOW);
      }
    }
}



