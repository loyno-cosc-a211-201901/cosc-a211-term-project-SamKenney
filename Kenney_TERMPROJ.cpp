#include <iostream>
#include <windows.h>
using namespace std;
 
const int NUMBER_OF_NOTES = 7; //117
const int NUMBER_OF_TIMES = 7;
const double NOTE_E5 = 659.25;
const double NOTE_FS5 = 739.99;
const double NOTE_CS4 = 277.18;
const double NOTE_A5 = 880.00;
const double NOTE_GS5 = 830.61;  
const double NOTE_D4 = 293.66;
const double NOTE_E4 = 329.63;
const double NOTE_B4 = 493.88;
const double NOTE_B5 = 987.77;
int play;
 
 
 
  
 
int main(){
    cout << "Welcome to the Christmas Music Box!" << endl;
    
    double freqArray[NUMBER_OF_NOTES] = { NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_CS4, NOTE_A5, NOTE_FS5, NOTE_E5 };
    
    double timeArray[NUMBER_OF_TIMES] = {.004, .007, .007, .007, .007, .007, .007, };
 
    Beep(freqArray, NUMBER_OF_NOTES);
 
    Beep(timeArray, NUMBER_OF_TIMES);
 
    return 0;
}
 
bool Beep (double freqArray[], double song){
    cout << "The Song is Playing! " << endl;
    for (int play = 0; play < song; play++)
    {
        cout << freqArray[play];
        cout << endl;
    }
    return true;
};
