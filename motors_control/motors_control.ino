//left motor
int enableLeft = 10;
int leftForward = 2;
int leftBackward = 3;

//right motor
int enableRight = 11;
int rightForward = 5;
int rightBackward = 6;

//functions
//left motor
void stopLeft(){
  digitalWrite(leftForward, LOW);
  digitalWrite(leftBackward, LOW);
}
void leftMotorSpeed(byte newSpeed){
  analogWrite(enableLeft, newSpeed);
}

void leftMotorForward(){
  digitalWrite(leftForward, HIGH);
  digitalWrite(leftBackward, LOW);
}

//right motor
void stopRight(){
  digitalWrite(rightForward, LOW);
  digitalWrite(rightBackward, LOW);
}
void rightMotorSpeed(byte newSpeed){
  analogWrite(enableRight, newSpeed);
}

void rightMotorForward(){
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);
}
//both
void stopMotors(){
  stopLeft();
  stopRight();
}
void changeSpeed(byte newSpeed){
  leftMotorSpeed(newSpeed);
  rightMotorSpeed(newSpeed);
}
void goForward(){
  leftMotorForward();
  rightMotorForward();
  Serial.println("going forward");
}

void testCode(){
    //test the functions
  for(int i = 0; i< 255; i+=10){
    Serial.println(i);
    changeSpeed(i);
    goForward();
    delay(3000);
    stopMotors();
    delay(300);
  }
}


void setup() {
  // put your setup code here, to run once:
  pinMode(enableLeft, OUTPUT);
  pinMode(leftForward, OUTPUT);
  pinMode(leftBackward, OUTPUT);
  
  pinMode(enableRight, OUTPUT);
  pinMode(rightForward, OUTPUT);
  pinMode(rightBackward, OUTPUT);

  stopMotors();
  Serial.begin(9600);
}

void loop() {

}
