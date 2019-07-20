#include <SoftwareSerial.h>
   
int ac=2;
int light=3;
String data;

void setup() 
{
   Serial.begin(9600);
   
   pinMode(ac, OUTPUT);
   pinMode(light, OUTPUT);
   
 
   digitalWrite(light, HIGH);
   digitalWrite(ac, HIGH);

}

void loop() 
{

      if(Serial.available()<=0){
      data= Serial.readString();
    
   Serial.println(data);

    if(data=="turn on AC")
    { 
      digitalWrite(ac,LOW);
      Serial.print("ac on");
    }
    else if(data=="turn off AC")
    {
      digitalWrite(ac,HIGH);
      Serial.print("ac off");
    }
    else if(data=="turn on light")
    {
      digitalWrite(light,LOW);
      Serial.print("light on");
    }
    else if(data=="turn off light")
    {
      digitalWrite(light,HIGH);
      Serial.print("light off");
    }
    else if(data=="turn on both")
    {
      digitalWrite(light,LOW);
       digitalWrite(ac,LOW);
      
    }
    else if(data=="turn off both")
    {
      digitalWrite(light,HIGH);
       digitalWrite(ac,HIGH);
      
    }
}}
