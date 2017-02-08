#include <LiquidCrystal.h>
#include "pitches.h"

#define OCTAVE_OFFSET 0
#define MAX_SONG_NUMBER 16

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const char* tytuly[] = {"Game of Thrones", "Wsrod nocnej ciszy", "Ona tanczy dla mnie","Never gonna give you up","Classical","He's Pirate","Star Wars", "Underworld", "Hallelujah","Wlazl kotek na plotek","Melody","Koziolek Matolek","Sto lat", "Melodia", "Ona tanczy dla mnie","Melodyja"}; 

const int  playPin = 8; 
const int prevPin = 9;
const int nextPin = 7;

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////Classical/////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int classic_melody[] = {
     
    NOTE_AS5  ,    NOTE_D5   ,    NOTE_E5   ,    NOTE_F5   ,    
    NOTE_A5   ,    NOTE_A5   ,    NOTE_C6   ,    NOTE_A5   ,    
    NOTE_G5   ,    NOTE_G5   ,    NOTE_F5   ,    NOTE_E5   ,    
    NOTE_F5   ,    NOTE_E5   ,    NOTE_D5   ,    NOTE_D4   ,
 
};

  int classic_duration[] = {                  
    
          5,        2,          2,          2,
          3,        3,          3,          2,
          7,        8,          8,          3,
          3,        3,          8,          10,
  };
  
/////////////////////////////////////////////////////////////////////////////////
///////////////////////////UNDERWORLD////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,

};

int underworld_duration[] = {
  2, 2, 2, 2,
};

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////GAME OF THRONES////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int thrones_melody[] = {
NOTE_G3 , NOTE_C3, NOTE_DS3, NOTE_F3, NOTE_G3 ,NOTE_C3, NOTE_DS3, NOTE_F3, NOTE_D3,
NOTE_F3 , NOTE_B2, NOTE_D3, NOTE_DS3, NOTE_F3, NOTE_B2, NOTE_DS3, NOTE_D3,NOTE_C3 }; //18

int thrones_duration[] = {
3, 3, 1, 1, 2, 2, 1, 1, 9,
3, 3, 1, 1, 2, 2, 1, 1, 9};

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////WŚRÓD NOCNEJ CISZY////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

 int wsrod_melody[] = {
C, D, H, G, E, E, F, D, E, 
C, D, H, G, E, E, F, D, E, 
C, E, C, E, F, D, H, G, 
C, E, C, E, F, D, H, G, 
C, C, D, D, C }; //39

int wsrod_duration[] = {4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};


/////////////////////////////////////////////////////////////////////////////////
///////////////////////////MELODY////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int melody[] = {6553}; //1

int melody_duration[3] = {4};

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////MELODIA////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int melodia[] = {208}; //1

int melodia_duration[6] = {4};

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////MELODYJA////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int melodyja[] = {543}; //1

int melodyja_duration[1] = {4};

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////Rick Astley////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int rick_melody[] = {
C,D,F,D,A,
A,G,
C,D,F,D,G,
G,F}; //14

int rick_duration[] = {
1,1,1,1,1,
4,4,
1,1,1,1,1,
4,4};

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////ONA TAŃCZY DLA MNIE////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

  
int onatanczy_melody[] =  
{C,
C,D,C,C,
E,F,E,C,E,
D,H,C,D,C,
C,C,D,H,C,
E,F,E,H,
D,H,C,D,C};

int onatanczy_duration[] = {
 3,
 1,1,1,3,
 1,1,1,1,3,
 1,1,1,1,3,
 1,1,1,1,3,
 1,1,1,3,
 1,1,1,1,3,}; //32
 
 
 /////////////////////////////////////////////////////////////////////////////////
///////////////////////////STO LAT////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
int stolat_melody[] =  {
G, E, G, E, //sto lat sto lat
G, A, G, F, //niech zyje zyje nam
E, F, F, D, //sto lat sto lat
F, D, F, G, //niech zyje zyje nam
F, E, D, E, //jeszcze raz
G, G, E, G, G, E, G, C, H, A, G, A,
H, H, H, CE}; //36

int stolat_duration[] = {
  3,2,3,2,
  4,2,2,2,
  3,2,3,2,
  4,2,2,2,
  2,2,2,2,
  2,2,2,2,2,2,2,2,5,2,2,2,
  6,3,3,6
  
 }; 
 
  /////////////////////////////////////////////////////////////////////////////////
