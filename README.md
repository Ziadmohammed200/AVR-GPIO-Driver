# AVR GPIO Library

This repository contains a simple **GPIO driver** for AVR microcontrollers (e.g., ATmega32).  
It provides easy-to-use functions to initialize, read, and write GPIO pins, along with an example `main.c`.

---

## Features

- Configure pins as **input** or **output**.
- Enable or disable **internal pull-up resistors**.
- Read pin state (**HIGH** or **LOW**).
- Write digital values to pins.
- Simple `typedef struct` based on AVR I/O registers.

---

## Files

- **GPIO.h / GPIO.c**  
  GPIO driver implementation.
- **main.c**  
  Example usage:  
  - Toggles an LED on **PORTA5** every time a button on **PORTD0** is pressed.  
  - Uses AVR's internal pull-up resistor for the button.

---

## Example Wiring

- **LED**:  
  - Anode → PORTA5  
  - Cathode → Resistor → GND
- **Push Button**:  
  - One pin → PORTD0  
  - Other pin → GND  
  - Pull-up enabled internally.

---

## Build & Run

1. Create a new AVR project (e.g., using **Atmel Studio** or **AVR-GCC**).
2. Add `GPIO.c`, `GPIO.h`, and `main.c` to your project.
3. Compile and upload to your AVR board (e.g., ATmega32).
4. Press the button to toggle the LED.

---

## Notes

- Debouncing is handled in software with a small delay.
- AVR microcontrollers do **not** support internal pull-down resistors, only pull-ups.

---

## License

MIT License – feel free to use and modify.
