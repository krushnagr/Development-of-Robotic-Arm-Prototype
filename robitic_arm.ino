#include<Servo.h>
Servo Myservo1;
Servo Myservo2;
Servo Myservo3;
int pos=0;
void setup()
{
  pinMode(2,INPUT);
  Myservo1.attach(5);

  pinMode(3,INPUT);
  Myservo2.attach(6);

  pinMode(4,INPUT);
  Myservo3.attach(7);
}

void loop()
{
  if(digitalRead(2)==LOW){
    Myservo1.write(180);
  }

  if(digitalRead(3)==LOW){
    Myservo2.write(180);
  }

  if(digitalRead(4)==LOW){
    Myservo3.write(180);
  }
  
  else
    
 Myservo1.write(0);
 Myservo2.write(0);
 Myservo3.write(0);

}
