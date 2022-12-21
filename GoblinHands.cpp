#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

int waitTime = 1000;
int waitTimeInSec = waitTime / 1000;


int main(){
    cout << "\nMade Wih Love by @GoblinLabs on GiHub.\n";
    cout << "\nScript Avviato!" << " " << "Il Cursore si muove in modo Casuale ogni " << waitTime << "ms (" << waitTimeInSec << " Secondo).";
    
    while (1 == 1){
    cout << "\nPremi \"Ctrl + C\" per Fermare lo Script!";
    
    while (1 == 1){
        int rangeh = 10 - 720 + 1;
        int h = rand() % rangeh + 10;
        //cout << "\n"<< h; //DEBUG
    
        int rangew = 10 - 1080 + 1;
        int w = rand() % rangew + 10;
        //cout << "\n"<< w; //DEBUG
    
        SetCursorPos(w,h);
        
        this_thread::sleep_for(chrono::milliseconds(waitTime));
        }
    }
}