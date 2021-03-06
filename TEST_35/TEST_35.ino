#include <PID_v1.h>
#include<Servo.h>

double Setpoint, Input, Output;
double Kp = 1, Ki = 1, Kd = 1;
double CurrentVal;
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);


Servo lsa;
int U0 = 2;
int U1 = 3;
int U2 = 4;
int U3 = 5;
int U4 = 6;
int U5 = 7;
int U6 = 8;
int U7 = 9;
int left = 10;


void setup()
{
  lsa.attach(12);
  Input = CurrentVal;
  Setpoint = 35;
  myPID.SetMode(AUTOMATIC);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(U0));
  Serial.println("....................");
  Serial.println(digitalRead(U1));
  Serial.println("....................");
  Serial.println(digitalRead(U2));
  Serial.println("....................");
  Serial.println(digitalRead(U3));
  Serial.println("....................");
  Serial.println(digitalRead(U4));
  Serial.println("....................");

  Serial.println(digitalRead(U5));
  Serial.println("....................");
  Serial.println(digitalRead(U6));
  Serial.println("....................");
  Serial.println(digitalRead(U7));
  Serial.println("______________________");



  /*                                 ------------------------------------------------ALL THE CONDITION-----------------------------------------------------
    (digitalRead(U0)==0)&&(digitalRead(U1)==0)&&(digitalRead(U2) == 0)&&(digitalRead(U3) == 0)&&(digitalRead(U4) == 0)&&(digitalRead(U5) == 0)&&(digitalRead(U6) == 0)&&(digitalRead(U7) == 0)
    (digitalRead(U0)==1)&&(digitalRead(U1)==1)&&(digitalRead(U2) == 1)&&(digitalRead(U3) == 1)&&(digitalRead(U4) == 1)&&(digitalRead(U5) == 1)&&(digitalRead(U6) == 1)&&(digitalRead(U7) == 1)
  */



  //streight condition     ************   tripel condition  ************
  /*if ((digitalRead(U0) == 1) && (digitalRead(U1) == 1) && (digitalRead(U2) == 1) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    //CurrentVal =;
    //lsa.write(70);
    //Serial.println("on U0 & U1 & U2, turning ##LEFT## by ##10##");


    else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 1) && (digitalRead(U2) == 1) && (digitalRead(U3) == 1) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

      //CurrentVal =;
      //lsa.write(75);
      //Serial.println("on U1 & U2 & U3, turning ##LEFT## by ##5##");


      else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 1) && (digitalRead(U3) == 1) && (digitalRead(U4) == 1) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

        //CurrentVal =;
        //lsa.write(78);
        //Serial.println("on U2 & U3 & U4, turnig ##LEFT## by ##2##");


        else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 1) && (digitalRead(U4) == 1) && (digitalRead(U5) == 1) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

          //CurrentVal =;
          //lsa.write(82);
          //Serial.println("on U3 & U4 & U5, turning ##RIGHT## BY ##2##");


          else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 1) && (digitalRead(U5) == 1) && (digitalRead(U6) == 1) && (digitalRead(U7) == 0))

            //CurrentVal =;
            //lsa.write(85);
            //Serial.println("on U4 & U5 & U6,turning ##RIGHT## by ##5##");


            else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 1) && (digitalRead(U6) == 1) && (digitalRead(U7) == 1))

              //CurrentVal =;
              //lsa.write(90);
              //Serial.println("on U5 & U6 & U7,turning ##RIGHT## by ##10##");*/




  //strate condition     ************   double condition  ***********
  if ((digitalRead(U0) == 1) && (digitalRead(U1) == 1) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 5;
  //lsa.write(65);
  //Serial.println("on U0 & U1, turning ##LEFT## by ##15##");  //(digitalRead(U0)==1)&&(digitalRead(U1)==1)&&(digitalRead(U2) == 1)&&(digitalRead(U3) == 1)&&(digitalRead(U4) == 1)&&(digitalRead(U5) == 1)&&(digitalRead(U6) == 1)&&(digitalRead(U7) == 1)


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 1) && (digitalRead(U2) == 1) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 15;
  //lsa.write(70);
  //Serial.println("on U1 & U2, turning ##LEFT## by ##10##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 1) && (digitalRead(U3) == 1) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 25;
  //lsa.write(75);
  //Serial.println("on U2 & U3, turnig ##LEFT## by ##5##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 1) && (digitalRead(U4) == 1) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 35;
  //lsa.write(80);
  //Serial.println("on U3 & U4,##MOVING FORWARD##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 1) && (digitalRead(U5) == 1) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 45;
  //lsa.write(85);
  //Serial.println("on U4 & U5,turning ##RIGHT## by ##5##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 1) && (digitalRead(U6) == 1) && (digitalRead(U7) == 0))

    CurrentVal = 55;
  //lsa.write(90);
  //Serial.println("on U5 & U6,turning ##RIGHT## by ##10##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 1) && (digitalRead(U7) == 1))

    CurrentVal = 65;
  //lsa.write(95);
  //Serial.println("on U6 & U7,turning ##RIGHT## by ##15##");






  //strate condition     ************   single condition  ************
  else if ((digitalRead(U0) == 1) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 0;
  //lsa.write(65);
  //Serial.println("on U0, turning ##LEFT## by ##15##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 1) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 10;
  //lsa.write(70);
  //Serial.println("U1 high, turnig ##left## by ##10##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 1) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 20;
  //lsa.write(75);
  //Serial.println("U2 high,turning ##left## by ##5##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 1) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 30;
  //lsa.write(80);
  //Serial.println("U3 high,moving ##forward##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 1) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 40;
  //lsa.write(80);
  //Serial.println("U4 high,moving ##forward##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 1) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))

    CurrentVal = 50;
  //lsa.write(85);
  //Serial.println("U5 high, turnig ##right## by ##5##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 1) && (digitalRead(U7) == 0))

    CurrentVal = 60;
  ////lsa.write(90);
  ////Serial.println("U6 high, turnig ##right## by ##10##");


  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 1))

    CurrentVal = 70;
  ////lsa.write(95);
  ////Serial.println("on U7,turning ##RIGHT## by ##15##");






  //       move right
  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 1) && (digitalRead(U4) == 1) && (digitalRead(U5) == 1) && (digitalRead(U6) == 1) && (digitalRead(U7) == 1))
  {
    lsa.write(180);
    Serial.println("##CORNER## turnig ##right## by ##90##");
  }

  else if ((digitalRead(U0) == 0) && (digitalRead(U1) == 0) && (digitalRead(U2) == 0) && (digitalRead(U3) == 0) && (digitalRead(U4) == 1) && (digitalRead(U5) == 1) && (digitalRead(U6) == 1) && (digitalRead(U7) == 1))
  {
    lsa.write(180);
    Serial.println("##CORNER## turnig ##right## by ##90##");
  }




  // move left
  else if ((digitalRead(U0) == 1) && (digitalRead(U1) == 1) && (digitalRead(U2) == 1) && (digitalRead(U3) == 1) && (digitalRead(U4) == 1) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))
  {
    lsa.write(0);
    Serial.println("##CORNER## turnig ##left## by ##90##");
  }

  else if ((digitalRead(U0) == 1) && (digitalRead(U1) == 1) && (digitalRead(U2) == 1) && (digitalRead(U3) == 1) && (digitalRead(U4) == 0) && (digitalRead(U5) == 0) && (digitalRead(U6) == 0) && (digitalRead(U7) == 0))
  {
    lsa.write(0);
    Serial.println("##CORNER## turnig ##left## by ##90##");
  }





  //   All HIGH

  else if ((digitalRead(U0) == 1) && (digitalRead(U1) == 1) && (digitalRead(U2) == 1) && (digitalRead(U3) == 1) && (digitalRead(U4) == 1) && (digitalRead(U5) == 1) && (digitalRead(U6) == 1) && (digitalRead(U7) == 1))
  {
    lsa.write(0);
    Serial.println("##JUNCTION## turnig ##left## by ##90##");
  }




  //Input = CurrentVal;
  myPID.Compute();
  lsa.write(Output);
  Serial.println("the input is");
  Serial.println(Input);
  Serial.println("......................");
  Serial.println("servo angle is");
  Serial.println(Output);
  Serial.println("______________________");
}
