#include <pitches.h>

#define melodyPin 3
//Underworld melody
int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
//Underwolrd tempo
int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};

int o = 0;
int pauseBetweenNotes;
int pBN = 0.015;
int thisNote = 0;


void setup(void)
{
  pinMode(3, OUTPUT);//buzzer
}


void underworld_theme() {
  int size = sizeof(underworld_melody) / sizeof(int); // Bei jedem durchlauf der Funktion wird die position in der Array überprüft und festgehalten
  //wird einmal ausgeführt und dann erst nach einer pause wieder
  //Wenn die Variable thisNote größer als die Array ist (size) startet das Lied von vorne
  if (thisNote < size && o == 0) {
    int noteDuration = 1000 / underworld_tempo[thisNote]; //länge einer Note
    pauseBetweenNotes = noteDuration * 1.30; //pause zwischen zwei Noten
    tone(melodyPin, underworld_melody[thisNote], noteDuration); //Nötig damit die Note ausgegeben wird...  Das Ausgegebene Signal des Arduino muss auf einem digital PWM pin liegen (melodyPin liegt auf PWM pin 3)
    o = 1;
    thisNote++;
  }
  //Regelt die Pause zwischen zwei Noten
  if (o == 1) {
    pauseBetweenNotes -= 0.015; // Dieser wert ist zuständig für die gescwindigkeit/größe der Pause -> Achtung!! Wenn nur rauschen zu hören ist ist keine Pause/zu kleine Pause vorhanden
    if (pauseBetweenNotes <= 0) { //Wenn die erforderliche Pause erreicht ist wird der Ton ausgeschaltet
      o = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) { //setzt thisNote auf 0 zurück damit das Lied von vorne beginnt
    thisNote = 0;
  }
}



void loop()
{
underworld_theme();

}

