//Pin variables
int ledPin = 8;
int buzzerPin = 9;
int tiltPin = 10;

void setup() {
  // put your setup code here, to run once:
  // Set up pins
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(tiltPin, INPUT_PULLUP);

  //Make sure LED and buzzer are turned off
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(tiltPin) == HIGH){
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
}
