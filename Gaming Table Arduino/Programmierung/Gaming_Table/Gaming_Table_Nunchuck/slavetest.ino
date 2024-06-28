#include <pitches.h>
#include "MusikVariablen.h"
#include <Wire.h>
#include <Adafruit_NeoPixel.h>
int MAXLED = 140;
int LED_PIN = 6;
int selct;
int melodyPin = 3;
int control_music = 0;
float pauseBetweenNotes = 0;
int thisNote = 0;
float pBN_mario = 6;
float pBN_underworld = 8;
float pBN_starwars = 8;
float pBN_doom = 8;  // wird von pauseBetweenNotes abgezogen simuliert ein delay, muss bei manchen Lieder evtl. Manuel eingegeben werden
float pBN_pacman = 8;
float pBN_pinkpanther = 8;
float pBN_simpson = 8;
float pBN_tokyodrift = 8;
int change_music_in_home_screen_status = 2;
Adafruit_NeoPixel led(MAXLED, 6, NEO_GRB + NEO_KHZ800);
void setup() {
  led.begin();
  Wire.begin(9);

  Serial.begin(9600);
  for (int i = 0; i < MAXLED; i++) {
    led.setPixelColor(i, led.Color(0, 0, 0));
  }
  led.show();
}
void loop() {
  Wire.onReceive(receiveEvent);
  select_music();
  delay(10);
  Serial.println(selct);
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany) {
  while (1 < Wire.available())  // loop through all but the last
  {
    char c = Wire.read();  // receive byte as a character
    Serial.print(c);       // print the character
  }
  int x = Wire.read();  // receive byte as an integer
  Serial.println(x);    // print the integer

  selct = x;
}


void select_music() {
  //Title Musik
  if (selct == 0) {
    mario_theme();
    LED_Breathe_Red();
  }
  //Race Game Musik
  if (selct == 1) {
    LED_Shoot_White();
    Tokyo_Drift_theme();
  }
  //Tic Tac Toe Musik
  if (selct == 2) {
    underworld_theme();
  }
  //Collect Coin Musik
  if (selct == 3) {
    pacman_theme();
    LED_Gold_Glitter();
  }
  /*
  //Jump and Run Musik
  if (selct == 4) {
    pacman_theme();
  }*/
  //Stop and Go Musik
  if (selct == 5) {
    underworld_theme();
    LED_Red_Flash();
  }
  //platzhalter für andere Spiele

  if (selct == 6 || selct == 0 && change_music_in_home_screen_status == 6) {
    Tokyo_Drift_theme();
  }
  if (selct == 7 || selct == 0 && change_music_in_home_screen_status == 7) {
  }
  if (selct == 8 || selct == 0 && change_music_in_home_screen_status == 8) {
  }
  if (selct == 9 || selct == 0 && change_music_in_home_screen_status == 9) {
  }
  //Easter Egg Musik
  if (selct == 103) {  //"easter egg"
    pink_panther_theme();
  }
  if (selct == 232) {
    delay(10);
  }
}

void mario_theme() {
  int size = sizeof(melody) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / tempo[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, melody[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_mario;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void underworld_theme() {
  int size = sizeof(underworld_melody) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / underworld_tempo[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, underworld_melody[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_underworld;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void star_wars_theme() {
  int size = sizeof(melody_st) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / tempo_st[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, melody_st[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_starwars;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void doom_theme() {
  int size = sizeof(doom_melody) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / doom_tempo[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, doom_melody[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_doom;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void pacman_theme() {
  int size = sizeof(pacman_melody) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / pacman_tempo[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, pacman_melody[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_pacman;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void pink_panther_theme() {
  int size = sizeof(pinkpanther_melody) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / pinkpanther_tempo[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, pinkpanther_melody[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_pinkpanther;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void simpson_theme() {
  int size = sizeof(simpson_melody) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / simpson_tempo[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, simpson_melody[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_simpson;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void Tokyo_Drift_theme() {
  int size = sizeof(Tokyo_Drift_melody) / sizeof(int);
  if (thisNote < size && control_music == 0) {
    int noteDuration = 1000 / TD_tempo[thisNote];
    pauseBetweenNotes = noteDuration * 1.30;
    tone(melodyPin, Tokyo_Drift_melody[thisNote], noteDuration);
    control_music = 1;
    thisNote++;
  }
  if (control_music == 1) {
    pauseBetweenNotes -= pBN_tokyodrift;
    if (pauseBetweenNotes <= 0) {
      control_music = 0;
      noTone(melodyPin);
    }
  }
  if (thisNote >= size) {
    thisNote = 0;
  }
}

void LED_Breathe_Red() {
  for (int i = 0; i < MAXLED; i++) {
    led.setPixelColor(i, led.Color(255, 0, 0));
  }
  led.show();
  for (int i = 50; i < 200; i++) {
    led.setBrightness(i);
    led.show();
    delay(1);
  }
  for (int i = 200; i > 50; i--) {
    led.setBrightness(i);
    led.show();
    delay(1);
  }
}

void LED_Shoot_White() {
  for (int i = 0; i < MAXLED; i++) {
    led.setPixelColor(i, led.Color(255, 255, 255));
    led.show();
    led.setPixelColor(i - 10, led.Color(0, 0, 0));
    led.show();
  }
}

void LED_Gold_Glitter() {
  for (int i = 0; i < MAXLED; i++) {
    int randompixel = random(0, 500);
    led.setPixelColor(randompixel, led.Color(255, 255, 0));
    led.setPixelColor(randompixel + 1, led.Color(255, 255, 0));
    led.show();
  }
  for (int i = 0; i < MAXLED; i++) {
    int randompixel = random(0, 140);
    led.setPixelColor(randompixel, led.Color(0, 0, 0));
  }
  led.show();
}
void LED_Red_Flash() {
  if (random(0, 200) == 42) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(255, 0, 0));
    }
    led.show();
  }
  if (random(0, 10) == 1) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 0));
    }
    led.show();
  }
}
