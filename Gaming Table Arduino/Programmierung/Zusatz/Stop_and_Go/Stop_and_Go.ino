//sorgt für die Bewegung der Spieler und überprüft ob diese sich  im Ziel befinden
void stop_and_go_player() {
  //Für die Bewegung
  if (analogRead(player_y_one) <= 150 && move_speed == 0) {
    if (!red) {
      move_squid_p1 += 48;
    }
    check_for_move1 += 48;
  }
  //
  //Überprüft ob die komplette Spielfigur im Ziel ist
  if (!failure_p1) {
    for (int i = 9; i < 109; i++) {
      if (i == 10 || i == 11 || i == 12 || i == 13 || i == 14 || i == 59 || i == 60 || i == 61 || i == 108) {
        led.setPixelColor(i + move_squid_p1, led.Color(255, 0, 0));
      }
      if ((i + move_squid_p1) >= 1884) {
        win_p1 = true;
      }
    }
  }
  //
  if (analogRead(player_y_two) <= 150 && move_speed == 0) {
    if (!red) {
      move_squid_p2 += 48;
    }
    check_for_move2 += 48;
  }
  if (!failure_p2) {
    for (int i = 19; i < 117; i++) {
      if (i == 20 || i == 67 || i == 69 || i == 116) {
        led.setPixelColor(i + move_squid_p2, led.Color(0, 255, 0));
      }
      if ((i + move_squid_p2) >= 1892) {
        win_p2 = true;
      }
    }
  }
  if (analogRead(player_y_three) <= 150 && move_speed == 0) {
    if (!red) {
      move_squid_p3 += 48;
    }
    check_for_move3 += 48;
  }
  if (!failure_p3) {
    for (int i = 27; i < 126; i++) {
      if (i == 28 || i == 74 || i == 76 || i == 78 || i == 123 || i == 124 || i == 125) {
        led.setPixelColor(i + move_squid_p3, led.Color(0, 0, 255));
      }
      if ((i + move_squid_p3) >= 1900) {
        win_p3 = true;
      }
    }
  }
  if (analogRead(player_y_four) <= 150 && move_speed == 0) {
    if (!red) {
      move_squid_p4 += 48;
    }
    check_for_move4 += 48;
  }
  if (!failure_p4) {
    for (int i = 34; i < 134; i++) {
      if (i == 35 || i == 37 || i == 84 || i == 131 || i == 133) {
        led.setPixelColor(i + move_squid_p4, led.Color(255, 255, 255));
      }
      if ((i + move_squid_p4) >= 1907) {
        win_p4 = true;
      }
    }
  }
  //bestimmt die geschwindigkeit der Spieler 
  if (move_speed == 0) {
    move_speed = 3;
  }
  if (move_speed > 0) {
    move_speed--;
  }
}
//überprüft ob sich bei rot bewegt wurde
void check_for_failure() {
  if (red && check_for_move1 > move_squid_p1) {
    failure_p1 = true;
  }
  if (red && check_for_move2 > move_squid_p2) {
    failure_p2 = true;
  }
  if (red && check_for_move3 > move_squid_p3) {
    failure_p3 = true;
  }
  if (red && check_for_move4 > move_squid_p4) {
    failure_p4 = true;
  }
}

