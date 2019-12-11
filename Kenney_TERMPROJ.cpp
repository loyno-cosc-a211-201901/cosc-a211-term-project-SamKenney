#include <iostream>
#include <windows.h>
using namespace std;
 
const int NUMBER_OF_NOTES = 117; 
const int NUMBER_OF_TIMES = 117;
const int NUMBER_OF_SLEEP = 117;
const int NOTE_E5 = 659;
const int NOTE_FS5 = 740;
const int NOTE_CS4 = 277;
const int NOTE_A5 = 880;
const int NOTE_GS5 = 831;  
const int NOTE_D4 = 294;
const int NOTE_E4 = 330;
const int NOTE_B4 = 494;
const int NOTE_B5 = 988;
const int Q_NOTE = 400;
const int SOMETHING_NOTE = 1000;
const int Half_NOTE = 1600;
const int Whole_NOTE = 3200;


 
 
 
void playSong (int freqArray [], int timeArray[],  int NUMBER_OF_NOTES);

//void rest (int timeArray[]);

 
int main(){
    cout << "Welcome to the Christmas Music Box!" << endl;
    
    int  freqArray[NUMBER_OF_NOTES] = { NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A5, NOTE_GS5, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_CS4,  NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A5, NOTE_GS5, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_B5, NOTE_A5, NOTE_FS5, NOTE_FS5, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_E5, NOTE_D4, NOTE_FS5, NOTE_E5, NOTE_D4, NOTE_CS4, NOTE_B4, NOTE_CS4, NOTE_E4, NOTE_FS5, NOTE_GS5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_A5, NOTE_GS5, NOTE_FS5, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A5, NOTE_GS5, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_B5, NOTE_A5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_B5, NOTE_A5 };
    
    int  timeArray[NUMBER_OF_TIMES] = { Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE, Q_NOTE };


 
    playSong (freqArray, timeArray, NUMBER_OF_NOTES);
    
    //rest (timeArray);

    
   cout << "All Done" << endl;


 
    return 0;
}
 
void playSong (int freqArray [], int timeArray[],  int NUMBER_OF_NOTES){

    int play;

    for (play = 0; play < NUMBER_OF_NOTES; play++) {    
        cout << freqArray[play] << endl;
        cout << "The play counter is now: " << play << endl;
        Beep (freqArray[play], timeArray[play]); 
        Sleep(timeArray[play]); 
    }

    cout << freqArray[play] << endl;
    cout << "The play counter is now: " << play << endl;
    Beep (NOTE_A5, Q_NOTE);
    Sleep(timeArray[Q_NOTE]); 
}

//void rest (int timeArray[]){

  //  int pause;

    //for (pause = 0; pause < NUMBER_OF_TIMES; pause++){
      //  cout << "Sleep" << endl; 
        //Sleep(timeArray[pause]);
   // }
//}

