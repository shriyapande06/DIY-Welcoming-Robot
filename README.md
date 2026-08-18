````markdown
# DIY Welcoming Robot

<p align="center">
  <img src="Images/robot.jpg" alt="DIY Welcoming Robot" width="500">
</p>

<h1 align="center">DIY Welcoming Robot</h1>

<p align="center">
  An Arduino-based robot that automatically detects visitors and welcomes them with lights, movement and voice.
</p>

<p align="center">
  Arduino UNO • PIR Sensor • Servo Motor • DFPlayer Mini
</p>

---

## About The Project

The **DIY Welcoming Robot** is an interactive Arduino-based robotics project designed to automatically welcome visitors.

The robot uses a **PIR Motion Sensor** to detect a person approaching it. When motion is detected, the Arduino starts a greeting sequence. The robot lights up its LED eyes, moves its hand using a Servo Motor, and plays a pre-recorded welcome message through a DFPlayer Mini and speaker.

This project demonstrates the practical integration of **sensors, actuators, LEDs, servo motors, audio modules, and Arduino programming** in a simple robotics application.

---

## Features

- Automatic visitor detection using a PIR Motion Sensor
- Servo-controlled hand movement
- Dual LED eyes for visual interaction
- Voice greeting using DFPlayer Mini
- MP3 audio playback using a Micro SD Card
- Arduino UNO based control
- Simple and beginner-friendly design
- Suitable for college exhibitions and robotics demonstrations

---

## How It Works

The robot follows a simple sequence when a visitor approaches.

