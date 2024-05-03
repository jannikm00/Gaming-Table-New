#include <WiiChuck.h>

Accessory nunchuck1;
Accessory nunchuck2;


void setup() {
  Serial.begin(9600);

  nunchuck1.addMultiplexer(0x70,0);
  nunchuck2.addMultiplexer(0x70,4);

  nunchuck1.begin();
  nunchuck2.begin();

  if(nunchuck1.type == Unknown){
    nunchuck1.type = NUNCHUCK;
  }
  if(nunchuck2.type == Unknown){
    nunchuck2.type = NUNCHUCK;
  }
}

void loop() {
  nunchuck1.readData();
  nunchuck2.readData();

  Serial.println(nunchuck1.getJoyY());
  Serial.println("___________________");
  Serial.println(nunchuck2.getJoyY());
  Serial.println("************");
  delay(0);
}
