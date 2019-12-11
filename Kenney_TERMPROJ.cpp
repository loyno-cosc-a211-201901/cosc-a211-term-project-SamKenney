#include <iostream>
#include <windows.h>
using namespace std;
 
const int NUMBER_OF_NOTES = 117; //117
const int NUMBER_OF_TIMES = 117;
//const int NUMBER_OF_SLEEP = 117;
const int NOTE_E5 = 659;
const int NOTE_FS5 = 740;
const int NOTE_CS4 = 277;
const int NOTE_A5 = 880;
const int NOTE_GS5 = 831;  
const int NOTE_D4 = 294;
const int NOTE_E4 = 330;
const int NOTE_B4 = 494;
const int NOTE_B5 = 988;
int play;
 
 
 
void playSong (int freqArray [], int timeArray[],  int NUMBER_OF_NOTES);

//void rest(int sleepArray []);
 
int main(){
    cout << "Welcome to the Christmas Music Box!" << endl;
    
    int  freqArray[NUMBER_OF_NOTES] = { NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A5, NOTE_GS5, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_CS4,  NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A5, NOTE_GS5, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_B5, NOTE_A5, NOTE_FS5, NOTE_FS5, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_E5, NOTE_D4, NOTE_FS5, NOTE_E5, NOTE_D4, NOTE_CS4, NOTE_B4, NOTE_CS4, NOTE_E4, NOTE_FS5, NOTE_GS5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_A5, NOTE_GS5, NOTE_FS5, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A5, NOTE_GS5, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_B4, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_B5, NOTE_A5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_B5, NOTE_A5 };
    
    int  timeArray[NUMBER_OF_TIMES] = { 400, 400, 400, 400, 400, 400, 1600, 400, 400, 400, 400, 400, 400, 1600, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500 };

   // int sleepArray[NUMBER_OF_SLEEP] = { 500, 500, 500, 500, 300, 300, 300 };
 
    playSong (freqArray, timeArray, NUMBER_OF_NOTES);

    //rest(sleepArray);
 
    return 0;
}
 
void playSong (int freqArray [], int timeArray[],  int NUMBER_OF_NOTES){
    for (int play = 0; play < NUMBER_OF_NOTES; play++) {
        Beep (freqArray[play], timeArray[play]);
    }
}

//void rest(int sleepArray []) {
  //  for (play = 0; play < NUMBER_OF_SLEEP; play++) {
    //    Sleep(sleepArray[play]);
    //}
    
//}
