//  Eevee.h

#ifndef Eevee_h
#define Eevee_h

#include <stdio.h>
#include <iostream>
#include "Pokemon.h"

using namespace std;

class Eevee : public Pokemon
{
public:
Eevee();
~Eevee();
int skillAndChance();
void attack();
void incurDamage();
};
#endif
