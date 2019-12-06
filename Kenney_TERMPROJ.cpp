#include <iostream>
#include <windows.h>
using namespace std;
 
const int NUMBER_OF_NOTES = 7; //117
const int NUMBER_OF_TIMES = 7;
const int NOTE_E5 = 659.25;
const int NOTE_FS5 = 739.99;
const int NOTE_CS4 = 277.18;
const int NOTE_A5 = 880.00;
const int NOTE_GS5 = 830.61;  
const int NOTE_D4 = 293.66;
const int NOTE_E4 = 329.63;
const int NOTE_B4 = 493.88;
const int NOTE_B5 = 987.77;
int play;
 
 
 
void playSong (int freqArray [], int timeArray[], int NUMBER_OF_NOTES);
 
int main(){
    cout << "Welcome to the Christmas Music Box!" << endl;
    
    int  freqArray[NUMBER_OF_NOTES] = { NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5 };
    
    int  timeArray[NUMBER_OF_TIMES] = { 4, 7, 7, 7, 7, 7, 7, };
 
    void playSong (int freqArray [], int timeArray[], int NUMBER_OF_NOTES);
 
    return 0;
}
 
void playSong (int freqArray [], int timeArray[], int NUMBER_OF_NOTES){
    for (int play = 0; play < NUMBER_OF_NOTES; play++) {
        Beep (freqArray[play], timeArray [play]);
    }
}
