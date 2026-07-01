#include <Servo.h>

// Define pins
const int trigPin = 9;
const int echoPin = 10;
const int redLED = 4;
const int greenLED = 5;
Servo myServo;

void setup() {
  // Initialize pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  
  // Attach servo to pin 3
  myServo.attach(3);
  
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  long duration;
  int distance;

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo response
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Calculate distance in cm

  // Check if an object is within 10 cm
  if (distance > 0 && distance <= 10) {
    // Move servo motor
    myServo.write(90); // Move to 90 degrees
    delay(500); // Wait for half a second
    myServo.write(0); // Move back to 0 degrees

    // Glow LEDs
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, HIGH);
    delay(1000); // Keep LEDs ON for 1 second
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
  } else {
    // Turn LEDs OFF
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
  }

  // Add a delay for stability
  delay(100);
}