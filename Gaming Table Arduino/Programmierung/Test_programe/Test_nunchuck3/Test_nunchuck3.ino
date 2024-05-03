#include <WiiChuck.h>

Accessory nunchuck1;
Accessory nunchuck2;
Accessory nunchuck3;
Accessory nunchuck4;


void setup() {
  Serial.begin(9600);

  nunchuck1.addMultiplexer(0x70,0);
  nunchuck2.addMultiplexer(0x70,1);
  nunchuck3.addMultiplexer(0x70,4);
  nunchuck4.addMultiplexer(0x70,5);

  nunchuck1.begin();
  nunchuck2.begin();
  nunchuck3.begin();
  nunchuck4.begin();

  if(nunchuck1.type == Unknown){
    nunchuck1.type = NUNCHUCK;
  }
  if(nunchuck1.type == Unknown){
    nunchuck2.type = NUNCHUCK;
  }
  if(nunchuck3.type == Unknown){
    nunchuck3.type = NUNCHUCK;
  }
  if(nunchuck4.type == Unknown){
    nunchuck4.type = NUNCHUCK;
  }
}

void loop() {
  nunchuck1.readData();
  nunchuck2.readData();
  nunchuck3.readData();
  nunchuck4.readData();
  Serial.println("Nunchuck1");
  Serial.println(nunchuck1.getJoyY());
  Serial.println("___________________");
  Serial.println("Nunchuck2");
  Serial.println(nunchuck2.getJoyY());
  Serial.println("*******************");
  Serial.println("Nunchuck3");
  Serial.println(nunchuck3.getJoyY());
  Serial.println("++++++++++++++++++*");
  Serial.println("Nunchuck4");
  Serial.println(nunchuck4.getJoyY());
  Serial.println("-------------------");
  delay(1000);
}
