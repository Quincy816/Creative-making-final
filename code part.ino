#include <NewPing.h>

#include <Servo.h>

  int SG = 9;
  int SG1 = 10;
//  int SG2 = 2;
 // int SG3 = 3;
 // int SG4 = 15;

  //int ServoAngle = 0;
  int LED = 5;
  Servo me1;
  Servo me2;
  Servo me3;
  Servo me4;
  Servo me5;

 
  const int TrigPin = 7;
  const int EchoPin = 6;
  long duration;
  int distance; 
  const int Pressurepin = A0;
  int value = 0;


void setup()
{

pinMode(TrigPin, OUTPUT);
pinMode(EchoPin, INPUT);

Serial.begin(9600);


me1.attach(9);
 me2.attach(10);
 me3.attach(10);
me4.attach(10);
 me5.attach(10);

  


 


pinMode(LED,OUTPUT);


  
}


void loop(){
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(EchoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);


  //设置压力传感器的程序
value = analogRead(Pressurepin);
Serial.println(value);


if (value>600){

for(int pos=0;pos<=180;pos++){
  me2.write(pos);

  delay(2);
}
for(int pos=180;pos>=0;pos--){
 me2.write(pos);

delay(2);
}
}else{
  me2.write(0);
}

// if(value<800){
// me2.write(0);
//   me3.write(0);
//   me4.write(0);
//   me5.write(0);
// delay(2000);
//   me2.write(90);
//   me3.write(90);
//   me4.write(90);
//   me5.write(90);
// delay(500);
// me2.write(180);
//   me3.write(180);
//   me4.write(180);
//   me5.write(180);
// delay(2000);
//   me2.write(90);
//   me3.write(90);
//   me4.write(90);
//   me5.write(90);
// delay(500);
  
// }else{
//   me2.write(90);
//   me3.write(90);
//   me4.write(90);
//   me5.write(90);

// delay(1);

   
// }


  //设置距离传感器的程序

//    digitalWrite(TrigPin, LOW);
//   delayMicroseconds(2);
//   digitalWrite(TrigPin, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(TrigPin, LOW);
//   int distance = pulseIn(EchoPin, HIGH)/58.0;
//   Serial.print("Distance=");
//   Serial.print(distance);
//   Serial.println("cm");
//   delay(5);

// int ServoAngle = 180.0/distance*40;

// distance = pulseIn(EchoPin, HIGH)/58.0;


// if (distance<50 && distance>15){

// for(int pos=0;pos<=180;pos++){
//   me1.write(pos);
 
// }
// for(int pos=180;pos>=0;pos--){
//  me1.write(pos);
 
// }

// for(int i=0;i<=255;i++)
//   {
//     analogWrite(LED,i);
    
//   }
//   for(int i=255;i>=0;i--)
//   {
//     analogWrite(LED,i);
   
//   }
//   delay(500);
// }

// if (distance>=50){

// for(int pos=0;pos<=180;pos++){
//   me1.write(pos);
 
// }
// for(int pos=180;pos>=0;pos--){
//  me1.write(pos);
 
// }

// for(int i=0;i<=255;i++)
//   {
//     analogWrite(LED,i);
    
//   }
//   for(int i=255;i>=0;i--)
//   {
//     analogWrite(LED,i);
   
//   }
//   delay(1000);
// }

if (distance<=15){

for(int pos=0;pos<=180;pos++){
  me1.write(pos);
  analogWrite(LED,pos);
  delay(1);
}
for(int pos=180;pos>=0;pos--){
 me1.write(pos);
 analogWrite(LED,pos);
delay(1);
}
}
if (distance>15&&distance<=50){

for(int pos=0;pos<=180;pos++){
  me1.write(pos);
  analogWrite(LED,pos);
  delay(5);
}
for(int pos=180;pos>=0;pos--){
 me1.write(pos);
 analogWrite(LED,pos);
delay(5);
}
}
if (distance>50){

for(int pos=0;pos<=180;pos++){
  me1.write(pos);
  analogWrite(LED,pos);
  delay(10);
}
for(int pos=180;pos>=0;pos--){
 me1.write(pos);
 analogWrite(LED,pos);
delay(10);
}
}


// if(distance<=15){
// for(int pos=0;pos<=180;pos++){
//   me1.write(pos);
//   delay(1);
// }
// for(int pos=180;pos>=0;pos--){
//   me1.write(pos);
//   delay(1);
// }  
//  }
//  if (distance>50){
//  for(int pos=0;pos<180;pos++){
//   me1.write(pos);
//   delay(8);
// }
// for(int pos=180;pos>0;pos--){
//   me1.write(pos);
//   delay(8);
// } 
// }

//if(distance<=100){


//me1.write(ServoAngle);

//int flu = distance*2;
//if(ServoAngle < 90){


//me1.write(ServoAngle+20);
//delay(flu);
//}else{
 //me1.write(ServoAngle-20);
 //delay(flu);

//}

//if(distance<=10){
//me.write(45);
//}else if(distance<=50){
//me.write(0)
//}else{
//me.write(0)


//int ServoAngle = 90.0/45*distance;
//Serial.println(ServoAngle);
//me.write(ServoAngle);
//}



//int flu = distance/5;








// if(distance>50){
//   for(int i=0;i<255;i++)
//   {
    
//     analogWrite(LED,i);
//     delay(10);
//   }
//   for(int i=255;i>0;i--)
//   {
  
//     analogWrite(LED,i);
//     delay(10);
//   }
// }
// if(distance<=50 && distance>15){
//   for(int i=0;i<200;i++)
//   {
    
//     analogWrite(LED,i);
//     delay(5);
//   }
//   for(int i=200;i>0;i--)
//   {
  
//     analogWrite(LED,i);
//     delay(5);
//   }
// }if(distance<=15){
//   for(int i=0;i<150;i++)
//   {
    
//     analogWrite(LED,i);
//     delay(5);
//   }
//   for(int i=150;i>0;i--)
//   {
  
//     analogWrite(LED,i);
//     delay(5);
//   }

// }
}

