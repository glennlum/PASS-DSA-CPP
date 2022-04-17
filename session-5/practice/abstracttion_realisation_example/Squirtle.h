//  Squirtle.h

#ifndef Squirtle_h
#define Squirtle_h

#include <stdio.h>
#include <iostream>
#include "Pokemon.h"

using namespace std;

class Squirtle : public Pokemon
{
public:
Squirtle();
~Squirtle();
int skillAndChance();
void attack();
void incurDamage();
};

#endif
