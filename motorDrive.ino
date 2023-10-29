/*
 * Back-Motors (2,3)
  int motor1pin1 = 45;
  int motor1pin2 = 51;

  int motor2pin1 = 47;
  int  motor2pin2 = 49;

int enablePinA = 7;
int enablePinB = 53;
  
  digitalWrite(motor1pin1,  LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
*/

/*
 * Front-Motors (1,4)
int motor1pin1 = 44;
int motor1pin2 = 8;

int motor2pin1 = 50;
int  motor2pin2 = 10;

int enablePinA = 9;
int enablePinB = 46;

  digitalWrite(motor1pin1,  HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);

*/
int motor3pin1 = 45;
int motor3pin2 = 51;

int motor4pin1 = 47;
int  motor4pin2 = 49;

int enablePinA2 = 7;
int enablePinB2 = 53;



int motor1pin1 = 44;
int motor1pin2 = 8;

int motor2pin1 = 50;
int  motor2pin2 = 10;

int enablePinA = 9;
int enablePinB = 46;
void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1,  OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  pinMode(motor3pin1, OUTPUT);
  pinMode(motor3pin2, OUTPUT);
  pinMode(motor4pin1,  OUTPUT);
  pinMode(motor4pin2, OUTPUT);

  pinMode(enablePinA,  OUTPUT); 
  pinMode(enablePinB, OUTPUT);

  pinMode(enablePinA2,  OUTPUT); 
  pinMode(enablePinB2, OUTPUT);
  //(Optional)
}

void loop() {
  // put your main code here, to run repeatedly:

  //Controlling speed (0  = off and 255 = max speed):     
  analogWrite(enablePinA, 255); //ENA  pin
  analogWrite(enablePinB, 255); //ENB pin
  analogWrite(enablePinA2, 255); //ENA  pin
  analogWrite(enablePinB2, 255);
  
  digitalWrite(motor1pin1,  HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);



  digitalWrite(motor3pin1,  LOW);
  digitalWrite(motor3pin2, HIGH);

  digitalWrite(motor4pin1, HIGH);
  digitalWrite(motor4pin2, LOW);
  delay(3000);

  
}