void check_for_win() {
  if (failure_p1 && failure_p2 && failure_p3 && failure_p4) {
    failure_p1 = false;
    failure_p2 = false;
    failure_p3 = false;
    failure_p4 = false;
    check_for_move1 = 0;
    move_squid_p1 = 0;
    check_for_move2 = 0;
    move_squid_p2 = 0;
    check_for_move3 = 0;
    move_squid_p3 = 0;
    check_for_move4 = 0;
    move_squid_p4 = 0;
    green = true;
    red = false;
    yellow = false;
    ran_timer1 = 0;
    ran_timer2 = 0;
    ran_timer3 = 0;
  }
  if (win_p1) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(255, 0, 0));
    }
    led.show();
    delay(1000);
    failure_p1 = false;
    failure_p2 = false;
    failure_p3 = false;
    failure_p4 = false;
    check_for_move1 = 0;
    move_squid_p1 = 0;
    check_for_move2 = 0;
    move_squid_p2 = 0;
    check_for_move3 = 0;
    move_squid_p3 = 0;
    check_for_move4 = 0;
    move_squid_p4 = 0;
    green = true;
    red = false;
    yellow = false;
    ran_timer1 = 0;
    ran_timer2 = 0;
    ran_timer3 = 0;
    win_p1 = false;
  }
  if (win_p2) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 255, 0));
    }
    led.show();
    delay(1000);
    failure_p1 = false;
    failure_p2 = false;
    failure_p3 = false;
    failure_p4 = false;
    check_for_move1 = 0;
    move_squid_p1 = 0;
    check_for_move2 = 0;
    move_squid_p2 = 0;
    check_for_move3 = 0;
    move_squid_p3 = 0;
    check_for_move4 = 0;
    move_squid_p4 = 0;
    green = true;
    red = false;
    yellow = false;
    ran_timer1 = 0;
    ran_timer2 = 0;
    ran_timer3 = 0;
    win_p2 = false;
  }
  if (win_p3) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 255));
    }
    led.show();
    delay(1000);
    failure_p1 = false;
    failure_p2 = false;
    failure_p3 = false;
    failure_p4 = false;
    check_for_move1 = 0;
    move_squid_p1 = 0;
    check_for_move2 = 0;
    move_squid_p2 = 0;
    check_for_move3 = 0;
    move_squid_p3 = 0;
    check_for_move4 = 0;
    move_squid_p4 = 0;
    green = true;
    red = false;
    yellow = false;
    ran_timer1 = 0;
    ran_timer2 = 0;
    ran_timer3 = 0;
    win_p3 = false;
  }
  if (win_p4) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(255, 255, 255));
    }
    led.show();
    delay(1000);
    failure_p1 = false;
    failure_p2 = false;
    failure_p3 = false;
    failure_p4 = false;
    check_for_move1 = 0;
    move_squid_p1 = 0;
    check_for_move2 = 0;
    move_squid_p2 = 0;
    check_for_move3 = 0;
    move_squid_p3 = 0;
    check_for_move4 = 0;
    move_squid_p4 = 0;
    green = true;
    red = false;
    yellow = false;
    ran_timer1 = 0;
    ran_timer2 = 0;
    ran_timer3 = 0;
    win_p4 = false;
  }
}

//setzt die zufälligen timer um zu entscheiden wann und wie lange welche farbe angezeigt wird
void game_STOP_AND_GO() {
  if (select == 5) {
    easter_counter = 0;
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 0));
    }
    if (ran_timer1 == 0 && green) {
      ran_timer1 = (15 + rand() % 10);
    }
    if (ran_timer2 == 0 && yellow) {
      ran_timer2 = (3 + rand() % 7);
    }
    if (ran_timer3 == 0 && red) {
      ran_timer3 = (10 + rand() % 20);
    }
    if (ran_timer1 > 0) {
      for (int i = 1776; i < 2304; i++) {
        led.setPixelColor(i, led.Color(0, 255, 0));
      }
      if (ran_timer1 == 1) {
        green = false;
        yellow = true;
        ran_timer1 = 0;
      }
    }
    if (ran_timer2 > 0) {
      for (int i = 1776; i < 2304; i++) {
        led.setPixelColor(i, led.Color(255, 255, 0));
      }
      if (ran_timer2 == 1) {
        yellow = false;
        red = true;
        ran_timer2 = 0;
      }
    }
    if (ran_timer3 > 0) {
      for (int i = 1776; i < 2304; i++) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
      if (ran_timer3 == 1) {
        green = true;
        red = false;
        ran_timer3 = 0;
      }
    }
    if (ran_timer1 > 0) {
      ran_timer1--;
    }
    if (ran_timer2 > 0) {
      ran_timer2--;
    }
    if (ran_timer3 > 0) {
      ran_timer3--;
    }
    stop_and_go_player();
    check_for_failure();
    check_for_win();
    led.show();
  }
}
