//  Animal.h

#ifndef ANIMAL_H
#define ANIMAL_H

#include <stdio.h>
using namespace std;

//--------------------------------------
//  Animal Class (parent)
//  The methods have been written as inline functions (shorter code)
//  Learn more about inline functions here: http://www.cplusplus.com/articles/2LywvCM9/
//--------------------------------------

class Animal
{

public:

Animal()
{
        value=0;
}

~Animal(){
}

void eat()
{
        cout<<"Animal Eat Yum Yum"<<endl;
}

void move()
{
        value++;
}

private:
int value;

};

#endif /* ANIMAL_H */
