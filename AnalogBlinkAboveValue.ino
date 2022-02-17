
// the setup routine runs once when you press reset:
const int ledPin =  3;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability 
  if (sensorValue > 500){
  digitalWrite(ledPin, HIGH);// turn the LED on (HIGH is the voltage level)
  }
  else {
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  }
 }
