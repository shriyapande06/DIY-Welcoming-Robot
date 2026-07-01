# DIY Welcoming Robot

![Robot](Images/robot.jpg)

A simple yet interactive **Arduino-based DIY Welcoming Robot** that automatically greets visitors upon detecting their presence. The robot uses a **PIR Motion Sensor** to detect movement, moves its hand using a **Servo Motor**, lights up its LED eyes, and plays a pre-recorded welcome message using a **DFPlayer Mini** module.

---

## Overview

The DIY Welcoming Robot is designed to provide an engaging way of welcoming visitors to laboratories, departments, exhibitions, or events. Once a person enters the sensing range of the PIR sensor, the robot performs a sequence of actions to create an interactive greeting experience.

This project demonstrates the practical implementation of Arduino with sensors, actuators, and audio modules, making it suitable for beginners and electronics enthusiasts.

---

## Features

- Automatic visitor detection using PIR Motion Sensor
- Hand movement using Servo Motor
- Dual LED eyes for visual interaction
- Voice greeting using DFPlayer Mini and Speaker
- MP3 audio playback from Micro SD Card
- Simple Arduino-based implementation
- Beginner-friendly project

---

## 🛠 Components Required

| Component | Quantity |
|-----------|---------:|
| Arduino UNO R3 | 1 |
| PIR Motion Sensor (HC-SR501) | 1 |
| DFPlayer Mini | 1 |
| 3W Speaker | 1 |
| Micro SD Card | 1 |
| Servo Motor | 1 |
| LEDs | 2 |
| Resistors (220Ω) | 2 |
| Jumper Wires | As Required |
| Power Adapter | 1 |

---

## Working Principle

1. The robot remains in standby mode.
2. The PIR Motion Sensor continuously monitors its surroundings.
3. When a person enters the sensing range, motion is detected.
4. Arduino processes the sensor signal.
5. The LED eyes illuminate.
6. The Servo Motor moves the robot's hand to greet the visitor.
7. DFPlayer Mini plays the pre-recorded welcome message:
   > **"Hey! Welcome to the Department of Electronics and Telecommunications."**
8. After completing the greeting sequence, the robot returns to standby mode and waits for the next visitor.

---

## Robot

![Robot](Images/robot.jpg)

---

## Circuit Diagram

Circuit Diagram is accesible here:

![Circuit Diagram](CircuitDiagram/Circuit_Diagram.png)

---

## Code

The Arduino source code is located in:

![Code](Code/robo_code.ino)

---

## Audio File

The welcome audio used by the DFPlayer Mini is located in:

![Audio](AudioTrack/robotvoice.mp3)

---

## Libraries Used

Install the following Arduino libraries before uploading the code:

- Servo.h
- SoftwareSerial.h
- DFRobotDFPlayerMini.h

---

## Getting Started

1. Clone this repository.

```
git clone https://github.com/your-username/DIY-Welcoming-Robot.git
```

2. Open `robo_code.ino` in the Arduino IDE.

3. Install the required libraries.

4. Copy the audio file to the Micro SD Card.

5. Upload the code to the Arduino UNO.

6. Connect the hardware.

7. Power the circuit using the adapter.

8. Enjoy your welcoming robot!

---

## Applications

- Department Entrance
- College Exhibitions
- Science Fair Demonstrations
- Reception Desk
- Smart Classroom
- Interactive Electronics Projects
- Robotics Workshops

---

## Future Improvements

Some possible future enhancements include:

- Face Recognition using ESP32-CAM
- IoT-based visitor monitoring
- Voice Assistant integration
- Multi-language greetings
- OLED/LCD display for personalized messages
- Bluetooth or Wi-Fi control
- Rechargeable battery backup
- More servo motors for head and arm movements
- Voice recognition for interactive conversations
- Personalized greetings based on visitor identification

---
## Contributing

Contributions, suggestions, and improvements are always welcome.

Feel free to fork this repository and submit a pull request.

---

## Author

**Shriya Pande**

Electronics and Telecommunication Engineering

---

### If you found this project useful, consider giving it a Star on GitHub!
