//  Pokemon.h

#ifndef Pokemon_h
#define Pokemon_h

#include <stdio.h>
#include <iostream>

/*
   Sometimes implementation of all function cannot be provided
   in a base class because we don’t know the implementation.

   Such a class is called abstract class (or Abstraction).

   More on Abstract classes and Pure Virtual Functions:
   Visit: https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
 */

using namespace std;

class Pokemon
{
public:
/*
   An abstracted class is a class that is never instantiated.
   A class is abstract if it has at least one pure virtual function.

   A pure virtual function (or abstract function) in C++
   is a virtual function for which we don’t have implementation,
   we only declare it. A pure virtual function is declared by
   assigning 0 in declaration. See the following example.

   In some cases where there is no other virtual methods except the
   destructor you have to make it pure vitrual in order to prevent
   the creation of the objects of that class.

   A Concrete class inheriting from an Abstract class is called a Realisation.
 */
Pokemon();
virtual ~Pokemon() = 0;
virtual int skillAndChance() = 0;
virtual void attack() = 0;
virtual void incurDamage() = 0;
bool isKnockedOut();
void speak();
void show();

string name;
string call;
int level;
int hp;
};

#endif
