/*
 * Taken from c't Make: Arduino Special 2/2017, p. 16.
 */

void setup() {
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(6));
}

