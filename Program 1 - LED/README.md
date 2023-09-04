# LED Program

This Arduino UNO program controls four LEDs connected to digital pins 10, 11, 12, and 13. The LEDs will blink in sequence, creating a simple visual effect. This program can be used as a basic demonstration for IoT (Internet of Things) projects on the Arduino UNO platform.

## Prerequisites

Before you get started, make sure you have the following:

- Arduino UNO board
- Four LEDs (any color)
- Four 220-330 ohm resistors
- Breadboard and jumper wires
- Arduino IDE installed on your computer

## Hardware Setup

1. Connect each LED to a digital pin on the Arduino UNO as follows:
   - LED 1: Connect to digital pin 13
   - LED 2: Connect to digital pin 12
   - LED 3: Connect to digital pin 11
   - LED 4: Connect to digital pin 10

2. Connect a 220-330 ohm resistor to the longer (anode) leg of each LED. Connect the other end of each resistor to the ground (GND) pin on the Arduino.

3. Make sure your hardware connections match the program's pin assignments in the code.

<div align="center">
<!-- ![Setup](https://github.com/Princepm02/Internet_of_Things/assets/91951172/b9ed5b82-1739-4869-939c-0b0c3a95c378) -->
<img src="https://github.com/Princepm02/Internet_of_Things/assets/91951172/b9ed5b82-1739-4869-939c-0b0c3a95c378" alt="Setup" width="600" />
</div>


## Upload the Code

1. Open the Arduino IDE on your computer.

2. Copy the provided Arduino code (from this README) and paste it into a new Arduino sketch.

3. Connect your Arduino UNO to your computer via USB.

4. Select the correct board and port from the "Tools" menu in the Arduino IDE.

5. Click the "Upload" button to upload the code to your Arduino UNO.

## Running the Program

Once you've uploaded the code to your Arduino UNO, the program will run automatically. The LEDs connected to digital pins 10, 11, 12, and 13 will blink in sequence. Each LED will turn on for 300 milliseconds and then turn off for 300 milliseconds before the next LED starts.

## Customization

You can customize this program in various ways:

- Adjust the pin assignments in the code if you want to connect LEDs to different pins.
- Change the delay duration in the code to control the blinking speed of the LEDs.
- Modify the code to include additional LEDs or create different blinking patterns.

Feel free to adapt this program to your IoT project's specific requirements.

Happy tinkering!
