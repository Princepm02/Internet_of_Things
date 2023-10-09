# Controlling Servo Motor Without Potentiometer

This Arduino code demonstrates how to control a servo motor without using a potentiometer. The servo motor continuously sweeps back and forth in a 180-degree range, providing a simple example of servo motor control.

## Prerequisites

Before you begin, make sure you have the following:

- An Arduino board (e.g., Arduino Uno)
- A servo motor
- Jumper wires
- Arduino IDE installed on your computer

## Circuit Connections

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/2278e362-c9d8-4989-b71c-fab7bdae950a)

Connect the components as follows:

- Connect the servo motor's signal (blue wire) to digital pin 9 on the Arduino.
- Connect the servo motor's power (red wire) to the 5V output on the Arduino.
- Connect the servo motor's ground (black wire) to the ground (GND) on the Arduino.

## Usage

1. Open the Arduino IDE on your computer.
2. Copy and paste the provided code into a new Arduino sketch.
3. Make sure your Arduino board is selected under the "Tools" menu.
4. Upload the code to your Arduino board.
5. Once the code is uploaded successfully, the servo motor will start sweeping back and forth in a 180-degree range.
6. You can adjust the sweep range and speed by modifying the `delay` values and the `for` loop conditions in the code.

## Code Explanation

- The `Servo` library is used to control the servo motor.
- An instance of the `Servo` class, named `myservo`, is created.
- The servo motor is attached to digital pin 9 on the Arduino.
- The servo motor sweeps from 0 to 180 degrees and then back from 180 to 0 degrees repeatedly, with a short delay between each step. This creates a continuous back-and-forth motion.

## Customization

- You can adjust the sweep range by modifying the `for` loop conditions. For example, to sweep over a smaller range, change `pos<180` to `pos<90` for a 90-degree sweep.
- Modify the `delay` values to change the speed of the servo motor's sweep. Lower values result in faster sweeps, while higher values result in slower sweeps.

---

Feel free to reach out with any questions or issues related to this code. Enjoy experimenting with servo motor control!
