// Pin connected to the LED
const int onBoardLED = 13;

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);

  //Setup the LED as an Output
  pinMode(onBoardLED, OUTPUT);

  //Prompt User for input
  Serial.println("Type 'On' to turn the LED on or 'OFF' to turn it off:");
}

void loop() {
    // Check if data is available to read from serial port 
    if (Serial.available() > 0) {
    //Read incoming data 
    String command = Serial.readStringUntil('\n');
    
    // converting command to upper case for case insensitivity
    command.toUpperCase();

    // Check if the command is "ON"
    if (command.equals("ON")) {
      digitalWrite(onBoardLED, HIGH);
      Serial.println("LED is now ON");
    }
    // Check if command is "OFF"
    else if (command.equals("OFF")) {
      digitalWrite(onBoardLED, LOW); //Turn the LED "OFF"
      Serial.println("LED is now OFF");
    }
    // If the command is neither "On" or "OFF", prints an error message
    else {
      Serial.println("Invalid command. Type 'ON' to turn the LED on or 'OFF' to turn it off:");      
    }
  }
}

