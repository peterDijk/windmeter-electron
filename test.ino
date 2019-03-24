
const int windmeterPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(windmeterPin, INPUT);
}

void loop() {
  sensorValue = analogRead(windmeterPin);
  Serial.print(sensorValue);

  delay(2000);
}