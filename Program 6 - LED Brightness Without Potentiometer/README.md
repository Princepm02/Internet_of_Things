# LED Brightness Control without Potentiometer

This Arduino Uno project demonstrates how to control the brightness of an LED without using a potentiometer. It uses pulse-width modulation (PWM) to smoothly increase and decrease the LED's brightness.

## Prerequisites

Before you begin, make sure you have the following components and software installed:

- Arduino Uno board
- An LED
- Jumper wire
- A current-limiting resistor (usually around 220-330 ohms)
- Arduino IDE (Integrated Development Environment) installed on your computer
- USB cable to connect your Arduino board to your computer

## Circuit Diagram

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/d56627f8-aa7f-43b8-b2dc-03a9c83ae67f)

## Circuit Connection

Connect the components as follows:

1. Connect the long leg (anode) of the LED to digital pin 9 on the Arduino.

2. Connect the short leg (cathode) of the LED to the ground (GND) pin on the Arduino through the current-limiting resistor.

## Running the Program

1. Open the Arduino IDE on your computer.

2. Copy and paste the code from this repository into a new Arduino sketch.

3. Connect your Arduino Uno to your computer using a USB cable.

4. Select the correct board and port in the Arduino IDE (usually under the "Tools" menu).

5. Upload the sketch to your Arduino board by clicking the "Upload" button.

6. Open the Serial Monitor in the Arduino IDE to view the brightness values in real-time.

7. You should see the LED gradually increase and decrease in brightness in a smooth manner, with brightness values printed to the Serial Monitor.

## Customize the Code

You can customize this code to change the brightness increment, delay time, or use different pins by modifying the relevant variables in the `setup()` and `loop()` functions.

```arduino
int brt = 0; // Initial brightness value
int brightnessIncrement = 5; // Increment step for brightness
int delayTime = 1000; // Delay time in milliseconds

void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // ... (Rest of the code)
}
