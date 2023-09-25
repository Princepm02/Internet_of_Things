# Traffic Light Control for Car and Pedestrian

This Arduino program simulates a traffic light system for both cars and pedestrians. The traffic lights change based on the input from a push-button switch. When the switch is pressed, the traffic lights cycle through their phases, allowing cars and pedestrians to safely navigate the intersection.

## Hardware Requirements

To run this project, you'll need the following components:

- Arduino board (Arduino UNO)
- Individual LEDs for car and pedestrian lights
- Push-button switch
- Resistors (for current limiting, typically 220-330 ohms)
- Jumper wires
- Breadboard 

## Circuit Diagram

This circuit simulates a traffic light system for both cars and pedestrians. Below are two screenshots illustrating different states of the traffic lights.

### State 1: Car Green and Pedestrian Red

In this state, cars have the green light to proceed, while pedestrians have a red light indicating they should not cross the road.

![State 1 - Car Green and Pedestrian Red](https://github.com/Princepm02/Internet_of_Things/assets/91951172/25a2a661-ae08-43eb-88e5-f3ceda48291e)

### State 2: Car Red and Pedestrian Green

In this state, cars have a red light, instructing them to stop, while pedestrians are given a green light to safely cross the road.

![State 2 - Car Red and Pedestrian Green](https://github.com/Princepm02/Internet_of_Things/assets/91951172/96598490-02ad-49b5-8c7b-0155f55b43e7)

## How It Works

The program uses the following pins on the Arduino board:

- `pushButton` (connected to pin 2)
- Car traffic lights:
  - `carRed` (connected to pin 12)
  - `carYellow` (connected to pin 11)
  - `carGreen` (connected to pin 10)
- Pedestrian traffic lights:
  - `pedRed` (connected to pin 7)
  - `pedGreen` (connected to pin 6)

The `crossTime` variable sets the duration for which the pedestrian signal is green (in milliseconds).

In the `setup()` function:

- Serial communication is initiated at a baud rate of 9600 (for debugging purposes).
- Pin modes are set for input (pushButton) and output (all traffic light LEDs).
- Initially, the car's green light and the pedestrian's red light are turned on.

In the `loop()` function:

- The program continuously monitors the state of the push-button switch.
- When the button is pressed (HIGH) and the specified time (5 seconds) has passed since the last change of lights, the `changeLights()` function is called.

The `changeLights()` function:

- Sequentially changes the traffic lights to simulate the traffic light cycle:
  1. Car green -> Car yellow
  2. Car yellow -> Car red
  3. Car red -> Pedestrian green
  4. Pedestrian green blinks 10 times
  5. Pedestrian green -> Pedestrian red
  6. Car yellow -> Car green
- Updates the `changeTime` variable to mark the time of the last light change.

## Usage

1. Set up the circuit according to the provided circuit diagram or adapt it to your components.
2. Upload this Arduino sketch to your Arduino board using the Arduino IDE.
3. Open the Serial Monitor to view debugging information (optional).
4. Press the push-button switch to trigger the traffic light sequence.
5. Observe the traffic lights' behavior for both cars and pedestrians.

## Contributing

If you have any suggestions or improvements for this project, please feel free to open an issue or create a pull request.
