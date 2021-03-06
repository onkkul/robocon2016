/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

int left = 10;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  else if ((digitalRead(U0) == 1) && (digitalRead(U1) == 1) && (digitalRead(U2) == 1) && (digitalRead(U3) == 1) && (digitalRead(U4) == 1) && (digitalRead(U5) == 1) && (digitalRead(U6) == 1) && (digitalRead(U7) == 1))
  {
    if (left == HIGH)
    {
      for (pos = 90; pos <= 180; pos += 1) 
      {                               // goes from 0 degrees to 180 degrees
                                      // in steps of 1 degree
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(150);                       // waits 15ms for the servo to reach the position
      }
      Serial.println("##JUNCTION## turnig ##left## by ##90##");
    }
    else if (left == LOW)
    {
      
     for (pos = 180; pos >= 0; pos -= 1)
     {                                    // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(150);                       // waits 15ms for the servo to reach the position
     }
      Serial.println("##JUNCTION## turnig ##right## by ##90##");
    }
  }

}

