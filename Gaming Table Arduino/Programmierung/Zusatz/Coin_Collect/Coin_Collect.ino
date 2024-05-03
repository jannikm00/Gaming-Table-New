//COIN COLLECT FUNKTIONEN//
void coin() {
  if (countcoin_ran == dotnew) {  //add coin an einer zufälligen Position
    ran = (1 + rand() % 2304);
    led.setPixelColor(ran, led.Color(255, 255, 0));
    countcoin_ran = 0;
  }
  if (countcoin_ran2 == dotnew) {  //add coin an einer zufälligen Position
    ran2 = (1 + rand() % 2304);
    led.setPixelColor(ran2, led.Color(255, 255, 0));
    countcoin_ran2 = 0;
  }
  //player 1 check coin
  if (101 + n1 == ran || 100 + n1 == ran || 149 + n1 == ran || 148 + n1 == ran) {
    score1++;
    countcoin_ran = dotnew;
  } else if (101 + n1 == ran2 || 100 + n1 == ran2 || 149 + n1 == ran2 || 148 + n1 == ran2) {
    score1++;
    countcoin_ran2 = dotnew;
  }
  //player 2 check coin
  if (139 + n2 == ran || 138 + n2 == ran || 187 + n2 == ran || 186 + n2 == ran) {
    score2++;
    countcoin_ran = dotnew;
  } else if (139 + n2 == ran2 || 138 + n2 == ran2 || 187 + n2 == ran2 || 186 + n2 == ran2) {
    score2++;
    countcoin_ran2 = dotnew;
  }
  //player 3 check coin
  if (156 + n3 == ran || 155 + n3 == ran || 108 + n3 == ran || 107 + n3 == ran) {
    score3++;
    countcoin_ran = dotnew;
  } else if (156 + n3 == ran2 || 155 + n3 == ran2 || 108 + n3 == ran2 || 107 + n3 == ran2) {
    score3++;
    countcoin_ran2 = dotnew;
  }
  //player 4 check coin
  if (180 + n4 == ran || 179 + n4 == ran || 132 + n4 == ran || 131 + n4 == ran) {
    score4++;
    countcoin_ran = dotnew;
  } else if (180 + n4 == ran2 || 179 + n4 == ran2 || 132 + n4 == ran2 || 131 + n4 == ran2) {
    score4++;
    countcoin_ran2 = dotnew;
  }
  led_update();
}
void led_update() {
  for (int i = 0; i < MAXLED; i++) {
    led.setPixelColor(i, led.Color(0, 0, 0));
  }
  //draw coin 1 und 2
  led.setPixelColor(ran, led.Color(255, 255, 0));
  led.setPixelColor(ran2, led.Color(255, 255, 0));
  //draw player 1
  for (int i = 100; i < 151; i++) {
    if (i == 100 || i == 101 || i == 149 || i == 148) {
      led.setPixelColor(i + n1, led.Color(255, 0, 0));
    }
  }
  //draw player 2
  for (int i = 137; i < 189; i++) {
    if (i == 138 || i == 139 || i == 187 || i == 186) {
      led.setPixelColor(i + n2, led.Color(0, 255, 0));
    }
  }
  //draw player 3
  for (int i = 106; i < 158; i++) {
    if (i == 156 || i == 155 || i == 107 || i == 108) {
      led.setPixelColor(i + n3, led.Color(0, 0, 255));
    }
  }
  //draw player 4
  for (int i = 130; i < 182; i++) {
    if (i == 131 || i == 132 || i == 180 || i == 179) {
      led.setPixelColor(i + n4, led.Color(255, 255, 255));
    }
  }
  led.show();
}
void check_pos() {
  //PLAYER 1 Position

  if (analogRead(player_x_one) < 300)  //player 1 right
  {
    n1 = n1 - 1;
    standby_Timer = 0;
  }
  if (analogRead(player_x_one) > 950)  //player 1 left
  {
    n1 = n1 + 1;
  }
  if (analogRead(player_y_one) < 300)  //player 1 up
  {
    n1 = n1 + 48;
    if (n1 > MAXLED) {
      n1 -= MAXLED;
    }
  }
  if (analogRead(player_y_one) > 950)  //player 1 down
  {
    n1 = n1 - 48;
    if (n1 < -96) {
      n1 += MAXLED;
    }
  }
  //PLAYER 2 Position

  if (analogRead(player_x_two) < 300)  //player 2 right
  {
    n2 = n2 - 1;
    standby_Timer = 0;
  }
  if (analogRead(player_x_two) > 950)  //player 2 left
  {
    n2 = n2 + 1;
  }
  if (analogRead(player_y_two) < 300)  //player 2 up
  {
    n2 = n2 + 48;
    if (n2 > MAXLED) {
      n2 -= MAXLED;
    }
  }
  if (analogRead(player_y_two) > 950)  //player 2 down
  {
    n2 = n2 - 48;
    if (n2 < -96) {
      n2 += MAXLED;
    }
  }
  //PLAYER 3 Position

  if (analogRead(player_x_three) < 300)  //player 3 right
  {
    n3 = n3 - 1;
    standby_Timer = 0;
  }
  if (analogRead(player_x_three) > 950)  //player 3 left
  {
    n3 = n3 + 1;
  }
  if (analogRead(player_y_three) < 300)  //player 3 up
  {
    n3 = n3 + 48;
    if (n3 > MAXLED) {
      n3 -= MAXLED;
    }
  }
  if (analogRead(player_y_three) > 950)  //player 3 down
  {
    n3 = n3 - 48;
    if (n3 < -96) {
      n3 += MAXLED;
    }
  }
  //PLAYER 4 Position

  if (analogRead(player_x_four) < 300)  //player 4 right
  {
    n4 = n4 - 1;
    standby_Timer = 0;
  }
  if (analogRead(player_x_four) > 950)  //player 4 left
  {
    n4 = n4 + 1;
  }
  if (analogRead(player_y_four) < 300)  //player 4 up
  {
    n4 = n4 + 48;
    if (n4 > MAXLED) {
      n4 -= MAXLED;
    }
  }
  if (analogRead(player_y_four) > 950)  //player 4 down
  {
    n4 = n4 - 48;
    if (n4 < -96) {
      n4 += MAXLED;
    }
  }
}
void check_win_coin_collect() {
  //player1 win screen
  if (score1 >= 7) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(255, 0, 0));
    }
    led.show();
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    score1 = 0;
    score2 = 0;
    score3 = 0;
    score4 = 0;
    delay(1000);
  }
  //player2 win screen
  if (score2 >= 7) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 255, 0));
    }
    led.show();
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    score1 = 0;
    score2 = 0;
    score3 = 0;
    score4 = 0;
    delay(1000);
  }
  //player3 win screen
  if (score3 >= 7) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 255));
    }
    led.show();
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    score1 = 0;
    score2 = 0;
    score3 = 0;
    score4 = 0;
    delay(1000);
  }
  //player4 win screen
  if (score4 >= 7) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(150, 150, 150));
    }
    led.show();
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    score1 = 0;
    score2 = 0;
    score3 = 0;
    score4 = 0;
    delay(1000);
  }
}
//Main funktion die im Loop aufgerufen wird und alle benötigten funktionen abläuft
void game_COIN_COLLECT() {
  if (select == 3) {
    coin();
    check_pos();
    check_win_coin_collect();
    easter_counter = 0;
  }
}
