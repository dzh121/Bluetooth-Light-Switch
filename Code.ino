#include <SoftwareSerial.h>
SoftwareSerial MyBlue(8,10);

String message;
char character;
int lastButtonState = 0;

int buttonPin = 3;
int relayPin = 4;

void setup() {
  Serial.begin(9600);
  MyBlue.begin(9660);
  
  pinMode(buttonPin, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() { 
  while(MyBlue.available()){
    character = MyBlue.read();
    if(character == '#'){
      Serial.println(message);
     switch(message.toInt()){
      case 1:
        digitalWrite(relayPin,HIGH);
        break;
      case 0:
        digitalWrite(relayPin,LOW);
        break;
     }
     message = "";
     Serial.println();
    }else{
      Serial.println(character);
      message.concat(character);
    }
  }
  if (digitalRead(buttonPin) == HIGH) {
    if(lastButtonState == 0){
      lastButtonState = 1;
      Serial.println("on");
      digitalWrite(relayPin,HIGH);
    }else if (lastButtonState == 1){
      Serial.println("off");
      lastButtonState = 0;
      digitalWrite(relayPin,LOW);
    }
    delay(170);
  }
}
