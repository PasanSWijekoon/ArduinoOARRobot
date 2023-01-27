#include <Ultrasonic.h>

#include <Servo.h>

Servo s = Servo();
Ultrasonic u = Ultrasonic(3, 4);

void setup() {

  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
   pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  s.attach(8);
  analogWrite(11, 200);
  analogWrite(5, 200);

  Serial.begin(9600);
}

void loop() {

  int x = Serial.read();


  if (x == '1') {  //right

    s.write(90);
    delay(200);

    int d = u.distanceRead();
    delay(100);

    if (d > 10) {


digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);

      delay(500);
      
      

      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      
    }else{

      digitalWrite(10, HIGH);
      delay(200);
    }
   
  }



  if (x == '2') {  
    
    //left
       s.write(30);
       delay(100);

  digitalWrite(2, HIGH);
  


      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(6, HIGH);

      delay(500);
        digitalWrite(2, LOW);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
    
      s.write(90); 
   
  }



  if (x == '3') {  //FORWARD


 s.write(140);
       delay(100);
digitalWrite(9, HIGH);

  digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);

      delay(500);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
    digitalWrite(9, LOW);
     s.write(90);
  }

  if (x == '4') {  //Back

 


      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, HIGH);

      delay(500);

      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
   


  }



}
