//wird in jedem Programm benötigt wie Loop
//wird nur einmal am start des Arduinos aufgerufen um z.b. die funktion der einzelnen Pins festzulegen
void setup() {
  Serial.begin(9600);
  led.begin();
  for (int i = 0; i < MAXLED; i++) {
    led.setPixelColor(i, led.Color(0, 0, 0));
  }
  led.show();
  pinMode(player_one, INPUT_PULLUP);
  pinMode(player_x_one, INPUT_PULLUP);
  pinMode(player_y_one, INPUT_PULLUP);
  pinMode(player_two, INPUT_PULLUP);
  pinMode(player_x_two, INPUT_PULLUP);
  pinMode(player_y_two, INPUT_PULLUP);
  pinMode(player_three, INPUT_PULLUP);
  pinMode(player_x_three, INPUT_PULLUP);
  pinMode(player_y_three, INPUT_PULLUP);
  pinMode(player_four, INPUT_PULLUP);
  pinMode(player_x_four, INPUT_PULLUP);
  pinMode(player_y_four, INPUT_PULLUP);
  pinMode(select_input, INPUT_PULLUP);
  randomSeed(analogRead(A15));
  led.setBrightness(brght);
}
