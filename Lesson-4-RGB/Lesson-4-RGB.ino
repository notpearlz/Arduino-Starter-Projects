#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
  // put your setup code here, to run once:

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);

}


//Define values
int redValue;
int greenValue;
int blueValue;

void loop() {
  // put your main code here, to run repeatedly:

  #define delayTime 10

  redValue = 255;
  greenValue = 0;
  blueValue = 0;


  //Fade to green
  for(int i = 0; i < 255; i++){
    redValue -= 1;
    greenValue += 1;

    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  //Fade to blue
  for(int i = 0; i < 255; i++){
    greenValue -= 1;
    blueValue += 1;

    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

  //Fade to Red
  for(int i = 0; i < 255; i++){
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }
}