///////////////////////////WLAZŁ KOTEK NA PŁOTEK////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
 
int kotek_melody[] =  {
G, E, E,
F, D, D,
C, E, G,
G, E, E,
F, D, D,
C, E, C}; //18

int kotek_duration[] = {
  2,2,2,
  2,2,2,
  1,1,5,
  2,2,2,
  2,2,2,
  1,1,6  
 }; 
 
/////////////////////////////////////////////////////////////////////////////////
///////////////////////////HALLELUJAH////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
 
 int halelujah_melody[] =  {
E, G, A, A,
A, G, E, E,
E, G, A, CE,
A, G, E, F, E, D, C}; //19

int halelujah_duration[] = {
  2,2,2,6,
  2,2,2,6,
  2,2,2,4,
  2,2,2,3,3,3,5
 }; 
 
 
/////////////////////////////////////////////////////////////////////////////////
///////////////////////////STAR WARS////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int starwars_melody[] =  {
C, G, F, E, D, C, G,
F, E, D, C, G,
F, E, F, D,
C, G, F, E, D, C, G,
F, E, D, C, G,
F, E, F, D}; //32

int starwars_duration[] = {
    
 }; 

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////CZERWONE KORALE////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int korale_melody[] =  {
F, E, G, F, E, D,
D, D, C, D, E,
F, E,
E, D, E,
F, E, G, F, E, D,
D, C, D, E, C, D, A, D }; //30

int korale_duration[] = {
 }; 



/////////////////////////////////////////////////////////////////////////////////
///////////////////////////WIOSNA////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int wiosna_melody[] =  {
C, E, E, E, D, C, G,
G, F, E, E, E, D, C, G,
G, F, E, F, G, F, E, D};

int wiosna_duration[] = {
 }; 

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////KOZIOŁEK MATOŁEK////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int koziolek_melody[] =  {
  		    NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_E5,
                    NOTE_D5, NOTE_C5, NOTE_C6, NOTE_G5, NOTE_C5,
                    NOTE_C6, NOTE_G5, NOTE_C5, NOTE_C6, NOTE_G5
};

int koziolek_duration[] = {
  1,2,1,1,2,2,2,2,2,2,2,2,2,2,4
 }; 

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////STAR WARS////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int pirate_melody[] =  {
   	   
   NOTE_D4 ,
   NOTE_D4 ,   
   NOTE_D4 ,  
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_D4 ,
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_D4 ,
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_A3 ,   
   NOTE_C4 ,   
   NOTE_D4 ,
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_E4 ,   
   NOTE_F4 ,   
   NOTE_F4 ,
   NOTE_F4 ,   
   NOTE_G4 ,   
   NOTE_E4 ,   
   NOTE_E4 ,   
   NOTE_D4 ,
   NOTE_C4 ,   
   NOTE_C4 ,   
   NOTE_D4 ,   
   NOTE_A3 ,   
   NOTE_C4 ,    
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_E4 ,   
   NOTE_F4 ,
   NOTE_F4 ,   
   NOTE_F4 ,   
   NOTE_G4 ,   
   NOTE_E4 ,   
   NOTE_E4 ,
   NOTE_D4 ,   
   NOTE_C4 ,   
   NOTE_D4 ,   
   NOTE_A3 ,   
   NOTE_C4 ,    
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_D4 ,   
   NOTE_F4 ,   
   NOTE_G4 ,
   NOTE_G4 ,   
   NOTE_G4 ,   
   NOTE_A4 ,   
   NOTE_AS4 ,  
   NOTE_AS4 ,
   NOTE_A4 ,   
   NOTE_G4 ,   
   NOTE_A4 ,   
   NOTE_D4 ,   
   NOTE_D4 ,
   NOTE_E4 ,   
   NOTE_F4 ,   
   NOTE_F4 ,   
   NOTE_G4 ,   
   NOTE_A4 ,   
   NOTE_D4 ,
   NOTE_D4 ,   
   NOTE_F4 ,   
   NOTE_E4 ,   
   NOTE_E4 ,   
   NOTE_F4 ,
   NOTE_D4 ,   
   NOTE_E4 ,   
   NOTE_A4 ,      
   NOTE_E5 ,   
   NOTE_E4  , 
   NOTE_E4  ,  
   NOTE_F4   , 
   NOTE_D4   , 
   NOTE_E4   ,
   NOTE_A4   ,    
   NOTE_C5 ,  
   NOTE_D5 , 
   NOTE_D5   ,
   NOTE_D5   ,
    NOTE_E5   ,
    NOTE_F5   ,
    NOTE_F5   ,
    NOTE_F5   ,
    NOTE_G5   ,    
    NOTE_E5   ,
    NOTE_E5   ,
    NOTE_D5   ,
    NOTE_C5   ,
    NOTE_C5   ,
    NOTE_D5   ,
    NOTE_A4   ,
    NOTE_C5   ,    
    NOTE_D5,   
    NOTE_D5 ,  
    NOTE_D5  , 
    NOTE_E5   ,
    NOTE_F5   ,
    NOTE_F5   ,
    NOTE_F5   ,
    NOTE_G5   ,    
    NOTE_E5   ,
    NOTE_E5   ,
    NOTE_D5   ,
    NOTE_C5   ,
    NOTE_D5   ,
    NOTE_A4   ,
    NOTE_C5   ,    
    NOTE_D5   ,
    NOTE_D5   ,
    NOTE_D5   ,
    NOTE_F5   ,
    NOTE_G5   ,
    NOTE_G5   ,
    NOTE_G5   ,
    NOTE_A5   ,    
    NOTE_AS5   ,
    NOTE_AS5   ,
    NOTE_A5   ,
    NOTE_G5   ,
    NOTE_A5   ,
    NOTE_D5   ,
    NOTE_D5   ,
    NOTE_E5   ,    
    NOTE_F5   ,
    NOTE_F5   ,
    NOTE_G5   ,
    NOTE_A5   ,
    NOTE_D5   ,
    NOTE_D5   ,
    NOTE_F5   ,    
    NOTE_E5   ,
    NOTE_E5   ,
    NOTE_D5   ,
    NOTE_C5   ,
    NOTE_D5   ,
    NOTE_D5   ,
    NOTE_E5         
};

