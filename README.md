# Motor Control using Arduino and AFMotor Library

This README.md file provides information about a simple Arduino sketch for controlling two DC motors using the Adafruit Motor Shield (AFMotor) library. The sketch is designed to be used with a serial input to control the motors in various directions.

## Prerequisites

Before using this Arduino sketch, make sure you have the following:

1. Arduino board (e.g., Arduino Uno)
2. Adafruit Motor Shield (AFMotor Shield)
3. Two DC motors connected to the motor shield
4. Arduino IDE installed on your computer
5. AFMotor library installed in your Arduino IDE

## Installation

Follow these steps to use the provided sketch:

1. Open the Arduino IDE on your computer.
2. Create a new sketch or open an existing one.
3. Make sure you have the AFMotor library installed. If not, you can install it by going to "Sketch" > "Include Library" > "Manage Libraries..." and searching for "Adafruit Motor Shield."
4. Copy and paste the code from this README.md file into your Arduino sketch.
5. Connect your Arduino board to your computer via USB.
6. Select the correct Arduino board and port under the "Tools" menu.
7. Click the "Upload" button to upload the sketch to your Arduino board.

## Usage

1. After uploading the sketch to your Arduino, open the Arduino Serial Monitor (under "Tools" > "Serial Monitor").
2. Set the baud rate to 9600.
3. Enter one of the following commands to control the motors:
   - 'F' or 'f': Move both motors forward.
   - 'B' or 'b': Move both motors backward.
   - 'R' or 'r': Turn right by moving one motor forward and the other backward.
   - 'L' or 'l': Turn left by moving one motor forward and the other backward.

The serial monitor will display the received command and the corresponding motor action. The motors will continue to move until a new command is sent.

## Wiring

Make sure your DC motors are properly connected to the Adafruit Motor Shield. Refer to the motor shield documentation for wiring instructions.

## License

This project is open-source and available under the [MIT License](LICENSE). Feel free to modify and use it for your own applications.

## Acknowledgments

This sketch is based on the Adafruit Motor Shield library and is intended for educational purposes. Adafruit provides excellent resources and documentation for motor control with Arduino. You can find more information on their [website](https://learn.adafruit.com/adafruit-motor-shield).

Happy motor controlling! 🚗💨
