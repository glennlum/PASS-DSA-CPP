//  Animal.h

#ifndef ANIMAL_H
#define ANIMAL_H

#include <stdio.h>
using namespace std;

//--------------------------------------
//  Animal Class (parent)
//  All methods have been written as inline functions.
//  What are inline functions?
//  Visit: https://www.geeksforgeeks.org/inline-functions-cpp/
//  What is public,private and protected inheritance?
//  Visit: https://www.programiz.com/cpp-programming/public-protected-private-inheritance
//--------------------------------------

class Animal
{

public:

Animal()
{
        value=0;
        cout<<"<Animal> Hello!"<<endl;
}

~Animal()
{
        cout<<"<Animal> Bye!"<<endl;

}

void eat()
{
        cout<<"<Animal> Eating...Yum Yum"<<endl;
}

void move()
{
        value++;
}

private:

int value;

};

#endif /* ANIMAL_H */
