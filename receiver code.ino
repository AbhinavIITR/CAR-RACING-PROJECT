  /*433 MHz RF Module Receiver Demonstration 1
  RF-Rcv-Demo-1.ino
  Demonstrates 433 MHz RF Receiver Module
  Use with Transmitter Demonstration 1
 
  DroneBot Workshop 2018
  https://dronebotworkshop.com
*/
 
// Include RadioHead Amplitude Shift Keying Library
#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
 
// Create Amplitude Shift Keying Object
RH_ASK rf_driver;
String c; 
void setup()
{
    // Initialize ASK Object
    rf_driver.init();
    // Setup Serial Monitor
    Serial.begin(9600);
}
 
void loop()
{
    // Set buffer to size of expected message
    uint16_t data;
       uint8_t datalen=sizeof(data);
    // Check if received packet is correct size
    if (rf_driver.recv((uint8_t*)&data, &datalen)
     && datalen==sizeof(data))
    {
      
      // Message received with valid checksum
      Serial.print("Message Received: ");
       uint16_t xyz=data;
      int  a=int(data);

        Serial.println(a);
      int b=((25*a)/18);          //((25*a)/18)(1 + (180-a)/45)
        
        if(b>0 && b<180)
        {
        analogWrite(3,b);
        analogWrite(5,255-b);
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        }
        if(b<0 && b>-90)
        {
        analogWrite(3,0);
        analogWrite(5,255);
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        }
        if(b<-90 && b>-180)
        {
        analogWrite(3,255);
        analogWrite(5,0);
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        }
        delay(70);
    }
}
