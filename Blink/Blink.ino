/*
 * My first Arduino program, taken from c't Make: Arduino Special 2/2017:
 * Makes a LED blink.
 */

void setup() {
  // initialize digital pin 13 as an output
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // turn LED on
  delay(100);
  digitalWrite(13, LOW); // turn LED off
  delay(800);
}

