// Two-Button Latching Stop Demo — Arduino UNO / Wokwi
// Educational demonstration only; NOT a safety-rated emergency-stop device.
// Inputs use external 10k ohm pull-down resistors as shown in diagram.json.

const int startButton = 7;
const int stopButton  = 8;
const int outputPin   = 6;

bool systemRunning = false;

void setup() {
  pinMode(startButton, INPUT);
  pinMode(stopButton, INPUT);
  pinMode(outputPin, OUTPUT);
  digitalWrite(outputPin, LOW);
  Serial.begin(9600);
}

void loop() {
  int startState = digitalRead(startButton);
  int stopState  = digitalRead(stopButton);

  // Stop always has priority when both buttons are pressed.
  if (stopState == HIGH) {
    systemRunning = false;
    Serial.println("E-STOP PRESSED - SYSTEM OFF");
  } else if (startState == HIGH) {
    systemRunning = true;
    Serial.println("START PRESSED - SYSTEM ON");
  }

  // Latch the output until a stop command is received.
  digitalWrite(outputPin, systemRunning ? HIGH : LOW);
  delay(20);
}
