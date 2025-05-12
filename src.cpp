const int ldrPin = A0;      // LDR connected to analog pin A0
const int ledPin = 2;       // LED connected to digital pin 8
const int buzzerPin = 3;    // Buzzer connected to digital pin 9

// Threshold to detect laser interruption
int threshold = 500; // Adjust after testing

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // For debugging
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    // Laser beam is cut
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Laser beam received
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  
  delay(100);
}

FINAL CODE
