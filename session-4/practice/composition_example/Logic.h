//  Logic.h

#ifndef Logic_hpp
#define Logic_hpp

#include <stdio.h>
#include <iostream>
#include "Data.h"
#include "sharedBuffer.h"

using namespace std;

class Logic
{
public:
Logic();
~Logic();
void addnSort(Data* dataArr, Data d);
void increment (int& n);
void decrement (int& n);
void reset (int& n, int newVal);
};

#endif
