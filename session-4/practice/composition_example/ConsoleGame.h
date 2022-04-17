//  ConsoleGame.h

#ifndef ConsoleGame_h
#define ConsoleGame_h

#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include "Data.h"
#include "GUI.h"
#include "Logic.h"

using namespace std;

class ConsoleGame
{

public:
ConsoleGame();
~ConsoleGame();
void run();

private:
//Game's GUI Unit (1..1)
GUI screen;
//Game's Logic Unit (1..1)
Logic processor;
//Game's Data Units (0..3)
//Stores a maximum of 3 high scores
Data highScores[3];
};

#endif
