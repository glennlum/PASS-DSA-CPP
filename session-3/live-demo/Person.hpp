#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream> //we want to overload the methods in this library

using namespace std;

class Person
{

public:
    Person();
    ~Person();
    string returnInfo() const;
    void updateInfo(string name, int age, string quote);

private:
    string name, quote;
    int age;
};

// Overloaded operators
ostream &operator<<(ostream &os, const Person &P);
istream &operator>>(istream &is, Person &P);

#endif
