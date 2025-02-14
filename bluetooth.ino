int const RX_PIN = 3; //receiving bluetooth
int const TX_PIN = 4; //transmitting bluetooth

#include <SoftwareSerial.h> //include library

SoftwareSerial tooth(TX_PIN, RX_PIN); //create a softwareserial object, set tx and rx pins, tx goes first then rx

char a ; //an empty character to store 


void setup() {

  Serial.begin(9600); // means can print on serial monitor
  tooth.begin(9600); //can print on device


}

void loop() {
  if (tooth.available()>0){ //if something is inputed on device
  a = tooth.read();
  tooth.print("reading new input: ");
  tooth.println(a);
  }

  if (a == 'd'){
    Serial.println("a has value!");
    
  }
delay(100);
}
