#include <SoftwareSerial.h> 
SoftwareSerial MyBlue(9, 8); // RX | TX 
 
void setup() 
{   
 Serial.begin(9600); 
 MyBlue.begin(9600);  
 Serial.println("Ready to connect\nDefualt password is 1234 or 000"); 
} 
void loop() 
{ 
 if (MyBlue.available()) {
    MyBlue.println("Ready to connect\nDefualt password is 1234 or 000"); 
    delay(5000);
    Serial.println("3211");
 }}
