//  GUI.h

#ifndef GUI_h
#define GUI_h

#include <stdio.h>
#include <iostream>

#include "Data.h"
#include "sharedBuffer.h"

using namespace std;

class GUI
{

public:
GUI();
~GUI();
void showHiScore(Data* dataArr);
void showCurrScore();
void showGameOver();
void showEnterNickName();
void showStartScreen();
void showCoinLeft();
void takeCoinLeft();
void noCoinLeft();
void showCoinRight();
void takeCoinRight();
void noCoinRight();
void showCoinAbove();
void takeCoinAbove();
void noCoinAbove();
};

#endif
