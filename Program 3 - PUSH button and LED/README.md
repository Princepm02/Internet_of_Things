# LED Control with Push Button

This simple Arduino program allows you to control the ON and OFF functionality of an LED using a push button with an Arduino UNO board. When the button is pressed, the LED turns on, and when it is pressed again, the LED turns off. This cycle continues each time the button is pressed.

## Circuit


To get started, you'll need the following components:

- Arduino UNO board
- LED (connected to pin 8)
- Push button (connected to pin 7)

Here's a screenshot of the circuit setup in Tinkercad:

![Circuit Screenshot](https://github.com/Princepm02/Internet_of_Things/assets/91951172/7e4920ab-c070-421a-8a81-310fa0e9fa3b)

## How It Works

The program initializes two constants: `LED` (connected to pin 8) and `BUTTON` (connected to pin 7). It also initializes an integer variable `bState` to keep track of the button state.

In the `setup()` function:
- `pinMode(BUTTON, INPUT)` configures the button pin as an input.
- `pinMode(LED, OUTPUT)` configures the LED pin as an output.

In the `loop()` function:
- `digitalRead(BUTTON)` checks the state of the button. If the button is pressed (its state is HIGH), the LED is turned on.
- The `bState` variable is incremented by 1.
- If `bState` is even (i.e., divisible by 2), the LED is turned off, and `bState` is reset to 0.
- A small delay of 100 milliseconds is added to debounce the button and prevent multiple toggles when the button is held down.

This process allows the LED to be toggled on and off each time the button is pressed.

## Usage

1. Connect the LED's anode (longer lead) to pin 8 on the Arduino UNO and the cathode (shorter lead) to the ground (GND) pin through a current-limiting resistor (usually around 220-330 ohms).
2. Connect one terminal of the push button to pin 7 on the Arduino UNO and the other terminal to the ground (GND) pin.
3. Upload this Arduino sketch to your Arduino UNO board using the Arduino IDE.
4. Open the Serial Monitor to see the program in action.
5. Press the push button to toggle the LED on and off.

## Contributing

If you have any suggestions or improvements, please feel free to open an issue or create a pull request.
