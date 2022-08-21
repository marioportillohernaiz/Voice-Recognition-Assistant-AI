byte com = 0;
#include <SD.h>                           //include SD module library
#include <TMRpcm.h>                       //include speaker control library
#define SD_ChipSelectPin 4                //define CS pin
TMRpcm tmrpcm;                            //crete an object for speaker library


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
  Serial.println("First phase done");
  
  tmrpcm.speakerPin = 9;                  //define speaker pin. 
  if (!SD.begin(SD_ChipSelectPin)) {      //see if the card is present and can be initialized, don't do anything more if not
    Serial.println("Not working");
    return;
  }     
  tmrpcm.setVolume(6); 
  tmrpcm.play("11.wav");
  Serial.println("Second phase done & READY TO SPEAK");
}


void loop() {
while(Serial.available()) {

com = Serial.read();
  if(com == 0x11) {
    Serial.println("Hello Marcus");
    delay(100);
    com == 0x00;
    tmrpcm.play("11.wav");
    }
  if(com == 0x12) {
    Serial.println("My name is OTTO");
    delay(100);
    com == 0x00;
    tmrpcm.play("12.wav");
    }
  if(com == 0x13) {
    Serial.println("Playing random song...");
    delay(100);
    com == 0x00;
    tmrpcm.play("13.wav");
    }
  if(com == 0x14) {
    Serial.println("Todays date is 29 June 2022");
    delay(100);
    com == 0x00;
    tmrpcm.play("14.wav");
    }
  if(com == 0x15) {
    Serial.println("Sorry I didnt understand, repeat again");
    delay(100);
    com == 0x00;
    tmrpcm.play("15.wav");
}}}
