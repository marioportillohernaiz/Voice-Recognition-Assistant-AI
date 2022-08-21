//#include <VoiceRecognitionV3.h>

byte com = 0;

void setup() {
  Serial.println("Start Up"); 
  Serial.begin(9600);
  delay(2000);
  Serial.write(0xAA);
  Serial.write(0x00);
  delay(1000);
  Serial.write(0xAA);
  Serial.write(0x37);
  delay(1000);
  Serial.write(0xAA);
  Serial.write(0x00);
  delay(1000);
  Serial.write(0xAA);
  Serial.write(0x21);
  
  Serial.println("Last phase done & READY TO SPEAK");

}

void loop() {

while(Serial.available()) {

com = Serial.read();
  if(com == 0x11) {
    Serial.println("Yes Mario?");
    delay(100);
    com == 0x00;
    }
  if(com == 0x12) {
    Serial.println("My name is OTTO and I was built by Mario Portillo during the 2020 Pandemic.");
    delay(100);
    com == 0x00;
    }
  if(com == 0x13) {
    Serial.println("You've got 3 tasks to complete: x. y. z.");
    delay(100);
    com == 0x00;
    }
  if(com == 0x14) {
    Serial.println("The time is for you to buy a watch");
    delay(100);
    com == 0x00;
    }
  if(com == 0x15) {
    Serial.println("5");
    delay(100);
    com == 0x00;
    }


    //switch(com) {
      //case 0x21:
        //Serial.println("Yes Mario?");
      //break;
      //case 0x22:
        //Serial.println("My name is OTTO and I was built by Mario Portillo during the 2020 Pandemic."); 
      //break; 
      //case 0x23:
        //Serial.println("You've got 3 tasks to complete: x. y. z.");
      //break;
      //case 0x24:
        //Serial.println("The time is for you to buy a watch");
      //break;
      //case 0x25:
        //Serial.println("Sorry for the rudeness.");
      //break;                
}}
