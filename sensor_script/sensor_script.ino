int sensors_number = 8;
int sensors[8] = {A0,A1,A2,A3,A4,A5,A6,A7};
int delay_timer = 250;

void setup() {
  Serial.begin(9600);
}


void loop() {
  for(int i = 0; i<sensors_number; i++){
    int value = analogRead(sensors[i]);
    Serial.print("sensor [" + String(i) + "]: " + String(value));
  }
  Serial.println();
  delay(delay_timer);
}