short pirate_duration[] = {
          
          1,
          2,
          1,
          1,
          1,
          1,    
          2,
          1,
          2,
          1,
          2,
          1,
          1,
          1,
          1,    
          2,
          2,
          1,
          1,
          2,
          2,
          1,
          1,    
          2,
          2,
          1,
          1,
          1,
          2,
          1,
          1,    
          2,
          2,
          1,
          1,
          2,
          2,
          1,
          1,    
          2,
          2,
          1,
          1,
          3,
          1,
          1,    
          2,
          2,
          1,
          1,
          2,
          2,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          1,
          2,
          1,
          1,
          2,
          2,
          2,
          1,
          2,
          1,
          1,
          2,
          2,
          1,
          1,
          3,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          2,
          2,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          1,
          2,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          2,
          2,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          3,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          2,
          2,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          1,
          2,
          1,
          1 ,   
          2,
          2,
          2,
          1,
          2,
          1,
          1 ,   
          2,
          2,
          1,
          1,
          2,
          2,
          2 ,   
          2,
          1,
          1,
          2,
          3,
          1,
          1                                      
 }; 
/////////////////////////////////////////////////////////////////////////////////////

int song = 0;

void setup() 
{
  //buzzer.begin(16, 2);
  //tone.begin(BUZZER_PIN);
  pinMode(playPin, INPUT);
  pinMode(nextPin, INPUT);
  pinMode(prevPin, INPUT);
   Serial.begin(9600);
  lcd.print("Starting up!");
  lcd.autoscroll();
}

