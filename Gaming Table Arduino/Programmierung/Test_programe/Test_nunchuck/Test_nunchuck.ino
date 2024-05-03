#include <WiiChuck.h>

//https://www.makerblog.at/2016/01/wii-nunchuk-controller-am-arduino-teil-1/
//https://www.reichelt.de/de/de/arduino-wiichuck-nunchuck-adapter-ard-wii-nunchuck-p282673.html?r=1
//https://github.com/timtro/wiinunchuck-h/blob/master/wiinunchuck.h#L201

Accessory nunchuck1;


void setup() {
	Serial.begin(9600);
	nunchuck1.addMultiplexer(0x70, 0); //Nicht nötig für dieses Program
	nunchuck1.begin();
	if (nunchuck1.type == Unknown) {
		nunchuck1.type = NUNCHUCK;
	}
}

void loop() {
  char buffer [100];
  nunchuck1.readData();
  int x = nunchuck1.getJoyX();
  int y = nunchuck1.getJoyY();
  int c = nunchuck1.getButtonC();
  int z = nunchuck1.getButtonZ();
  int ra = nunchuck1.getRollAngle();
  int pa = nunchuck1.getPitchAngle();
  int ay = nunchuck1.getAccelY();
  int ax = nunchuck1.getAccelX();
  sprintf(buffer, "X: %3d "  "Y: %3d " "C: %3d " "Z: %3d " "RA: %3d " "PA: %3d " "AY: %3d " "AX: %3d ",x,y,c,z,ra,pa,ay,ax); 
 /* Serial.println(x);
  Serial.println(y);
  Serial.println(c);
  Serial.println(z);
  Serial.println(ra);
  Serial.println(pa);
  Serial.println(ay);
  Serial.println(ax);*/
  Serial.println(buffer);
  delay(0);
}