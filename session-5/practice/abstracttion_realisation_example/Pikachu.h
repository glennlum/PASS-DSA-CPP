//  Pikachu.h

#ifndef Pikachu_h
#define Pikachu_h

#include <stdio.h>
#include <iostream>
#include "Pokemon.h"
#include "HM03.h"

using namespace std;

class Pikachu : public Pokemon, public HM03
{
public:
Pikachu();
~Pikachu();
int skillAndChance();
void attack();
void incurDamage();
void surf();
};
#endif
