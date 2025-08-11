int ledPin = 5;
int buttonOffPin = 8;
int buttonOnPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonOffPin, INPUT_PULLUP);
  pinMode(buttonOnPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

    if(digitalRead(buttonOnPin) == LOW ){
      digitalWrite(ledPin, HIGH);
    }

    if(digitalRead(buttonOffPin) == LOW){
        digitalWrite(ledPin, LOW);
    }
}
