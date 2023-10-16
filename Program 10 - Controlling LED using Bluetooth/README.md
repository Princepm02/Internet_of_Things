# Bluetooth LED Control

This Arduino program allows you to control an LED connected to pin 13 of the Arduino using a Bluetooth module. You can control the LED remotely through a mobile app. An Android app named "LED.apk" is provided in this directory for controlling the LED.

## Components Used

- Arduino Uno board
- Bluetooth module (HC-05, HC-06, etc.)
- LED
- 220-ohm resistor
- Jumper Wires

## Installation

1. Upload the provided Arduino sketch to your Arduino Uno board.
2. Connect your Bluetooth module to the Arduino as per the module's datasheet.
3. Power up the Arduino.

## Mobile App

To control the LED using your smartphone, follow these steps:

1. Download the "LED.apk" Android app.

2. If you encounter issues downloading the app from GitHub, you can also download it from this Google Drive link: [LED.apk](https://drive.google.com/file/d/15cmB3DTVUp2sgsGstZ8bYTuSu4KDmzDt/view?usp=drive_link).

3. Install the app on your Android device.

4. Pair your Android device with the Bluetooth module on the Arduino.

5. Open the app, connect to the Bluetooth module, and use the app's interface to turn the LED on or off.

## Usage

1. After pairing your device with the Bluetooth module, you can control the LED through the mobile app.

2. Press the "ON" button in the app to turn the LED on.

3. Press the "OFF" button in the app to turn the LED off.

## Code Explanation

The Arduino sketch included in this project performs the following functions:

- It sets up the serial communication with the Bluetooth module.

- The `setup` function configures pin 13 as an output pin, which is connected to the LED.

- The `loop` function constantly checks for incoming data from the Bluetooth module.

- When "1" is received, it turns the LED on.

- When "0" is received, it turns the LED off.

## Customization

You can customize this project in several ways:

- Change the pin number to which the LED is connected by modifying the `pinMode` and `digitalWrite` commands in the Arduino sketch.

- Modify the Android app to have a different interface or additional features based on your requirements.


If you encounter any issues or have questions, please open an issue or contact us for assistance.
