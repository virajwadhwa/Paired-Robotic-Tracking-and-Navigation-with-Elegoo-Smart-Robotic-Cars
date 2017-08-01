// this code only requires a car.
// This code is meant for fun purposes. All it is intended to do, is get the car to dance around in wierd movements.
// The movements can be modified in loop()

#include <Servo.h>
Servo myservo;
int Echo = A4;
int Trig = A5;

int in1=9;
int in2=8;
int in3=7;
int in4=6;
/*define channel enable output pins*/
int ENA=10;
int ENB=5;
int ABS = 255; 
/*define forward function*/
void _mForward() // move car forward
{ 
  analogWrite(ENA,ABS);
  analogWrite(ENB,ABS);
  digitalWrite(in1,LOW);//digital output
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
 // delay(1000);
  
  /**
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(600);
  analogWrite(ENA, ABS);
  analogWrite(ENB, ABS); (*/
}
void _mright() // move car right
{
 analogWrite(ENA,ABS);
 analogWrite(ENB,ABS);
 digitalWrite(in1,HIGH);
 digitalWrite(in2,LOW);
 digitalWrite(in3,LOW);
 digitalWrite(in4,HIGH);
 Serial.println("go right!");
} 

/*put your setup code here, to run once*/
void setup() { // initialize pins to voltage inputs or voltage outputs.
 myservo.attach(3);
 Serial.begin(9600); //Open the serial port and set the baud rate to 9600
/*Set the defined pins to the output*/
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
}
/*put your main code here, to run repeatedly*/
void loop() { 
_mForward();
delay(50);
analogWrite(ENA, 0); // This segment of code is meant to have the car go in circles
analogWrite(ENB, 0);
delay(200);
_mright();
delay(200);
/**myservo.write(5);
delay(100);
myservo.write(75);
delay(100);
myservo.write(35);
delay(100);
myservo.write(60);
delay(100);
myservo.write(5);
delay(200);
myservo.write(120);
delay(100);
myservo.write(165);
delay(100);
myservo.write(140);
delay(100);
myservo.write(155);
delay(100); */

}
