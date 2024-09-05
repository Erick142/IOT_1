const int ledPin = 13;
const int ldrPin = A0; 

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT); 
}

void loop() {

  int ldrStatus = analogRead(ldrPin);

  if (ldrStatus > 990) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Se te ha quedado una luz prendida");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Todas las luces estan apagadas");
  }
  delay(200);
}