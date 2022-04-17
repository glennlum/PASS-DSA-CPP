//  Time.h

#ifndef Time_h
#define Time_h

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Time
{

public:
Time();
~Time();
int gethr() const;
void set(int h, int m);
void increment(int mins);
void show()const;

private:
int hr;
int min;
};

#endif
