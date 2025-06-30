const int button1Pin = 2;   
const int button2Pin = 3;   
const int ledPin = 13;      

bool ledState = false;           
bool lastButton1State = LOW;     
bool lastButton2State = LOW;      

void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool currentButton1State = digitalRead(button1Pin);
  bool currentButton2State = digitalRead(button2Pin);

 
  if (currentButton1State == HIGH && lastButton1State == LOW) {
    ledState = !ledState;  
    digitalWrite(ledPin, ledState ? HIGH : LOW);
    delay(200); 
  }

 
  if (currentButton2State == HIGH && lastButton2State == LOW) {
    ledState = !ledState;  
    digitalWrite(ledPin, ledState ? HIGH : LOW);
    delay(200); 
  }

  
  lastButton1State = currentButton1State;
  lastButton2State = currentButton2State;
}