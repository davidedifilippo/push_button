

// constants won't change. They're used here to set pin numbers:
const int startButtonPin = 2;  // the number of the pushbutton pin
const int ledPin = 12;    // the number of the LED pin

// variables will change:
int start = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(startButtonPin, INPUT);
}

void loop() {
  
  
  while(!start)
  start = digitalRead(startButtonPin);

 
    
    digitalWrite(ledPin, HIGH);
    delay(2000);
    digitalWrite(ledPin, LOW);
    delay(2000);
 
}
