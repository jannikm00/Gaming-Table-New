//Ruft alle Haupt funktionen auf und erhöht die variable des standby_Timer (diese funktioniert auch innerhalb von Spielen wenn nichts gedrückt wird)
//Loop wird genau wie Setup in jedem Programm benötigt
//void loop wird AUTOMATISCH immer wieder aufgerufen
void loop() {
  start_program();
  reset();
  game_ONE_LED_RACE();
  game_TWO_TIC_TAC_TOE();
  game_COIN_COLLECT();
  game_JUMP_AND_RUN();
  game_STOP_AND_GO();
  standby_Timer++;
}
