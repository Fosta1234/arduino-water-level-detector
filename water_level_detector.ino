// Pin Definitions
const int sensorPin = A0;
const int redLed = 2;    // Low Level
const int yellowLed = 3; // Medium Level
const int greenLed = 4;  // High Level (Full)

// Calibration Thresholds (Adjust based on Serial Monitor readings)
const int lowLevel = 100;
const int midLevel = 350;
const int highLevel = 550;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600); // Start serial for calibration
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  
  Serial.print("Water Level Value: ");
  Serial.println(sensorValue);

  // Turn all LEDs off initially
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);

  // Logic for 3-Stage Indication
  if (sensorValue >= highLevel) {
    digitalWrite(greenLed, HIGH);
  } else if (sensorValue >= midLevel) {
    digitalWrite(yellowLed, HIGH);
  } else if (sensorValue >= lowLevel) {
    digitalWrite(redLed, HIGH);
  }

  delay(500); // Wait 0.5s before next reading
}
