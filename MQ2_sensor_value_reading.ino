//Pin Connections for MQ-2 Sensor:
//VCC → 5V (Arduino)
//GND → GND (Arduino)
//A0 (Analog Output) → A0 (Arduino Analog Pin)



// Pin Definitions
const int mq2Pin = A0;  // Analog pin for MQ-2 sensor

void setup() {
  // Initialize the Serial Monitor to display the sensor readings
  Serial.begin(9600);
  pinMode(mq2Pin, INPUT);
}

void loop() {
  // Read the analog value from the MQ-2 sensor
  int sensorValue = analogRead(mq2Pin);
  
  // Print the sensor value to the Serial Monitor
  Serial.print("MQ-2 Sensor Value: ");
  Serial.println(sensorValue);
  
  // Add a small delay between readings
  delay(1000); // 1 second delay
}
