# Scrolling Message on LCD

This Arduino Uno project demonstrates how to create a scrolling message on an LCD screen. By using an Arduino Uno board and some basic electronic components, you can create a simple project that displays a scrolling message on a 16x2 character LCD screen.

## Components Used

- Arduino Uno board
- 16x2 LCD Screen
- 1 Potentiometer
- 1 Resistor
- Small Breadboard
- Jumper Wires

## Circuit Diagram

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/d3defac9-fa6b-4251-8775-2d0432b7f4b3)

In the circuit diagram, you'll notice the following connections:

- **Arduino Uno to LCD:**
  - `rs`, `en`, `d4`, `d5`, `d6`, and `d7` pins on the LCD are connected to corresponding digital pins on the Arduino Uno.

- **Potentiometer:**
  - The potentiometer is used to adjust the contrast of the LCD screen. Its terminals connect to the LCD's V0, GND, and VCC pins.

- **Resistor:**
  - The resistor can be used to limit current if needed in your specific setup.

- **Power Supply:**
  - Make sure to connect the 5V power supply of the Arduino Uno to the LCD's VCC and GND pins.

## Usage

1. Connect the components according to the circuit diagram.
2. Upload your Arduino sketch to your Arduino Uno board.
3. Watch as the scrolling message on the LCD screen demonstrates your project.

## Code Explanation

The Arduino sketch provided in this project accomplishes the scrolling message effect on the LCD. The code is relatively straightforward and involves the following elements:

- It initializes the LCD screen and prints the message "Welcome to IOT lab!" on it.
- The `loop` section of the code continuously scrolls the message to the left and right, creating the scrolling effect.

## Customization

You can customize this project in several ways:

- **Message**: Modify the message displayed on the LCD by changing the `lcd.print("Welcome to IOT lab!");` line in the `setup` function.

- **Scrolling Speed**: You can adjust the scrolling speed by changing the `delay` values within the `loop` section. A shorter delay will result in faster scrolling, while a longer delay will slow it down.

- **LCD Size**: If you are using an LCD of a different size (e.g., 20x4 or others), you may need to adjust the `lcd.begin()` function parameters in the `setup` function to match the correct dimensions.

Feel free to experiment and adapt the project to your specific needs and preferences.

---
Happy tinkering! If you have any questions or encounter issues, please feel free to open an issue or reach out for assistance.