```text
                    Visitor
                       |
                       v
              +----------------+
              |   PIR Sensor   |
              +----------------+
                       |
                       | Motion Detected
                       v
              +----------------+
              |  Arduino UNO   |
              +----------------+
                 /      |      \
                /       |       \
               v        v        v
          +--------+ +--------+ +------------+
          |  LEDs  | | Servo  | | DFPlayer   |
          |  Eyes  | | Motor  | | Mini       |
          +--------+ +--------+ +------------+
               |        |            |
               v        v            v
              LED     Hand Wave    Voice
               ON                  Greeting
                 \        |        /
                  \       |       /
                   \      |      /
                    v     v     v
                 Greeting Complete
                       |
                       v
                 Standby Mode
````

---

## Greeting Sequence

When a visitor is detected, the robot performs the following actions:

### 1. Motion Detection

The PIR sensor continuously monitors the surrounding area.

### 2. Visitor Detected

When a person enters the sensing range, the PIR sensor sends a signal to the Arduino.

### 3. LED Eyes Turn ON

The Arduino activates the two LED eyes of the robot.

### 4. Hand Movement

The Servo Motor moves the robot's hand to create a waving gesture.

### 5. Voice Greeting

The DFPlayer Mini plays the pre-recorded welcome message through the speaker.

> "Hey! Welcome to the Department of Electronics and Telecommunications."

### 6. Return to Standby

After completing the greeting sequence, the robot returns to standby mode and waits for the next visitor.

---

## Components Used

| Component                    |   Quantity  |
| ---------------------------- | :---------: |
| Arduino UNO R3               |      1      |
| PIR Motion Sensor (HC-SR501) |      1      |
| DFPlayer Mini                |      1      |
| 3W Speaker                   |      1      |
| Micro SD Card                |      1      |
| Servo Motor                  |      1      |
| LEDs                         |      2      |
| 220Ω Resistors               |      2      |
| Jumper Wires                 | As Required |
| Power Adapter                |      1      |

---

## Project Images

### Robot

<p align="center">
  <img src="Images/robot.jpg" alt="DIY Welcoming Robot" width="500">
</p>

---

## Block Diagram

The block diagram represents the overall flow of the robot and shows how the different modules interact with the Arduino.

<p align="center">
  <img src="Block%20Diagram/Block%20Diagram.png" alt="Block Diagram" width="750">
</p>

[View Block Diagram](Block%20Diagram/Block%20Diagram.png)

---

## Circuit Diagram

The circuit diagram shows the electrical connections between the Arduino UNO, PIR sensor, LEDs, Servo Motor, DFPlayer Mini, speaker and power supply.

<p align="center">
  <img src="Circuit%20Diagram/Circuit%20Diagram.png" alt="Circuit Diagram" width="750">
</p>

[View Circuit Diagram](Circuit%20Diagram/Circuit%20Diagram.png)

---

## Software

The project is programmed using the **Arduino IDE**.

### Programming Language

```text
C / C++ (Arduino)
```

### Libraries Used

```text
Servo.h
SoftwareSerial.h
DFRobotDFPlayerMini.h
```

Make sure the required libraries are installed in the Arduino IDE before uploading the program.

---

## Source Code

The complete Arduino source code is available in the `Code` folder.

[Open robo_code.ino](Code/robo_code.ino)

---

## Audio Track

The pre-recorded welcome message used by the DFPlayer Mini is available in the `Audio Track` folder.

[Open robot voice.mp3](Audio%20Track/robot%20voice.mp3)

The audio file is stored on a Micro SD Card connected to the DFPlayer Mini.

---

## Pin Configuration

The main Arduino connections used in the project are:

| Component         | Arduino Pin |
| ----------------- | ----------- |
| PIR Motion Sensor | D2          |
| Green LED 1       | D4          |
| Green LED 2       | D5          |
| DFPlayer BUSY     | D7          |
| Servo Motor       | D9          |

> The remaining DFPlayer Mini connections and power connections should be made according to the circuit diagram provided in this repository.

---

## Getting Started

Follow the steps below to build and run the project.

### Step 1 — Clone the Repository

```bash
git clone <your-github-repository-link>
```

### Step 2 — Open the Arduino Code

Open the following file in the Arduino IDE:

```text
Code/robo_code.ino
```

### Step 3 — Install Required Libraries

Install the following libraries through the Arduino IDE Library Manager:

```text
Servo
SoftwareSerial
DFRobotDFPlayerMini
```

### Step 4 — Prepare the Micro SD Card

Insert the required Micro SD Card into the DFPlayer Mini and place the welcome audio file on the card.

### Step 5 — Connect the Circuit

Connect all the components according to the circuit diagram available in this repository.

### Step 6 — Upload the Code

Connect the Arduino UNO to your computer and upload the `robo_code.ino` program.

### Step 7 — Power the Robot

After uploading the program, power the robot using the appropriate power supply.

### Step 8 — Test the Robot

Move in front of the PIR sensor and observe the robot perform its greeting sequence.

---

## Repository Structure

```text
DIY-Welcoming-Robot/
│
├── Audio Track/
│   └── robot voice.mp3
│
├── Block Diagram/
│   └── Block Diagram.png
│
├── Circuit Diagram/
│   └── Circuit Diagram.png
│
├── Code/
│   └── robo_code.ino
│
├── Images/
│   └── robot.jpg
│
└── README.md
```

---

## Applications

The DIY Welcoming Robot can be used for:

* College department entrances
* Engineering exhibitions
* Science fairs
* Robotics demonstrations
* Reception areas
* College events
* Interactive laboratory projects
* Robotics workshops
* Embedded systems demonstrations

---

## Learning Outcomes

This project provides hands-on experience with:

* Arduino programming
* PIR motion sensing
* Digital input and output
* Servo motor control
* LED control
* Serial communication
* DFPlayer Mini interfacing
* Audio playback
* Microcontroller-based automation
* Basic robotics
* Hardware and software integration

---

## Future Improvements

The project can be further improved by adding:

* Face recognition using ESP32-CAM
* Personalized visitor greetings
* OLED or LCD display
* Multiple greeting messages
* Bluetooth or Wi-Fi connectivity
* IoT-based visitor monitoring
* Voice recognition
* Additional servo motors for head and arm movement
* Rechargeable battery system
* Multi-language voice support
* Remote control through a mobile application

---

## Project Highlights

| Feature          | Implementation    |
| ---------------- | ----------------- |
| Controller       | Arduino UNO R3    |
| Motion Detection | PIR Motion Sensor |
| Hand Movement    | Servo Motor       |
| Visual Feedback  | Two LEDs          |
| Audio Playback   | DFPlayer Mini     |
| Audio Storage    | Micro SD Card     |
| Speaker          | 3W Speaker        |
| Programming      | Arduino IDE       |

---

## Project Gallery

### Robot

<p align="center">
  <img src="Images/robot.jpg" alt="Welcoming Robot" width="500">
</p>

### Block Diagram

<p align="center">
  <img src="Block%20Diagram/Block%20Diagram.png" alt="Block Diagram" width="750">
</p>

### Circuit Diagram

<p align="center">
  <img src="Circuit%20Diagram/Circuit%20Diagram.png" alt="Circuit Diagram" width="750">
</p>

---

## Why This Project?

The main goal of this project is to demonstrate how basic electronic components can be combined to create an interactive robotic system.

Instead of simply detecting motion, the robot responds to the visitor with **visual, mechanical and audio feedback**, making the system more engaging and suitable for real-world demonstrations.

---

## Author

**Shriya Pande**

Electronics and Telecommunication Engineering

---

## Acknowledgement

This project was developed as a hands-on robotics and embedded systems project to explore the integration of sensors, actuators, audio modules and Arduino programming.

---

## License

This project is created for **educational and learning purposes**.

You are welcome to explore, modify and build upon this project for educational purposes.

---

<p align="center">
  <b>Built with Arduino, electronics and a little bit of creativity.</b>
</p>

<p align="center">
  If you found this project interesting, consider giving the repository a ⭐
</p>
```
