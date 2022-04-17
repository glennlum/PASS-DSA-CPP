//  Data.h

#ifndef Data_h
#define Data_h

#include <stdio.h>
#include <iostream>
#include "sharedBuffer.h"

using namespace std;

class Data
{
public:
Data();
~Data();
char* getPlayerNm();
int getScore();
void set(char* p, int s);

private:
char playerNm[3];
int pl_score;
};

#endif
