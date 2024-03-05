# BlinkLED_2.0
 This is the revised and edited version of the Blink LED program that prompts a user for input then switches the Arduino ON or OFF. 

## IN SETUP FUNCTION
The serial communication is initialized at a baud rate of 9600. The LED pin is configured as an output, and a prompt is sent to the user via the serial monitor.

### IN LOOP FUNCTION 
The code checks if there is data available to read from the serial port. If there is, it reads the incoming data until it encounters a newline character("\n"). The received command is then converted to uppercase to make the comparison case-insensitive. 
If the command is "ON", it turns the LED on by setting the pin high. If it's "OFF", it turns the LED off by setting the pin low. If the command is neither "ON" nor "OFF", it prints an error message prompting the user to enter a valid command.
The loop continues to listen for user input and perform the corresponding actions indefinitely.
