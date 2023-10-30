//Il push button deve essere connesso con un resistore di pull down a massa
          

const int startButtonPin = 2;  // il pulsante è connesso al pin 2
const int ledPin = 12;    // Il led di rilevazione pressione collegato al pin 12

// per memorizzare lo stato del pulsante
int start = 0; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(startButtonPin, INPUT);
}

void loop() {
  
  //lo start viene tenuto a zero dalla resistenza di pull-down del pulsante
  while(!start)
  start = digitalRead(startButtonPin);

  // se viene premuto il pulsante start diventa "true" e quindi non ripeto mai più la lettura del piedino
    
    digitalWrite(ledPin, HIGH);
    delay(2000);
    digitalWrite(ledPin, LOW);
    delay(2000);
 
}
