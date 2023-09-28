# LED Brightness (Fading) Control with Potentiometer

This Arduino Uno program demonstrates how to adjust the brightness (fading) of two LEDs using a potentiometer. It reads analog values from two potentiometers connected to analog pins A0 and A1, maps those values to control the brightness of four LEDs connected to digital pins 10, 9, 6, and 5. The LEDs will fade in and out based on the position of the potentiometers.

## Prerequisites

Before you begin, ensure you have the following hardware components:

- Arduino Uno board
- Two potentiometers
- Four LEDs
- Resistors (for LED current limiting)
- Breadboard and jumper wires

## Circuit Diagram

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/5da49af1-2c3f-437c-865e-a9e8d0db8075)

## Installation

1. Connect the components as shown in the circuit diagram:
   - Connect the center terminal of the first potentiometer to A0 on the Arduino.
   - Connect one of the outer terminals of the first potentiometer to 5V on the Arduino.
   - Connect the other outer terminal of the first potentiometer to GND on the Arduino.
   - Connect the center terminal of the second potentiometer to A1 on the Arduino.
   - Connect one of the outer terminals of the second potentiometer to 5V on the Arduino.
   - Connect the other outer terminal of the second potentiometer to GND on the Arduino.
   - Connect the anodes (longer leads) of the LEDs to digital pins 10 and 9 on the Arduino through current-limiting resistors.
   - Connect the cathodes (shorter leads) of the LEDs to GND on the Arduino.
   - Connect the anodes (longer leads) of the LEDs to digital pins 6 and 5 on the Arduino through current-limiting resistors.
   - Connect the cathodes (shorter leads) of the LEDs to GND on the Arduino.
   
2. Upload the "Brightness.ino" sketch to your Arduino Uno using the Arduino IDE.

3. Open the Serial Monitor at a baud rate of 9600 to see the sensor readings and LED output values.

## Usage

1. Turn the potentiometer connected to A0 to adjust the brightness of the LEDs connected to pins 10 and 9.

2. Turn the potentiometer connected to A1 to adjust the brightness of the LEDs connected to pins 6 and 5.

3. Observe the analog sensor values and LED output values displayed in the Serial Monitor.

