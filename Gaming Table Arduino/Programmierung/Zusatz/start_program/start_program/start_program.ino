//RUFT STANDBY BILDSCHIRM, SOWIE RESET UND DEN START BILDSCHIRM//
void start_program() {
  if (standby_Timer > st) {
    select = 10;  // select wird auf einen wert gesetzt der noch nicht in der Spielauswahl verwendet wurde (der Wert an sich ist für die Funktion der runlight function egal)
    runlight();
    reset();
  }
  if (select == 0) {
    start_screen();
    easter_egg();
    reset();
  }
}
//
