## OLED Stopwatch

## Overview

This project is a basic stopwatch implemented using an Arduino and an OLED display. It uses a push button to start and stop the timer, and the elapsed time is displayed on the OLED in minutes and seconds.

## Components Used

- **Arduino Uno/Nano/Pro Mini**
- **OLED Display (128x64)**
- **Push Button**
- **Breadboard**
- **Jumper Wires**

## Wiring Instructions

### OLED Display
- **VCC** -> 5V on Arduino
- **GND** -> GND on Arduino
- **SCL** -> A5 on Arduino Nano / Uno
- **SDA** -> A4 on Arduino Nano / Uno

### Push Button
- **One Pin** -> Pin 2 on Arduino (configured with internal pull-up resistor)
- **Other Pin** -> GND

## How It Works

- **Start/Stop Button**: The stopwatch is controlled by a single push button. Pressing the button starts the stopwatch, and pressing it again stops the stopwatch.
- **OLED Display**: The elapsed time is shown on a 128x64 OLED screen in the format `MM:SS` (minutes:seconds).
- **Debouncing**: A small delay is added to prevent button bounce issues.

## Setup Instructions

1. **Wiring**: Connect the OLED display and push button to the Arduino according to the wiring instructions.
2. **Install Libraries**: Install the `Adafruit_GFX` and `Adafruit_SSD1306` libraries using the Arduino IDE's Library Manager.
3. **Upload Code**: Upload the provided code to your Arduino board using the Arduino IDE.
4. **Test**: Power the Arduino and press the push button to start and stop the stopwatch.

## Features

- **Simple Stopwatch**: Measures and displays elapsed time in minutes and seconds.
- **OLED Display**: The OLED screen ensures the time is easily readable.
- **Button Control**: Start and stop the stopwatch with a single button press.

## Customization

- **Display Format**: You can modify the code to display milliseconds or adjust the format for hours.
- **Additional Buttons**: Add more buttons to reset the timer or control lap functions.
- **Buzzer Integration**: Add a buzzer for sound feedback when starting or stopping the timer.

## Applications

- **Time Tracking**: Useful for tracking time in various DIY projects or activities.
- **Exercise Timer**: Can be used as a simple exercise timer or for interval training.
- **Educational Projects**: A great beginner project for learning about timers and display interfaces with Arduino.

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute this project.
