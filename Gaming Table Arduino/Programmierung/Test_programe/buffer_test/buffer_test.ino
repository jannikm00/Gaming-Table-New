int a = 1110;
int b = 2;
char z = "C";

void setup() {
  Serial.begin(9600);
}

void loop() {
  char buffer[100];
  sprintf(buffer, "%4d %d %s",a,b,z);
  Serial.println(buffer);
  delay(1000);
}
