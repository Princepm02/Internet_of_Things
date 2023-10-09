# Controlling Servo Motor with Potentiometer

This Arduino code demonstrates how to control a servo motor using a potentiometer. The servo motor's position is adjusted based on the analog reading from the potentiometer, allowing you to control the servo's angle manually.

## Prerequisites

Before you begin, make sure you have the following:

- An Arduino board (e.g., Arduino Uno)
- A servo motor
- A potentiometer
- Jumper wires
- Arduino IDE installed on your computer

## Circuit Connections

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/57648531-e96b-4533-b328-c269c6a783b3)

Connect the components as follows:

- Connect the servo motor's signal (blue wire) to digital pin 9 on the Arduino.
- Connect the servo motor's power (red wire) to the 5V output on the Arduino.
- Connect the servo motor's ground (black wire) to the ground (GND) on the Arduino.
- Connect one end of the potentiometer to 5V on the Arduino.
- Connect the other end of the potentiometer to GND on the Arduino.
- Connect the potentiometer's wiper (middle pin) to analog pin 0 (A0) on the Arduino.

## Usage

1. Open the Arduino IDE on your computer.
2. Copy and paste the provided code into a new Arduino sketch.
3. Make sure your Arduino board is selected under the "Tools" menu.
4. Upload the code to your Arduino board.
5. Once the code is uploaded successfully, open the Serial Monitor to see the servo motor's position values.
6. Turn the potentiometer knob, and you should observe the servo motor moving in response to the potentiometer's position.

## Code Explanation

- The `Servo` library is used to control the servo motor.
- An instance of the `Servo` class, named `myservo`, is created.
- The potentiometer's input is read from analog pin 0 (A0).
- The analog reading is mapped to a range from 0 to 180 degrees (the typical range for servo motors).
- The `myservo.write(output)` function is used to set the servo motor's angle.
- A delay of 100 milliseconds is added between servo motor position updates to prevent rapid and jittery movements.

## Customization

- You can adjust the servo motor's control pin by changing the `myservo.attach(9)` line to use a different digital pin (3, 5, 6, 9, 10, or 11).
- Modify the `delay(100)` value to change the delay between servo position updates, controlling the servo's speed.

---
Feel free to reach out with any questions or issues related to this code. Happy experimenting!
