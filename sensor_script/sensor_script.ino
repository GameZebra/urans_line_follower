int sensors_number = 8;
int sensors[8] = {A0,A1,A2,A3,A4,A5,A6,A7};
int delay_timer = 250;

void setup() {
  Serial.begin(9600);
//  for(int i = 0; i<sensors_number; i++){
//    pinMode(sensors[i], INPUT);
//  }
}


void loop() {
//  for(int i = 0; i<sensors_number; i++){
//    int value = analogRead(sensors[i]);
//    Serial.print("sensor [" + String(i) + "]: " + String(value));
//  }
    int value1 = analogRead(A0);
    Serial.print("sensor []: " + String(value1));
    int value2 = analogRead(A1);
    Serial.print("sensor []: " + String(value2));
    int value3 = analogRead(A2);
    Serial.print("sensor []: " + String(value3));
    int value4 = analogRead(A3);
    Serial.print("sensor []: " + String(value4));
    int value5 = analogRead(A4);
    Serial.print("sensor []: " + String(value5));
    int value6 = analogRead(A5);
    Serial.print("sensor []: " + String(value6));
    int value7 = analogRead(A6);
    Serial.print("sensor []: " + String(value7));
    int value8 = analogRead(A7);
    Serial.print("sensor []: " + String(value8));

  
  Serial.println();
  delay(delay_timer);
}
