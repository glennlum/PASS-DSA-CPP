//  Person.h (v2)

#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>
#include <iostream>

using namespace std;

class Person
{

public:
Person();
Person(string nm, int ag);
~Person();
string getName() const;
int getAge() const;
void setName(string nm);
void setAge(int ag);
void operator = (const Person &P);

private:
string name;
int age;
};

ostream& operator << (ostream &os, const Person &P);
istream& operator >> (istream &is, Person &P);

#endif
