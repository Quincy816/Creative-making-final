
# Week 5
· 2022.11.3
Work time :5 hours,
Feeling: not bad,
Progress: 5%

I recently have made up my mind for the final project. I am planning to make a project about the violence against women. In order to show the common violence against women, simulate post traumatic women under the situation, Hoping that I can make an more article installation to show what I have learned and practiced from class. And I have drawn a concept picture like this.


· 2022.11.5
Work time :7 hours,
Feeling: not bad,
Progress: 10%

I made the first try for the component choosing, It takes me a whole day learn the basic knowledge about the C language and the Arduino board. To test the motor connecting with the proximity sensor, but disappointingly the effects is not very good. I don’t think the motor power is enough to monitor the human heartbeats true to life so next time I will try the other kind of servos.



Code:
Void setup(){
pinMode(9,OUTPUT);
Serial.begin(9600);
}
Void loop(){
digitalWrite(9,HIGH);
delay(1000);
digitalWrite(9,LOW)
Delay(1000);
}


· 2022.11.8;
Work time :3 hours,
Feeling: Not good,
Progress:12%

Today, I tried to build a relatively complete circuit on Tinkercad. In fact, this was a bit of messy, because I am still learning the basic knowledge of Arduino and how to formally create a mature circuit with code. I think I need more efforts. So I began to learn some lessons from the internet videos.

· 2022.11.10
Work time 6 hours,
Feeling: not good,
Progress: 15%

I did some calculations about the rotation frequency of the standard servo angles.
I searched the information from the internet and realized that the distance that the proximity sensor can catch is around 450 cm theoretically. So I used the linear equation in two unknowns to calculation. 

servoAngle = ?
distance ( 0, 450 )
angle ( 180, 0 )
so ServoAngle = 180/distance*40.?

Code:
void setup()
{
  myservo0.attach(2); 
  myservo1.attach(3); 
  myservo2.attach(4); 
  myservo3.attach(5); 
  myservo4.attach(6); 

  myservo0.write(90);  
  myservo1.write(90);
  myservo2.write(90);  
  myservo3.write(0);  
  myservo4.write(0);

}

void loop()
{
  myservo0.write(90);
  myservo1.write(90); 
  myservo2.write(90);
  myservo3.write(0);  
  myservo4.write(0);   
  delay(1500);

  myservo0.write(150);
  myservo1.write(90); 
  myservo2.write(90);
  myservo3.write(0);  
  myservo4.write(0);   
  delay(1500);                           

  myservo0.write(150);
  myservo1.write(145); 
  myservo2.write(65);
  myservo3.write(0);  
  myservo4.write(0);   
  delay(1500);                           
 

  myservo0.write(150);
  myservo1.write(145); 
  myservo2.write(65); 
  myservo3.write(180);  
  myservo4.write(0);   
  delay(1500);
                      


  myservo0.write(150);
  myservo1.write(145); 
  myservo2.write(65);
  myservo3.write(0);  
  myservo4.write(0);   
  delay(500);



  myservo0.write(150);
  myservo1.write(90); 
  myservo2.write(90);
  myservo3.write(0);  
  myservo4.write(0);   
  delay(1500);                           

  myservo0.write(30);
  myservo1.write(90); 
  myservo2.write(90);
  myservo3.write(0);  
  myservo4.write(0);   
  delay(1500);
                        

  myservo0.write(30);
  myservo1.write(145); 
  myservo2.write(65);
  myservo3.write(0);  
  myservo4.write(0);     
  delay(1500);                           
 

  myservo0.write(30);
  myservo1.write(145); 
  myservo2.write(65);
  myservo3.write(0);  
  myservo4.write(180);     
  delay(1500);                           

  myservo0.write(30); 
  myservo1.write(145); 
  myservo2.write(65);
  myservo3.write(0);  
  myservo4.write(0);     
  delay(1500);          
 myservo0.write(30);  
  myservo1.write(90); 
 myservo2.write(90);
  myservo3.write(0);  
  myservo4.write(0);   
  delay(1500);
 

  myservo0.write(90);  
  myservo1.write(90);
  myservo2.write(90);  
  myservo3.write(0);  
  myservo4.write(0);   
  delay(15000000);
}



· 2022.11.11
Work time :7 hours,
Feeling: good,
Progress: 25%

I finally figured it out. I think the servo that I used is two different type which is 360 and 180 angle-spin. And I can hardly control the fluency the way it shakes as I wish cause the 180 ones only can be controlled by the angle it spin, but the 360 ones can not be control how much they spin for one time. Maybe it is not a wise choice to use the servo as the engine. So I plan to use the air pump to have a try of the air balloon as the major part of the heartbeats.



Code:
if(distance<=10){
me.write(45);
}else if(distance<=50){
me.write(0)
}else{
me.write(0)

int ServoAngle = 90.0/45*distance;
Serial.println(ServoAngle);
me.write(ServoAngle);
}

· 2022.11.12
Work time :5 hours,
Feeling: not good,
Progress:25%



Today I tried the air pump to monitor the heartbeat. Cause I think if I can control the balloon Keep zooming in and out then I can make it like the physiological phenomena when the heart beats. I learned how to do the circuits from the internet . I think it probably worked, but the fluency is not stable and there was too much noise . It really kind of drove me crazy .So I am going to take time to try another component. Maybe the standard servo is better .


# Week 6

· 2022.11.14
Work time :2 hours,
Feeling: good,
Progress:30%

I confirmed the final circuit today, and monitor them on TinkerCad.
The soldering map has been decided as well. But I am not sure that it can work steadily anytime, I am kind of confused. I think I can not control the fluency by the servo pos angle because it can cause too much speed which will make the servo overwhelming. I do not want my servo broken cause I need to return it afterwards.


