// Define constants for the LED pins
const int redLED = 9;
const int greenLED = 8;
const int blueLED = 7;
const int whiteLED = 6;
const int yellowLED = 5;
// Define a constant for the delay time in milliseconds
const int delayTime = 1000;

void setup() {
  // Set the LED pins as output
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // Loop to incrementally turn on LEDs
  for (int i = 1; i <= 5; i++) {
    // Turn on LEDs based on the current value of i
    if (i == 1) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, LOW);
      digitalWrite(blueLED, LOW);
      digitalWrite(whiteLED, LOW);
      digitalWrite(yellowLED, LOW);
    } else if (i == 2) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, LOW);
      digitalWrite(whiteLED, LOW);
      digitalWrite(yellowLED, LOW);
    } else if (i == 3) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, HIGH);
      digitalWrite(whiteLED, LOW);
      digitalWrite(yellowLED, LOW);
    } else if (i == 4) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, HIGH);
      digitalWrite(whiteLED, HIGH);
      digitalWrite(yellowLED, LOW);
    } else if (i == 5) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, HIGH);
      digitalWrite(whiteLED, HIGH);
      digitalWrite(yellowLED, HIGH);
    }
    // Wait for the defined delay time
    delay(delayTime);
  }

  // Loop to decrementally turn off LEDs
  for (int j = 5; j >= 1; j--) {
    // Turn off LEDs based on the current value of j
    if (j == 5) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, HIGH);
      digitalWrite(whiteLED, HIGH);
      digitalWrite(yellowLED, HIGH);
    } else if (j == 4) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, HIGH);
      digitalWrite(whiteLED, HIGH);
      digitalWrite(yellowLED, LOW);
    } else if (j == 3) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, HIGH);
      digitalWrite(whiteLED, LOW);
      digitalWrite(yellowLED, LOW);
    } else if (j == 2) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, LOW);
      digitalWrite(whiteLED, LOW);
      digitalWrite(yellowLED, LOW);
    } else if (j == 1) {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, LOW);
      digitalWrite(blueLED, LOW);
      digitalWrite(whiteLED, LOW);
      digitalWrite(yellowLED, LOW);

      // If you want to turn off all LEDs before starting a new sequence
      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, LOW);
      digitalWrite(blueLED, LOW);
      digitalWrite(whiteLED, LOW);
      digitalWrite(yellowLED, LOW);
      // Wait for 5 seconds before starting the new sequence
      delay(5000);
    }
    // Delay before moving to the next step
    delay(delayTime);
  }
}