void loop() 
{
  int playState = digitalRead(playPin);
  int prevState = digitalRead(prevPin);
  int nextState = digitalRead(nextPin);
 // lcd.setBacklight(HIGH);
  
  if (playState)  //jesli wcisniety przycisk play
 {    
   lcd.begin(16, 2);
   lcd.print("hello, world!");
      switch(song)
      {
        case 0:
        {
          lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 18; thisNote++) 
          {
            int thrones_durationn = 120 * thrones_duration[thisNote];
            tone(10, thrones_melody[thisNote],thrones_durationn);
            delay(thrones_durationn +30);
           }
          break;
        }
        case 1:
        {
          lcd.begin(16, 2);
          lcd.print("Wlasnie gram:"); //wsrod nocnej ciszy
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 39; thisNote++) 
          {
            int wsrod_durationn = 120 * wsrod_duration[thisNote];
            tone(10, wsrod_melody[thisNote],wsrod_durationn);
            delay(wsrod_durationn +30);
          }
          break;
        }
        case 2:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 29; thisNote++) 
          {
            int onatanczy_durationn = 120 * onatanczy_duration[thisNote];
            tone(10, onatanczy_melody[thisNote],onatanczy_durationn);
            delay(onatanczy_durationn +30);
          }
          break;
        }
        case 3:
         {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 14; thisNote++) 
          {
            int rick_durationn = 120 * rick_duration[thisNote];
            tone(10, rick_melody[thisNote],rick_durationn);
            delay(rick_durationn +30);
          }
          break;
          }
        case 4:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 39; thisNote++) 
          {
            int classic_durationn = 120 * classic_duration[thisNote];
            tone(10, classic_melody[thisNote],classic_durationn);
            delay(classic_durationn +30);
	  }
	    break;
	  }
        case 5:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 272; thisNote++) 
          {
            int pirate_durationn = 120 * pirate_duration[thisNote];
            tone(10, pirate_melody[thisNote],pirate_durationn);
            delay(pirate_durationn +30);
	  }
          break;
        }
        case 6:
        {        
          lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 18; thisNote++) 
          {
            int starwars_durationn = 120 * starwars_duration[thisNote];
            tone(10, starwars_melody[thisNote],starwars_durationn);
            delay(starwars_durationn +30);
           }
           break;
        }
         case 7:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 18; thisNote++) 
          {
            int underworld_durationn = 120 * underworld_duration[thisNote];
            tone(10, underworld_melody[thisNote],underworld_durationn);
            delay(underworld_durationn +30);
           }
          break;
	  }
        case 8:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 19; thisNote++) 
          {
            int halelujah_durationn = 120 * halelujah_duration[thisNote];
            tone(10, halelujah_melody[thisNote],halelujah_durationn);
            delay(halelujah_durationn +30);
           }
          break;
        }
        case 9:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 18; thisNote++) 
          {
            int kotek_durationn = 200 * kotek_duration[thisNote];
            tone(10, kotek_melody[thisNote],kotek_durationn);
            delay(kotek_durationn +30);
           }
          break;
        }
        case 10:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 1; thisNote++) 
          {
            int melody_durationn = 120 * melody_duration[thisNote];
            tone(10, melody[thisNote],melody_durationn);
            delay(melody_durationn +30);
           }
          break;
        }
        case 11:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 15; thisNote++) 
          {
            int koziolek_duration_obj = 120 * koziolek_duration[thisNote];
            tone(10, koziolek_melody[thisNote],koziolek_duration_obj);
            delay(koziolek_duration_obj +30);
           }
          break;
        }
        case 12:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 36; thisNote++) 
          {
            int stolat_durationn = 120 * stolat_duration[thisNote];
            tone(10, stolat_melody[thisNote],stolat_durationn);
            delay(stolat_durationn +30);
           }
          break;
        }
        case 13:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 1; thisNote++) 
          {
            int melodyja_durationn = 120 * melodyja_duration[thisNote];
            tone(10, melodyja[thisNote],melodyja_durationn);
            delay(melodyja_durationn +30);
           }
          break;
        }
        case 14:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 32; thisNote++) 
          {
            int onatanczy_durationn = 120 * onatanczy_duration[thisNote];
            tone(10, onatanczy_melody[thisNote],onatanczy_durationn);
            delay(onatanczy_durationn +30);
           }
          break;
        }
        case 15:
        {
        lcd.begin(16, 2);
          lcd.print("Wlasnie gram:");
          lcd.setCursor(0, 1);
          lcd.print(tytuly[song]);
           for (int thisNote = 0; thisNote < 1; thisNote++) 
          {
            int melodia_durationn = 120 * melodia_duration[thisNote];
            tone(10, melody[thisNote],melodia_durationn);
            delay(melodia_durationn +30);
           }
          break;
        }
       }
     }
  


 if (prevState)  //jesli wcisniety przycisk play
 {    
   lcd.begin(16, 2);
   lcd.print("Numer melodii:");
   song = --song%MAX_SONG_NUMBER;
   if (song<0)
   {
     song=MAX_SONG_NUMBER + song;
   }
   lcd.print(song);
   lcd.setCursor(0, 1);
   lcd.print(tytuly[song]);
      delay(400);
}

 if (nextState)  //jesli wcisniety przycisk play
 {    
   lcd.begin(16, 2);
   lcd.print("Numer melodii:");
   song = ++song%MAX_SONG_NUMBER;
   lcd.print(song);
   lcd.setCursor(0, 1);
   lcd.print(tytuly[song]);      
      delay(400);
}

}

