int startValue = 5;
int ledPin = 13;

// Function to blink the LED a specified number of times
void flashLED(int rates) {
  int flashCount = 0;

  while (flashCount < rates) {
    digitalWrite(ledPin, 1); // 1 or HIGH to on LED
    delay(1000);

    digitalWrite(ledPin, 0);  //  0 or LOW to on LED
    delay(1000);

    flashCount = flashCount + 1;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);   // Blink LED count times

    delay(1000);

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Empty
}
