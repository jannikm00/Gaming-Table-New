//SPIELAUSWAHL UND ZURÜCK ZUM START BILDSCHIRM//
void reset() {
  int digital_input = digitalRead(select_input);//Home Knopf am Gaming Table
  if (easter_counter < 50) {
    if (digital_input == 1 && select != 0) {
      for (int i = 0; i < MAXLED; i++) {
        led.setPixelColor(i, led.Color(0, 0, 0));
      }
      led.show();
      select = 0;
      standby_Timer = 0;
    }
    if (select == 0) {
      x_one = analogRead(player_x_one);
      y_one = analogRead(player_y_one);
      x_two = analogRead(player_x_two);
      y_two = analogRead(player_y_two);
      x_three = analogRead(player_x_three);
      y_three = analogRead(player_y_three);
      x_four = analogRead(player_x_four);
      y_four = analogRead(player_y_four);

      //RACE GAME//
      //Lässt das Spiel Symbol aufblinken wenn es ausgewählt wurde
      if (y_one >= 950 || y_two >= 950 || y_three >= 950 || y_four >= 950 || courser_on_RACE_GAME) {
        courser_on_TIC_TAC_TOE = false;
        courser_on_RACE_GAME = true;
        courser_on_COIN_GAME = false;
        courser_on_JUMP_AND_RUN = false;
        courser_on_SQUID_GAME = false;
        for (int i = 60; i < 396; i++) {
          led.setPixelColor(i, led.Color(0, 0, 0));
        }
        led.show();
        //bestätigt die Auswahl
        if (digitalRead(player_one) == 1 || digitalRead(player_two) == 1 || digitalRead(player_three) == 1 || digitalRead(player_four) == 1) {
          select = 1;
          standby_Timer = 0;
        }
      }
      //TIC TAC TOE//
      if (y_one <= 150 || y_two <= 150 || y_three <= 150 || y_four <= 150 || courser_on_TIC_TAC_TOE) {
        courser_on_TIC_TAC_TOE = true;
        courser_on_RACE_GAME = false;
        courser_on_COIN_GAME = false;
        courser_on_JUMP_AND_RUN = false;
        courser_on_SQUID_GAME = false;
        for (int i = 1701; i < 2187; i++) {
          led.setPixelColor(i, led.Color(0, 0, 0));
        }
        led.show();
        if (digitalRead(player_one) == 1 || digitalRead(player_two) == 1 || digitalRead(player_three) == 1 || digitalRead(player_four) == 1) {
          select = 2;
          standby_Timer = 0;
        }
      }
      //COIN GAME//
      if (x_one >= 950 || x_two >= 950 || x_three >= 950 || x_four >= 950 || courser_on_COIN_GAME) {
        courser_on_TIC_TAC_TOE = false;
        courser_on_RACE_GAME = false;
        courser_on_COIN_GAME = true;
        courser_on_JUMP_AND_RUN = false;
        courser_on_SQUID_GAME = false;
        for (int i = 664; i < 1243; i++) {
          if (i == 665 || i == 763 || i == 714 || i == 665 || i == 859 || i == 906 || i == 953 || i == 666 || i == 715 || i == 764 || i >= 806 && i <= 813 || i == 860 || i == 907 || i == 954 || i >= 1047 && i <= 1051 || i >= 1094 && i <= 1100 || i >= 1142 && i <= 1148 || i >= 1190 && i <= 1196 || i >= 1239 && i <= 1243) {
            led.setPixelColor(i, led.Color(0, 0, 0));
          }
        }
        led.show();
        if (digitalRead(player_one) == 1 || digitalRead(player_two) == 1 || digitalRead(player_three) == 1 || digitalRead(player_four) == 1) {
          select = 3;
          standby_Timer = 0;
        }
      }
      //JUMP AND RUN//
      if (x_one <= 150 || x_two <= 150 || x_three <= 150 || x_four <= 150 || courser_on_JUMP_AND_RUN) {
        courser_on_TIC_TAC_TOE = false;
        courser_on_RACE_GAME = false;
        courser_on_COIN_GAME = false;
        courser_on_JUMP_AND_RUN = true;
        courser_on_SQUID_GAME = false;
        for (int i = 629; i < 1210; i++) {
          if (i >= 1201 && i <= 1209 || i >= 1156 && i <= 1158 || i >= 1106 && i <= 1110 || i >= 1058 && i <= 1065 || i >= 1009 && i <= 1017 || i >= 917 && i <= 919 || i >= 868 && i <= 870 || i >= 819 && i <= 821 || i >= 770 && i <= 777 || i >= 723 && i <= 725 || i >= 676 && i <= 678 || i >= 629 && i <= 631) {
            led.setPixelColor(i, led.Color(0, 0, 0));
          }
        }
        led.show();
        if (digitalRead(player_one) == 1 || digitalRead(player_two) == 1 || digitalRead(player_three) == 1 || digitalRead(player_four) == 1) {
          select = 4;
          standby_Timer = 0;
        }
      }
      //STOP AND GO//
      if (digitalRead(player_one) == 1 && digitalRead(player_two) == 1) {
        select = 5;
        standby_Timer = 0;
      }
    }
  }
}
//
