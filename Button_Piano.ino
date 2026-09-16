const int buzzer = 7;
const int buttonPins[5] = {8, 9, 10, 11, 12};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(buttonPins[i], INPUT);  // works with your VCC + 10k pulldown wiring
  }
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
}

void loop() {
  bool pressed = false;

  for (int i = 0; i < 5; i++) {
    if (digitalRead(buttonPins[i]) == HIGH) {  
      pressed = true;
      break;
    }
  }

  if (pressed) {
    digitalWrite(buzzer, HIGH);   // turn buzzer ON
  } else {
    digitalWrite(buzzer, LOW);    // turn buzzer OFF
  }
}