//zur bewegung der Spielfigur in JUMP AND RUN
void jumper() {
  for (int i = 90; i < 190; i++) {
    if (i == 140 || i == 92) {
      led.setPixelColor(i + jump1 + move1, led.Color(255, 0, 0));
    }
  }
  if (analogRead(player_y_one) >= 850 && jump1 > 0) {
    jump1 -= 96;
  }
  if (analogRead(player_y_one) <= 200 && jump1 < 572) {
    jump1 += 96;
  }

  for (int i = 859; i < 909; i++) {
    if (i == 860 || i == 908) {
      led.setPixelColor(i + jump2, led.Color(0, 255, 0));
    }
  }
  if (analogRead(player_y_two) >= 850 && jump2 > 0) {
    jump2 -= 96;
  }
  if (analogRead(player_y_two) <= 200 && jump2 < 572) {
    jump2 += 96;
  }

  for (int i = 1627; i < 1677; i++) {
    if (i == 1628 || i == 1676) {
      led.setPixelColor(i + jump3, led.Color(0, 0, 255));
    }
  }
  if (analogRead(player_y_three) >= 850 && jump3 > 0) {
    jump3 -= 96;
  }
  if (analogRead(player_y_three) <= 200 && jump3 < 572) {
    jump3 += 96;
  }
}

//zeigt an wenn eine Collision entdeckt wurde
void collision() {
  if (coll_detect_one) {
    for (int i = 0; i < 768; i++) {
      led.setPixelColor(i, led.Color(255, 0, 0));
    }
  }
  if (coll_detect_two) {
    for (int i = 768; i < 1536; i++) {
      led.setPixelColor(i, led.Color(0, 255, 0));
    }
  }
  if (coll_detect_three) {
    for (int i = 1536; i < 2304; i++) {
      led.setPixelColor(i, led.Color(0, 0, 255));
    }
  }
}

void win_JUMP_AND_RUN() {
  if (coll_detect_one && coll_detect_two) {
    win_row_three = true;
  }
  if (coll_detect_one && coll_detect_three) {
    win_row_two = true;
  }
  if (coll_detect_two && coll_detect_three) {
    win_row_one = true;
  }
  if (win_row_one) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(255, 0, 0));
    }
    led.show();
    new_block = true;
    ran_num = 0;
    num_of_total_rows = 0;
    row_speed = 25;
    row_move_speed = 1;
    counter_new_row = 0;
    coll_detect_one = false;
    coll_detect_two = false;
    coll_detect_three = false;
    win_row_one = false;
    win_row_two = false;
    win_row_three = false;
    led_row1 = 0;
    led_row2 = 0;
    led_row3 = 0;
    led_row4 = 0;
    led_row5 = 0;
    row1 = false;
    row2 = false;
    row3 = false;
    row4 = false;
    blackout_time = false;
    delay(1000);
  }
  if (win_row_two) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 255, 0));
    }
    led.show();
    new_block = true;
    ran_num = 0;
    num_of_total_rows = 0;
    row_speed = 25;
    row_move_speed = 1;
    counter_new_row = 0;
    coll_detect_one = false;
    coll_detect_two = false;
    coll_detect_three = false;
    win_row_one = false;
    win_row_two = false;
    win_row_three = false;
    led_row1 = 0;
    led_row2 = 0;
    led_row3 = 0;
    led_row4 = 0;
    led_row5 = 0;
    row1 = false;
    row2 = false;
    row3 = false;
    row4 = false;
    blackout_time = false;
    delay(1000);
  }
  if (win_row_three) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 255));
    }
    led.show();
    new_block = true;
    ran_num = 0;
    num_of_total_rows = 0;
    row_speed = 25;
    row_move_speed = 1;
    counter_new_row = 0;
    coll_detect_one = false;
    coll_detect_two = false;
    coll_detect_three = false;
    win_row_one = false;
    win_row_two = false;
    win_row_three = false;
    led_row1 = 0;
    led_row2 = 0;
    led_row3 = 0;
    led_row4 = 0;
    led_row5 = 0;
    row1 = false;
    row2 = false;
    row3 = false;
    row4 = false;
    blackout_time = false;
    delay(1000);
  }
}


