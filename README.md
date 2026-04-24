# Smart Blind Walking Stick

An Arduino-based assistive IoT project designed to help visually impaired users detect nearby obstacles using an HC-SR04 ultrasonic sensor, buzzer, and LED alerts.

## Overview
Traditional walking sticks detect obstacles only after contact. This project improves safety by providing early warning alerts before impact, helping users move more confidently and independently.

## Features
- Obstacle detection using HC-SR04 ultrasonic sensor.
- Fast alerts for very close obstacles.
- Slow alerts for nearby obstacles.
- LED and buzzer-based feedback.
- Low-cost and portable assistive solution.
- Battery-powered standalone operation.
- Tested in simulation and on hardware.

## Tech Stack
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Piezo Buzzer
- LED
- Arduino IDE
- Embedded C / Arduino Language
- Tinkercad Circuit Simulator

## Working
- The sensor continuously measures the distance ahead.
- If an object is within 20 cm, the system generates fast alerts.
- If an object is between 20 cm and 50 cm, the system generates slower alerts.
- If the path is clear, no alert is produced.

## Hardware Connections
- HC-SR04 VCC → 5V
- HC-SR04 GND → GND
- HC-SR04 TRIG → Pin 9
- HC-SR04 ECHO → Pin 10
- Buzzer + → Pin 7
- Buzzer - → GND
- LED + → Pin 7 through 220Ω resistor
- LED - → GND

## Project Structure
```bash
smart-blind-walking-stick/
├── README.md
├── code.ino
├── circuit-diagram.png
├── images/
│   ├── top-view.jpg
│   └── front-view.jpg
└── demo/
    └── video-link.txt
```

## Results
The prototype successfully detected nearby obstacles and triggered alerts based on distance. It worked in both simulation and hardware testing, showing reliable and low-cost assistive functionality.

## Future Improvements
- Add vibration motor feedback.
- Integrate GPS for location awareness.
- Add voice guidance.
- Add Bluetooth connectivity for mobile alerts.
- Improve enclosure and weather resistance.

## Demo
- Top view photo: `images/top-view.jpg`
- Front view photo: `images/front-view.jpg`
- Video demo: add link here when ready

## Author
Taranjeet Singh  
+91-9878770515
taran.pvt@gmail.com
