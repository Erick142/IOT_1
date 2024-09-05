import processing.serial.*;

Serial myPort;
String val;

void setup() {
  size(400, 400);
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
  background(255); 
}

void draw() {
  if (myPort.available() > 0) {
    val = myPort.readStringUntil('\n');
    val = trim(val);
  }

  if (val != null) {
    println(val);

    if (val.equals("Se te ha quedado una luz prendida")) {
      background(255, 0, 0);
    } else {
      background(0, 255, 0);
    }
  }
}
