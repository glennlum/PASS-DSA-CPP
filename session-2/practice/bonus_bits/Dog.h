//  Dog.h

#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "Animal.h"
using namespace std;

//--------------------------------------
//  Dog Class (child)
//  The methods have been written as inline functions (shorter code)
//  Learn more about inline functions here: http://www.cplusplus.com/articles/2LywvCM9/
//--------------------------------------

class Dog : public Animal
{

public:

Dog(){
}

~Dog(){
}

void eat()     //overriding from parent class
{
        cout<<"Dog Eat Yum Yum"<<endl;
}

void bark()    //dog class specific function
{
        cout<<"Woof Woof"<<endl;
}

private:
int value;

};

#endif /* DOG_H */
