//  Person.h

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
friend ostream& operator << (ostream&, const Person&);
friend istream& operator >> (istream&, Person&);

public:
Person();
Person ( string fn, string mn, string ln);
~Person();
void setFristName (string fn);
void setMiddelName (string mn);
void setLastName (string ln);
void setName (string fn, string mn, string ln);
string getFirstName() const;
string getMiddleName() const;
string getLastName() const;
void print() const;
bool operator < (const Person &otherPerson) const;

private:
string firstName;
string middleName;
string lastName;
};

#endif
