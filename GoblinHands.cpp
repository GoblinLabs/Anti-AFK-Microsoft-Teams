#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <chrono>
#include <thread>
#include "wtypes.h"
using namespace std;

int waitTime = 1000;
int waitTimeInSec = waitTime / 1000;

// Get the horizontal and vertical screen sizes in pixel
void GetDesktopResolution(int& horizontal, int& vertical)
{
   RECT desktop;
   // Get a handle to the desktop window
   const HWND hDesktop = GetDesktopWindow();
   // Get the size of screen to the variable desktop
   GetWindowRect(hDesktop, &desktop);
   // The top left corner will have coordinates (0,0)
   // and the bottom right corner will have coordinates
   // (horizontal, vertical)
   horizontal = desktop.right;
   vertical = desktop.bottom;
}

int main(){
    cout << "\nMade Wih Love by @GoblinLabs on GiHub.\n";
    cout << "\nScript Avviato!" << " " << "Il Cursore si muove in modo Casuale ogni " << waitTime << "ms (" << waitTimeInSec << " Secondo).";
    
    int horizontal = 1920;
    int vertical = 1080;
    GetDesktopResolution(horizontal, vertical);
    
    while (1 == 1){
    cout << "\nPremi \"Ctrl + C\" per Fermare lo Script!\n";
    //cout << horizontal << '\n' << vertical << '\n'; //DEBUG
    
    while (1 == 1){
        int rangeh = 1 - vertical + 1;
        int h = rand() % rangeh + 10;
        //cout << "\n"<< h; //DEBUG
    
        int rangew = 1 - horizontal + 1;
        int w = rand() % rangew + 10;
        //cout << "\n"<< w; //DEBUG
    
        SetCursorPos(w,h);
        
        this_thread::sleep_for(chrono::milliseconds(waitTime));
        }
    }
}