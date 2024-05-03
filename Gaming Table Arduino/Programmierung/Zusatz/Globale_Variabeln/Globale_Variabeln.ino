/*****************************************/
/*****************************************/
//**********GLOBALE VARIABLEN************//
/*****************************************/
/*****************************************/


/*****************************************/

//**HELLIGKEITS EINSTELLUNG GLOBAL**//
int brght = 170;


/****************************************/

//**PIN-BELEGUNG SPIELER**//
int player_one = 2;
int player_x_one = A0;
int player_y_one = A1;
int player_two = 3;
int player_x_two = A2;
int player_y_two = A3;
int player_three = 4;
int player_x_three = A4;
int player_y_three = A5;
int player_four = 5;
int player_x_four = A6;
int player_y_four = A7;
//**PIN-BELEGUNG**//
int LED_PIN = 6;
int PIN_AUDIO = 36;


/****************************************/

//**LAUFLICHT**//
int n = 96;


/***************************************/

//**NUMMER DER LEDS UND TIMER FUNKTION FÜR STANDBY-MODUS**//
int MAXLED = 2304;
int long standby_Timer = 0;
int long st = 3000;  // gibt an wann der standby-Modus beginnt nicht zu groß machen!!


/*************************************/

//**VARIABLEN ZUR SPIEL AUSWAHL UND ZUM RESET**//
int select = 0;  // select muss zum start 0 sein, bis jetzt select 0 bis 6 belegt!!
int select_input = 12;
int x_one;
int y_one;
int x_two;
int y_two;
int x_three;
int y_three;
int x_four;
int y_four;
int courser_on_TIC_TAC_TOE = false;
int courser_on_RACE_GAME = false;
int courser_on_COIN_GAME = false;
int courser_on_JUMP_AND_RUN = false;
int courser_on_SQUID_GAME = true;
int x_reset = 0;
int y_reset = 0;
/************************************/

//**RACE GAME**//
int TBEEP = 3;

int run = 0;

float speed1 = 0;
float speed2 = 0;
float speed3 = 0;
float speed4 = 0;
float dist1 = 9216;
float dist2 = 9216;
float dist3 = 9216;
float dist4 = 9216;

byte loop1 = 5;
byte loop2 = 5;
byte loop3 = 5;
byte loop4 = 5;

byte leader = 0;
byte loop_max = 5;  //Rundenanzahl

float ACEL = 4.5;
float ACEL1 = 48;
float kf = 0.20;

byte flag_sw1 = 0;
byte flag_sw2 = 0;
byte flag_sw3 = 0;
byte flag_sw4 = 0;
byte draworder = 0;

unsigned long timestamp = 0;
int tdelay = 1;
int race_win_delay = 1000;


/******************************/

//**TIC TAC TOE**//
int grid1 = 16;
int grid2 = 32;
int grid3 = 768;
int grid4 = 1536;

int select_beginner;
bool beginner;

int ttt_start = 0;

//**PLAYER X**//
bool a1_used1 = false;
bool a2_used1 = false;
bool a3_used1 = false;
bool b1_used1 = false;
bool b2_used1 = false;
bool b3_used1 = false;
bool c1_used1 = false;
bool c2_used1 = false;
bool c3_used1 = false;
//**PLAYER O**//
bool a1_used2 = false;
bool a2_used2 = false;
bool a3_used2 = false;
bool b1_used2 = false;
bool b2_used2 = false;
bool b3_used2 = false;
bool c1_used2 = false;
bool c2_used2 = false;
bool c3_used2 = false;

int x_achse;
int y_achse;
int x = 1;
int y = 1;

int status = 0;
int status_pressed;
int status_pressed1;

bool player_x_win = false;
bool player_o_win = false;
bool no_winner = false;

int count_no_winner = 0;


/******************************/

//**COIN COLLECT**//
int n1 = 0;
int n2 = 0;
int n3 = 0;
int n4 = 0;
int ran = 0;
int ran2 = 0;
int ran_power_up = 0;
int game = 1;
int score1 = 0;
int score2 = 0;
int score3 = 0;
int score4 = 0;
int countcoin_ran = 10;
int countcoin_ran2 = 10;
int dotnew = 10;



/*****************************/

//**JUMP AND RUN**//
bool new_block = true;
int ran_num = 0;
int led_row1 = 0;
int led_row2 = 0;
int led_row3 = 0;
int led_row4 = 0;
int led_row5 = 0;
int num_of_total_rows = 0;
bool row1 = false;
bool row2 = false;
bool row3 = false;
bool row4 = false;
bool row5 = false;
int jump1 = 0;
int jump2 = 0;
int jump3 = 0;
int move1 = 0;
int move2 = 0;
int move3 = 0;
int check_for_double = 0;
int row_speed = 18;
int row_move_speed = 1;
int counter_new_row = 0;
bool coll_detect_one = false;
int coll_detect_two = 0;
int coll_detect_three = 0;
int coll_detect_four = 0;
int coll_detect_five = 0;
bool win_row_one = false;
bool win_row_two = false;
bool win_row_three = false;
bool blackout_time = false;
int blackout_count = 0;
/*****************************/


/****************************/

//**SQUID GAME**//
int ran_timer1 = 0;
int ran_timer2 = 0;
int ran_timer3 = 0;
bool green_allow_to_run = true;
bool yellow_allow_to_run = false;
bool red_not_allow_to_run = false;
bool green = true;
bool yellow = false;
bool red = false;
int move_squid_p1 = 0;
int check_for_move1 = 0;
int move_squid_p2 = 0;
int check_for_move2 = 0;
int move_squid_p3 = 0;
int check_for_move3 = 0;
int move_squid_p4 = 0;
int check_for_move4 = 0;
bool failure_p1 = false;
bool failure_p2 = false;
bool failure_p3 = false;
bool failure_p4 = false;
bool win_p1 = false;
bool win_p2 = false;
bool win_p3 = false;
bool win_p4 = false;
int move_speed = 3;
/**************************/

//**Easter EGG**//
int easter_counter = 0;