// Order of code running: ArduinoVoltageReciever -> PythonVoltageReciever -> PythonDecayProcessingAndImaging
// To Change: sensorpin = pin voltage output is assigned
//            delay(#) = time in between data collection
// To Use: Simply run the document and proceed to other python files while keeping this document running

const int sensorpin = A5;
int data;
float time = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorpin);
  float voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("Voltage: ");
  Serial.println(voltage);

  delay(100);  // Wait for 100 milliseconds
  time += 0.1;  // Increment time by 0.1 seconds

}
