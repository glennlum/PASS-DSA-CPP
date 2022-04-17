//  Dog.h

#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "Animal.h"
using namespace std;

//--------------------------------------
//  Dog Class (child)
//  We say Dog is a 'specialisation' of animal class
//  All methods have been written as inline functions.
//  What are inline functions?
//  Visit: https://www.geeksforgeeks.org/inline-functions-cpp/
//  What is public,private and protected inheritance?
//  Visit: https://www.programiz.com/cpp-programming/public-protected-private-inheritance
//--------------------------------------

class Dog : public Animal // dog inherits animal class (public inheritance)
{

public:

Dog()
{
        cout<<"<Dog> Hello!"<<endl;

}

~Dog()
{
        cout<<"<Dog> Bye!"<<endl;

}

void eat()
{
        cout<<"<Dog> Arf,Arf,Yum Yum"<<endl;
}

void bark()
{
        cout<<"<Dog> Woof-Woof"<<endl;
}

private:
int value;

};

#endif /* DOG_H */
