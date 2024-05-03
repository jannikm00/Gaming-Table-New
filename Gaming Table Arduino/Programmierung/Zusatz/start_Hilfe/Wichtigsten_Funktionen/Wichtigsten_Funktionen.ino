
//https://www.arduino.cc/reference/en/ // Link für Arduino Funktionen / Arduino Programiersprachen Referenzen

//wichtigsten Variablen Typen
//werden außerhalb einer Fuktion bestimmt, am besten am Programm anfang (übersichtlicher) (Global)
int   // für ganze zahlen
int zahl = 0;
bool  // hat den wert true oder false (1 oder 0)
bool richtig = true;
float // Komma zahlen
float komma_zahl = 1.234;
//wenn variablen innerhalb einer Funktion festgelegt werden können diese auch nur dort verwendet werden (Lokal)
//BSP:
void variable_kann_nur_hier_verwendet_werden(){
  int var = 0;
}
//
//Diese beiden Funktionen (setup,loop) müssen in jedem Programm vorhanden sein und können auch nicht umbennant werden
//In einem neuen Sketch immer vorhanden
void setup(){
  //setup code wird nur einmal zum start des Arduinos durchlaufen
}
void loop(){
  //loop code wird immer wieder durchlaufen und enthält den haupt program code
}
//
//Damit Funktionen überhaupt ausgeführt werden müssen diese in void loop() aufgerufen werden oder in void loop programiert werden (unübersichtlich bei vielen Funktionen)
//!!!!!!!!//
//void setup ist eine ausnahme
void BSP(){

}
void loop(){
  BSP();
}
//
//Stopt das Program für die eingegebene zahl in millisekunde
//!!währenddessen wird nichts ausgeführt!!
delay(1000)// stopt das Program für 1s
//
//Der pinMode() wird in void Setup festgelegt
void setup(){
  pinMode(pin,INPUT); //Eingang
  pinMode(pin,OUTPUT); // Ausgang
}
//
//
//Wird benutzt um die Digitalen pins des arduinos die als input festgelegt wurden auszulesen
digitalRead(nummer_des_pins_oder_die_variable_die_die_nummer_enthält); //gibt den wert 0 oder 1 aus, BSP: 1 wird ausgegeben wenn U=5v, 0 wird ausgegeben wenn U=0V
//wird benutz um die Analogen pins des Arduinos die als input festgellegt wurden auszulesen
analogRead(nummer_des_pins_oder_die_variable_die_die_nummer_enthält); // gibt einen wert zwischen 0 und 1023 aus, BSP: 0=0v, 1023=5v
//Der ausgelesene wert kann in einer variable gespeichert werden
//



//Ist die Initialisierung der Library, diese wird auserhalb einer Funktion aufgerufen in der ersten zeile des Programs
#include <Adafruit_NeoPixel.h>
//!!!!!!!!!//
//led(), ist eine Variable die auch anders benannt werden kann, sie wird vor jede funktion der Library im Program gesetzt mit led.
//ALLE_LEDS_IM_STREIFEN ist eine Variable die auch anders bennant werden kann, sie hat den wert der gesamt anzahl an Leds im led-streifen
//LED_PIN ist eine Variable die auch anders bennant werden kann, sie hat den wert des Pins am Arduino der zur Datenübertragung genutz wird (Digitaler input pin)
//Die werte NEO_GRB + NEO_KHZ800 sind abhängig von den verwendeten Led streifen und vorgegeben von der Adafruit Library
Adafruit_NeoPixel led(ALLE_LEDS_IM_STREIFEN, LED_PIN, NEO_GRB + NEO_KHZ800);
//https://adafruit.github.io/Adafruit_NeoPixel/html/class_adafruit___neo_pixel.html //Link zur Library Webseite
//!!!!!!!!//
//

//led. ist NUR EIN BEISPIELHAFTER VARIABLEN NAME

//In der Setup funktion 
//muss einmal led.begin() aufgerufen werden damit die Lybrary funktioniert
//kann led.setBrightness() aufgerufen werden um Global die Helligkeit der Leds festzulegen, x steht für eine Variable zahl zwischen 0 und 255
led.begin();
led.setBrightness(x);
//
//setzt die Led mit der nummer i (steht für eine Variable) auf eine farbe entsprechend der eingegebenen werte für r,g,b (Die Werte für r,g,b gehen von 0 bis 255)
//(r=rot),(g=grün),(b=blau)
led.setPixelColor(i, led.Color(r,g,b));
//
//mit einem for loop können auch alle leds gleichzeitig angesteuert werden
for(int i = 0; i < ALLE_LEDS_IM_STREIFEN; i++){
  led.setPixelColor(i, led.Color(r,g,b));
}
//
//um bedingungen für das ausführen bestimmter aktionen festzulegen eignen sich if sätze
//in die klammern werden bedingungen Reingeschrieben und mit Operatoren verbunden
&& // und
|| // oder
!  // nicht
!= // nicht gleich
== // gleich
<  // kleiner
>  // größer
<= // kleiner gleich
>= //größer gleich
//If sätze werden nur ausgeführt wenn die bedingung am ende true (wahr) ist
//BSP: für if sätze
//
if(){

}
//
if(){

}else{

}
//
if(){

}else if(){

}else{

}
//
//BSP:
int zahl = 0;
int zahl_zwei = 5;
int zahl_max;
if(zahl >= 0 && zahl <= zahl_zwei){ //Der if satz wird ausgeführt wenn die Variable zahl größer gleich null ist und gleiner gleich der Variable zahl zwei
  zahl++;// in jedem Programm durchlauf wo der if satz true ist wird zahl um 1 erhöht
}else if(zahl > 5 && zahl < 20){ // wenn der erste if satz falsch ist wird dieser überprüft, wenn Variable zahl größer als 5 ist und die variable zahl kleiner als 20 ist 
  zahl += 2;// in jedem Programm durchlauf wo der else if satz true ist wird zahl um 2 erhöht
}else{ //wird ausgeführt wenn beide if sätze false ergeben
  zahl = 0; // setzt zahl wieder auf null, im nächsten programm durchlauf beginnt der if satz wieder von vorne
}
//Um die Led(s) Leuchten zu lassen
led.show();
//BSP1: setzt alle leds gleichzeitig auf die Farbe rot
void loop(){
  //setzt erst alle Leds auf Dunkel (Schwarz/Aus) damit das überschreiben ohne fehler abläuft
  //ist in diesem fall nur optional, da alle leds geupdatet werden im zweiten schritt
  for(int i = 0; i < ALLE_LEDS_IM_STREIFEN; i++){
    led.setPixelColor(i, led.Color(0,0,0));
  }
  //
  //Gibt allen Leds im streifen die Farbe Rot auf voller helligkeit
  for(int i = 0; i < ALLE_LEDS_IM_STREIFEN; i++){
    led.setPixelColor(i, led.Color(255,0,0));//Mit der höhe der zahl wird auch die Helligkeit gesteuert der Leds 
  }
  led.show();// außerhalb des for loops
}
//BSP2: setzt die leds nacheinander auf rot
void loop(){
  for(int i = 0; i < ALLE_LEDS_IM_STREIFEN; i++){
    led.setPixelColor(i,led.Color(255,0,0));
    led.show();// innerhalb des for loops
  }
}


















