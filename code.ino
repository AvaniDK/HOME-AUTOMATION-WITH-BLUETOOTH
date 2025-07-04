char receivedChar;

void setup() {
  Serial.begin(9600); // Start serial communication
  // Set pin modes
  pinMode(2, OUTPUT); // Example for A
  pinMode(3, OUTPUT); // Example for B
}

void loop() {
  if (Serial.available()) {
    receivedChar = Serial.read();

    if (receivedChar == 'A') {
      digitalWrite(2, HIGH);
      Serial.println("A received: Turning ON device at pin 2");
    } else if (receivedChar == 'a') {
      digitalWrite(2, LOW);
      Serial.println("a received: Turning OFF device at pin 2");
    } else if (receivedChar == 'B') {
      digitalWrite(3, HIGH);
      Serial.println("B received: Turning ON device at pin 3");
    } else if (receivedChar == 'b') {
      digitalWrite(3, LOW);
      Serial.println("b received: Turning OFF device at pin 3");
    } else {
      Serial.print("Unknown input: ");
      Serial.println(receivedChar);
    }
  }
}
