//  Person.cpp

#include "Person.h"

Person::Person()
{
        name="none";
        age=0;
}

Person::Person(string nm, int ag)
{
        name=nm;
        age=ag;
}

Person::~Person()
{
        //do nothing
}

string Person::getName() const
{
        return name;
}

int Person::getAge() const
{
        return age;
}

void Person::setName(string nm)
{
        name = nm;
}

void Person::setAge(int ag)
{
        age = ag;

}

ostream& operator << (ostream &os, const Person &P)
{
        os<<"Name: "<<P.name<<", Age: "<<P.age<<endl;
        return os;
}
