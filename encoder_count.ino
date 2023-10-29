/*
 * The purpose of this code is to count the ouput pulses or 
 * the encoder outputs as you rotate the Motor shaft. This will
 * give us a nice estimate of the amount of ticks in a meter and
 * will prepare us for the next step, the PID Loop
 */

 /*Encoder Test results for each motor ticks for 1 meter:
  * Motor 1 - 241,175,219,199,186,136 - avg: 192.66
  * Motor 2 - 262,317,301,293,300,277 - avg: 291.66
  * Motor 3 - 275,331,251,329,257,358 - avg: 300.17
  * Motor 4 - 311,328,340,320,375,308 - avg: 330.33
  */
//Motor 4 A-2 B-38 (high negative values)
//Motor 2 A-18 B-34 (normal values)
//Motor 3 A-3 B-52 (neg values)-meter res: 55,
//Motor 1 A-19 B-42 (high positive values)

#define ENC_A 2// pin2 of the Arduino
#define ENC_B 38 // pin 3 of the Arduino

int count = 0;
void setup() {
Serial.begin(9600); // activates the serial communication
pinMode(ENC_A,INPUT); 
pinMode(ENC_B,INPUT);
attachInterrupt(digitalPinToInterrupt(ENC_A),DC_Motor_Encoder,CHANGE);
}

void loop() {
  //Serial.println(digitalRead(ENC_B));
}

void DC_Motor_Encoder(){
  
    count++;
  
  Serial.print("Result: ");
  Serial.println(count); 
}