void game_JUMP_AND_RUN() {
  if (select == 4) {
    easter_counter = 0;
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 0));
    }
    for (int i = 0; i < MAXLED; i++) {
      if (i <= 47) {
        led.setPixelColor(i, led.Color(255, 255, 255));
      }
      if (i >= 720 && i <= 767) {
        led.setPixelColor(i, led.Color(255, 255, 255));
      }
      if (i >= 768 && i <= 815) {
        led.setPixelColor(i, led.Color(255, 255, 255));
      }
      if (i <= 1535 && i >= 1488) {
        led.setPixelColor(i, led.Color(255, 255, 255));
      }
      if (i >= 1536 && i <= 1583) {
        led.setPixelColor(i, led.Color(255, 255, 255));
      }
      if (i <= 2303 && i >= 2256) {
        led.setPixelColor(i, led.Color(255, 255, 255));
      }
    }

    //Entscheidet zufällig welcher Block als nächstes angezeigt wird zudem wird solang eine neu zufällige zahl
    //erzeugt bis sie unterschiedlich zur vorherigen ist (siehe: While loop)
    if (new_block) {
      ran_num = (1 + rand() % 4);
      while (check_for_double == ran_num) {
        ran_num = (1 + rand() % 4);
      }
      check_for_double = ran_num;
      if (ran_num == 1) {
        row1 = true;
      } else if (ran_num == 2) {
        row2 = true;
      } else if (ran_num == 3) {
        row3 = true;
      } else if (ran_num == 4) {
        row4 = true;
      }
      new_block = false;
    }
    // sorgt dafür das sich die Blöcke richtung spieler bewegen, Überprüft ob der Spieler mit den Bewegten Blöcken kontakt hat
    if (row1) {
      for (int i = 48; i < 2065; i++) {
        if (i == 48 || i == 96 || i == 144 || i == 192 || i == 240 || i == 288 || i == 336 || i == 384 || i == 432 || i == 480 || i == 528) {
          led.setPixelColor(i + led_row1, led.Color(255, 255, 255));
          if ((i + led_row1) == (92 + jump1) || (i + led_row1) == (140 + jump1)) {
            coll_detect_one = true;
          }
        }
        if (i == 816 || i == 864 || i == 912 || i == 960 || i == 1008 || i == 1056 || i == 1104 || i == 1152 || i == 1200 || i == 1248 || i == 1296) {
          led.setPixelColor(i + led_row1, led.Color(255, 255, 255));
          if ((i + led_row1) == (860 + jump2) || (i + led_row1) == (908 + jump2)) {
            coll_detect_two = true;
          }
        }
        if (i == 1584 || i == 1632 || i == 1680 || i == 1728 || i == 1776 || i == 1824 || i == 1872 || i == 1920 || i == 1968 || i == 2016 || i == 2064) {
          led.setPixelColor(i + led_row1, led.Color(255, 255, 255));
          if ((i + led_row1) == (1628 + jump3) || (i + led_row1) == (1676 + jump3)) {
            coll_detect_three = true;
          }
        }
      }
      led_row1 = led_row1 + row_move_speed;
    }
    if (row2) {
      for (int i = 192; i < 2209; i++) {
        if (i == 192 || i == 240 || i == 288 || i == 336 || i == 384 || i == 432 || i == 480 || i == 528 || i == 672 || i == 624 || i == 576) {
          led.setPixelColor(i + led_row2, led.Color(255, 255, 255));
          if ((i + led_row2) == (92 + jump1) || (i + led_row2) == (140 + jump1)) {
            coll_detect_one = true;
          }
        }
        if (i == 1440 || i == 1392 || i == 1344 || i == 1296 || i == 1248 || i == 1200 || i == 1152 || i == 1104 || i == 1056 || i == 1008 || i == 960) {
          led.setPixelColor(i + led_row2, led.Color(255, 255, 255));
          if ((i + led_row2) == (860 + jump2) || (i + led_row2) == (908 + jump2)) {
            coll_detect_two = true;
          }
        }
        if (i == 2208 || i == 2160 || i == 2112 || i == 2064 || i == 2016 || i == 1968 || i == 1920 || i == 1872 || i == 1824 || i == 1776 || i == 1728) {
          led.setPixelColor(i + led_row2, led.Color(255, 255, 255));
          if ((i + led_row2) == (1628 + jump3) || (i + led_row2) == (1676 + jump3)) {
            coll_detect_three = true;
          }
        }
      }
      led_row2 = led_row2 + row_move_speed;
    }
    if (row3) {
      for (int i = 384; i < 2209; i++) {
        if (i == 384 || i == 432 || i == 480 || i == 528 || i == 672 || i == 624 || i == 576) {
          led.setPixelColor(i + led_row3, led.Color(255, 255, 255));
          if ((i + led_row3) == (92 + jump1) || (i + led_row3) == (140 + jump1)) {
            coll_detect_one = true;
          }
        }
        if (i == 1440 || i == 1392 || i == 1344 || i == 1296 || i == 1248 || i == 1200 || i == 1152) {
          led.setPixelColor(i + led_row3, led.Color(255, 255, 255));
          if ((i + led_row3) == (860 + jump2) || (i + led_row3) == (908 + jump2)) {
            coll_detect_two = true;
          }
        }
        if (i == 2208 || i == 2160 || i == 2112 || i == 2064 || i == 2016 || i == 1968 || i == 1920) {
          led.setPixelColor(i + led_row3, led.Color(255, 255, 255));
          if ((i + led_row3) == (1628 + jump3) || (i + led_row3) == (1676 + jump3)) {
            coll_detect_three = true;
          }
        }
      }
      led_row3 = led_row3 + row_move_speed;
    }
    if (row4) {
      for (int i = 48; i < 1729; i++) {
        if (i == 48 || i == 96 || i == 144 || i == 192) {
          led.setPixelColor(i + led_row4, led.Color(255, 255, 255));
          if ((i + led_row4) == (92 + jump1) || (i + led_row4) == (140 + jump1)) {
            coll_detect_one = true;
          }
        }
        if (i == 816 || i == 864 || i == 912 || i == 960) {
          led.setPixelColor(i + led_row4, led.Color(255, 255, 255));
          if ((i + led_row4) == (860 + jump2) || (i + led_row4) == (908 + jump2)) {
            coll_detect_two = true;
          }
        }
        if (i == 1584 || i == 1632 || i == 1680 || i == 1728) {
          led.setPixelColor(i + led_row4, led.Color(255, 255, 255));
          if ((i + led_row4) == (1628 + jump3) || (i + led_row4) == (1676 + jump3)) {
            coll_detect_three = true;
          }
        }
      }
      led_row4 = led_row4 + row_move_speed;
    }
    /*******************************************************************************/
    // Ausgeklammert weil ab 5 reihen die so programmiert sind die Leds nicht mehr richtig ablaufen und angezeigt werden, bis 4 reihen funktioniert die Programierung 
    /******************************************************************************/
    /*if (row5) {
      for (int i = 48; i < 1633; i++) {
        if (i == 48 || i == 96) {
          led.setPixelColor(i + led_row5, led.Color(255, 255, 255));
          if ((i + led_row5) == (92 + jump1) || (i + led_row5) == (140 + jump1)) {
            coll_detect_one = true;
          }
        }
        if (i == 816 || i == 864) {
          led.setPixelColor(i + led_row5, led.Color(255, 255, 255));
          if ((i + led_row5) == (860 + jump2) || (i + led_row5) == (908 + jump2)) {
            coll_detect_two = true;
          }
        }
        if (i == 1584 || i == 1632) {
          led.setPixelColor(i + led_row5, led.Color(255, 255, 255));
          if ((i + led_row5) == (1628 + jump3) || (i + led_row5) == (1676 + jump3)) {
            coll_detect_three = true;
          }
        }
      }
      for (int i = 240; i < 2209; i++) {
        if (i == 240 || i == 288 || i == 336 || i == 384 || i == 432 || i == 480 || i == 528 || i == 576 || i == 624 || i == 672) {
          led.setPixelColor(i + (led_row5 + 3), led.Color(255, 255, 255));
          if ((i + led_row5 + 3) == (92 + jump1) || (i + led_row5 + 3) == (140 + jump1)) {
            coll_detect_one = true;
          }
        }
        if (i == 1440 || i == 1392 || i == 1344 || i == 1296 || i == 1248 || i == 1200 || i == 1152 || i == 1104 || i == 1056 || i == 1008) {
          led.setPixelColor(i + (led_row5 + 3), led.Color(255, 255, 255));
          if ((i + led_row5 + 3) == (860 + jump2) || (i + led_row5 + 3) == (908 + jump2)) {
            coll_detect_two = true;
          }
        }
        if (i == 2208 || i == 2160 || i == 2112 || i == 2064 || i == 2016 || i == 1968 || i == 1920 || i == 1872 || i == 1824 || i == 1776) {
          led.setPixelColor(i + (led_row5 + 3), led.Color(255, 255, 255));
          if ((i + led_row5 + 3) == (1628 + jump3) || (i + led_row5 + 3) == (1676 + jump3)) {
            coll_detect_three = true;
          }
        }
      }
      led_row5 = led_row5 + row_move_speed;
    }*/

    //Entscheidet wann eine neue Block reihe erzeugt wird (row_speed ist dafür entscheident -> desto kleiner rwo_speed desto schneller)
    if (num_of_total_rows >= 1) {
      if (counter_new_row >= row_speed) {
        new_block = true;
        counter_new_row = 0;
      }
      counter_new_row++;
    }
    //erhöht die geschwindigkeit(row_move_speed) je nach dem wie viele block reihen insgesamt am ende angekommen sind und wie viele
    //Block reihen gleichzeitig auf dem Tisch erscheinen können(row_speed)
    //legt fest wann blackout zeit zum Spiel hinzugefügt wird
    if (num_of_total_rows >= 4 && row_speed > 17) {
      row_speed = 15;
    } else if (num_of_total_rows >= 8 && row_speed > 14) {
      row_speed = 11;
      row_move_speed = 2;
    } else if (num_of_total_rows >= 15 && row_speed > 10) {
      row_speed = 7;
    } else if (num_of_total_rows >= 30 && row_speed > 6) {
      row_speed = 3;
      row_move_speed = 3;
    }
    if (num_of_total_rows >= 120) {
      blackout_time = true;
    }
    //num_of_toatl_rows wird erhöht -> die schnelligkeit der Blöcke hängt davon ab
    //led_row wird gelöscht wodurch sie neu angezeigt werden kann
    if (led_row1 >= 48) {
      row1 = false;
      led_row1 = 0;
      num_of_total_rows += 1;
      blackout_count = 0;
    }
    if (led_row2 >= 48) {
      row2 = false;
      led_row2 = 0;
      num_of_total_rows += 1;
      blackout_count = 0;
    }
    if (led_row3 >= 48) {
      row3 = false;
      led_row3 = 0;
      num_of_total_rows += 1;
      blackout_count = 0;
    }
    if (led_row4 >= 48) {
      row4 = false;
      led_row4 = 0;
      num_of_total_rows += 1;
      blackout_count = 0;
    }

    jumper();
    collision();
    win_JUMP_AND_RUN();
    //startet blackout zeit (schaltet alle leds für Kurze zeit aus)
    if (blackout_time) {
      if (blackout_count >= 12) {
        for (int i = 0; i < MAXLED; i++) {
          led.setPixelColor(i, led.Color(0, 0, 0));
        }
      }
      blackout_count++;
    }
    ran_num = 0;
    led.show();
  }
}
