#ifndef Person_hpp
#define Person_hpp

#include <iostream>

using namespace std;

class Person
{
    friend ostream &operator<<(ostream &os, const Person &p);

public:
    Person();
    Person(string fn, string ln);
    ~Person();
    string getFirstName();
    string getLastName();

private:
    string firstName;
    string lastName;
};

#endif
