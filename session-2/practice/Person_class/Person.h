//  Person.h

#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>
#include <iostream>

using namespace std;


class Person
{
friend ostream& operator << (ostream &os, const Person &P);

public:
Person();
Person(string nm, int ag);
~Person();
string getName() const;
int getAge() const;
void setName(string nm);
void setAge(int ag);

private:
string name;
int age;
};

#endif
