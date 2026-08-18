#include <Servo.h>
#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

// ---------------- PIN DEFINITIONS ----------------

const int PIR_PIN = 2;

const int LED1_PIN = 4;
const int LED2_PIN = 5;

const int DF_BUSY_PIN = 7;

const int SERVO_PIN = 9;

const int DF_RX_PIN = 10;
const int DF_TX_PIN = 11;

// ---------------- OBJECTS ----------------

Servo handServo;

SoftwareSerial dfSerial(DF_RX_PIN, DF_TX_PIN);
DFRobotDFPlayerMini dfPlayer;

// ---------------- SETTINGS ----------------

const int SERVO_HOME = 0;
const int SERVO_WAVE = 60;

const int VOLUME = 25;

// ---------------- VARIABLES ----------------

bool systemActive = false;
bool audioHasStarted = false;

unsigned long audioEndTime = 0;

// =================================================
// SETUP
// =================================================

void setup()
{
  Serial.begin(9600);

  // PIR
  pinMode(PIR_PIN, INPUT);

  // LEDs
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);

  // DFPlayer BUSY
  pinMode(DF_BUSY_PIN, INPUT);

  // LEDs initially OFF
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);

  // Servo
  handServo.attach(SERVO_PIN);
  handServo.write(SERVO_HOME);

  // DFPlayer
  dfSerial.begin(9600);

  Serial.println("Initializing DFPlayer Mini...");

  if (!dfPlayer.begin(dfSerial))
  {
    Serial.println("DFPlayer initialization failed!");
    Serial.println("Check:");
    Serial.println("1. Wiring");
    Serial.println("2. SD card");
    Serial.println("3. Speaker");

    while (true);
  }

  Serial.println("DFPlayer initialized successfully.");

  dfPlayer.volume(VOLUME);

  delay(500);

  Serial.println("System ready.");
}

// =================================================
// MAIN LOOP
// =================================================

void loop()
{
  int pirState = digitalRead(PIR_PIN);

  // ------------------------------------------------
  // DETECT MOTION
  // ------------------------------------------------

  if (pirState == HIGH && !systemActive)
  {
    systemActive = true;
    audioHasStarted = false;
    audioEndTime = 0;

    Serial.println();
    Serial.println("MOTION DETECTED!");

    // Turn ON eyes
    digitalWrite(LED1_PIN, HIGH);
    digitalWrite(LED2_PIN, HIGH);

    // Play welcome message
    Serial.println("Playing voice note...");

    dfPlayer.play(1);

    // Give DFPlayer time to start
    delay(300);

    // Check if BUSY became LOW
    if (digitalRead(DF_BUSY_PIN) == LOW)
    {
      audioHasStarted = true;
      Serial.println("Audio is playing.");
    }

    // Move robot hand
    waveHand();
  }

  // ------------------------------------------------
  // CHECK AUDIO STATUS
  // ------------------------------------------------

  if (systemActive && audioHasStarted)
  {
    // BUSY LOW = audio playing
    // BUSY HIGH = audio finished

    if (digitalRead(DF_BUSY_PIN) == HIGH)
    {
      if (audioEndTime == 0)
      {
        audioEndTime = millis();

        Serial.println("Audio finished.");
        Serial.println("Starting 2-second delay.");
      }

      // Wait 2 seconds after audio finishes
      if (millis() - audioEndTime >= 2000)
      {
        shutDownSystem();
      }
    }
  }
}

// =================================================
// SERVO WAVE
// =================================================

void waveHand()
{
  Serial.println("Hand waving...");

  // 0° → 60°
  for (int angle = SERVO_HOME; angle <= SERVO_WAVE; angle++)
  {
    handServo.write(angle);
    delay(10);
  }

  delay(200);

  // 60° → 0°
  for (int angle = SERVO_WAVE; angle >= SERVO_HOME; angle--)
  {
    handServo.write(angle);
    delay(10);
  }

  delay(200);

  // 0° → 60°
  for (int angle = SERVO_HOME; angle <= SERVO_WAVE; angle++)
  {
    handServo.write(angle);
    delay(10);
  }

  delay(200);

  // 60° → 0°
  for (int angle = SERVO_WAVE; angle >= SERVO_HOME; angle--)
  {
    handServo.write(angle);
    delay(10);
  }

  Serial.println("Hand wave completed.");
}

// =================================================
// SHUT DOWN
// =================================================

void shutDownSystem()
{
  Serial.println("2 seconds completed.");
  Serial.println("Turning system OFF.");

  // LEDs OFF
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);

  // Servo HOME
  handServo.write(SERVO_HOME);

  // Reset
  systemActive = false;
  audioHasStarted = false;
  audioEndTime = 0;

  Serial.println("System ready for next motion.");
}