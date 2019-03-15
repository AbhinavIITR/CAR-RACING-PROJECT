// Code for Bluetooth controlled car 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,OUTPUT);        //setting the modes of pin
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())            // to take the input from the user on the serial monitor.
  {                                            
    char inp=Serial.read();

    Serial.println(inp);

    switch(inp)
 {
     
      case 'c':                                   // 'c' is for forward motion
     {
       
        analogWrite(5,150);
        digitalWrite(7,LOW);
        digitalWrite(6,HIGH);

        analogWrite(3,150);
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
        delay(10);
        break;
         }

      case 'd':
      {
        analogWrite(5,150);                        //d is for backward motion
        digitalWrite(7,HIGH);
        digitalWrite(6,LOW);

        analogWrite(3,150);
        digitalWrite(10,LOW);
        digitalWrite(9,HIGH);

        delay(10);
        break;
      }

      case 'b':
      {
        analogWrite(5,150);                         // b is for left turn
        digitalWrite(7,LOW);
        digitalWrite(6,HIGH);

        analogWrite(3,70);
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);

        delay(10);
        break;
      }

      case 'a':
      {
        analogWrite(5,70);                              // a is for left turn
        digitalWrite(7,LOW);
        digitalWrite(6,HIGH);

        analogWrite(3,150);
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);

        delay(10);
        break;
      }


      case 'e':
      {
        analogWrite(5,0);                       // e is for brakes
        analogWrite(3,0);
        delay(10);
      }
      
    }
  }
}