· 2022.11.17
Work time :7 hours,
Feeling: Not good,
Progress:35%

Today I began to do the soldering. Actually I tried to solder the board for more than 4 times.
The first failed is about the skills. I always used too much article tin to do the circuit so that it can easily be a short circuit. And then for the second time, I watched the tutorial of soldering beginners and learned some skills, checked the circuits with the buzzer at the same time. This time the circuit can runs normally , but the function was kind of weird anyway. Then I noticed that I should not directly solder the component to the board. Because it will be too much troubles if I come up with some mistakes about the soldering.



· 2022.11.18
Work time :7 hours,
Feeling: Not good,
Progress:40%

I did the soldering for two more times today. After my classmates’ help, I finally changed the methods that I used header sockets to make the solder board just like the bread board so that I can change and adjust my circuit at any times. It actually works and thanks GOD!! I was so excited. Anyway I have to spend like 4 hours to adjust my code so that the fluency of the flashing lights and the heart beats can be changes at the same rhythm. Actually I just wrote them in a same loop so that it actually works. So now when I approach to the proximity sensor, the LED lights and the servo will change at the same fluency, it brings more harmony to the whole effect and I am really satisfied.




· 2022.11.20
Work time :5 hours,
Feeling: Not bad,
Progress:45%

Today I tried to use the existing circuit assembly appearance to see the effect achieved. 
Actually I used one standard servo to do the Motion of reciprocation to imitate the heartbeat, And I tried to use the continuous servo to make the ropes which hangs up the heart to shake.
However, I found out it was so uncontrollable that the ropes which hangs the heart up and the 360 degree servos are getting tangled up together and it was totally messed up.
So I was getting to realize that the servos on the corners must do the motion of reciprocation,too. Maybe I need to change the code again, or I will try to use the standard servo rather than the continuous ones.


# Week 7

· 2022.11.21
Work time :5 hours,
Feeling: good,
Progress:55%

The servos have been arranged perfectly, So I started to settle the housing for my project. I used the wood sticks as the frame for hanging up the heart in the air. And I bought the display visible box from Amazon. Actually I tend to do handwork to make this , So i just used painting pixels , saw and glue gun to made the majority of it. 






· 2022.11.25
Work time :8 hours,
Feeling: good,
Progress:70%

It takes 4 days for the painting pixels to dry cause the weather was so wet and cold. So I finally can start to assemble them together. Anyway It works, although I think I didn’t control the size of the wood sticks perfectly. But it looks great.(i think so)
So I used the cotton as the heart’s material, and I wrapped it with the red organza to imitate the heart . I put the standard servo and the LED lights inside the packaging so that it can control them shaking and changing together.  
What’s more, I tried to used the red wool ropes to hang it up to the frame, and I used more that it need so that it can be more beautiful than before., stronger feeling of the texture of structure.



· 2022.11.27
Work time :3 hours,
Feeling: Not good,
Progress:80%

 Finally I came up with another question. My pressure sensor was broken when I was doing the soldering. So i changed my mind, I want to attach it directly to my header sockets.
I think it can work, but the effect was not very stable . Moreover, The pressure sensor was so thin like a piece of paper, So I should stick it to the housing of my project. That means the pressure sensor is supposed to lie down, but the right header sockets are still too thick for it ,I am not sure what is the perfect way to install it, So maybe I need to ask the teachers for the solution.And then I realized that maybe I just need a bigger sensor which can be soldered more easily.



# Week 8

· 2022.11.30
Work time :8 hours, 
Feeling: Not bad ,
Progress:85% 

I spent the whole day for the adjusting of the circus, for I always think that the reaction rate was much too slow. I asked my friend Young for help and he told me that probably the reason is about the delay time. After checking, I noticed that every loop I used contains several delay time, and when they all add together, it cause a great slow response of the circuit, which looks kind of sluggish. So I searched some information on the internet and i found out that there is no need to put delays into every steps. It obviously turned better after the adjusting.



· 2022.12.1
Work time :3 hours,
Feeling: Not bad,
Progress:90%

Tomorrow is the presentation day, I put the circuit into the amazon delivery box for now ,and I used it to make the sketch of the drawing of hole digging. It is necessary because I am going to design the box drawing later and I will definitely need the exact position of each holes which will be dig for the wires and the sensor that should be exposed to the users directly.



· 2022.12.2
Work time :2 hours,
Feeling: Not bad,
Progress:90%

Today we all have seen what were each others doing these days. I think everybody are doing amazing works. And here is a group project which used the proximity sensor and the pressure sensor to control lights and the servos just like me , but I think they have spent more time on it for the housing and the visual effects, and it was so brilliant .Matt says that I need to show more of my progress through the journal and the presentation videos, as it is a personal project, I really think I should have more confidence to show my progress. 

# Week 9

· 2022.12.6
Work time :5 hours,
Feeling: Not bad,
Progress:95%

Today I have designed the drawing of the box housing for the laser cutting machine. Actually it was so popular that I can hardly get the chance to use it. So I just did it in 4d model shop.
Hope it won’t be too late or I would have to do the handwork for the housing of the soldered circuits



· 2022.12.8
Work time :8 hours,
Feeling: Not bad,
Progress:100%

Today I decided to decorate my installation again, because I think the appearance of it is kind of messy for the ropes are not tight enough. And my laser cutting plan have been delayed because of the strike. So I only have to use the delivery box for the box upside for housing the circus. Actually it does not matter because it is not the point. So I am going to say that I finally accomplished it! Thanks for every mates and teachers who have helped me during the progress, and I really learned a lot from doing the final project by my self. It is really a meaningful experience for me and for my first term in CCI, And I will absolutely work harder in my future study.

