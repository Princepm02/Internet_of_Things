# Arduino Uno LED Control

This is a simple Arduino Uno program that controls a set of LEDs connected to pins 8, 9, 10, 11, 12, and 13. The LEDs are turned on and off in an alternating pattern, creating a visual effect. There are two different approaches provided in the code, and you can choose the one that suits your requirements.

## Table of Contents

- [Overview](#overview)
- [Setup](#setup)
- [Usage](#usage)
- [Customization](#customization)
- [Code Explanation](#code-explanation)

## Overview

The program controls a set of LEDs connected to the Arduino Uno using pins 8 to 13. It alternates turning on and off the LEDs based on the selected approach.

## Setup

1. **Hardware Setup:** Connect the LEDs to pins 8, 9, 10, 11, 12, and 13 on your Arduino Uno. Ensure that you connect the anodes (longer leads) of the LEDs to these pins and the cathodes (shorter leads) to the ground (GND) pin on the Arduino.

![Arduino Uno LED Wiring](https://github.com/Princepm02/Internet_of_Things/assets/91951172/3bd913b0-40a7-4c8b-94ce-fc714d387d3a)

2. **Software Setup:**

   - Install the [Arduino IDE](https://www.arduino.cc/en/software) if you haven't already.
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the code from this repository into your sketch.

3. **Upload the Code:** Connect your Arduino Uno to your computer via USB, select the appropriate board and port in the Arduino IDE, and click the "Upload" button to upload the code to your Arduino Uno.

## Usage

After uploading the code to your Arduino Uno, the LEDs will start alternating between on and off states based on the selected approach. There are two approaches provided in the code, and you can choose the one you prefer by commenting or uncommenting the relevant sections.

## Customization

You can customize this program in various ways to suit your needs:

- **Change LED Pins:** Modify the `ledPins` array in the code to use different pins for your LEDs.
- **Adjust Timing:** Modify the `delayTime` variable to control the speed of the LED alternation.
- **Add More LEDs:** Extend the program to control additional LEDs by adding them to the `ledPins` array and adjusting the code accordingly.

Feel free to experiment and adapt the code to create your own LED patterns and effects.

## Code Explanation

### Approach 1: TurnOnEvenOdd()

This approach uses a function called `TurnOnEvenOdd()` to turn on and off LEDs in an alternating pattern. The `lightModulo` variable determines which LEDs are turned on.

### Approach 2: AlternateApproach()

This is another approach for achieving the same LED alternating effect. It uses a loop to alternate between turning on and off the LEDs.

Please note that you can choose either approach by commenting/uncommenting the relevant sections of code.

---
Happy tinkering!
