const int sensorPin = A0;
const int greenLED = 3;
const int yellowLED = 4;
const int redLED = 5;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int airQuality = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.println(airQuality);

  if (airQuality < 200) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
  } else if (airQuality < 400) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
  } else {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
  }

  delay(1000);
}
