#include "Person.hpp"

Person ::Person()
{
        firstName = "Me";
        middleName = "My";
        lastName = "Mine";
}

Person ::Person(string fn, string mn, string ln)
{
        firstName = fn;
        middleName = mn;
        lastName = ln;
}

Person ::~Person()
{
}

void Person::setFristName(string fn)
{
        firstName = fn;
}
void Person::setMiddelName(string mn)
{
        middleName = mn;
}
void Person::setLastName(string ln)
{
        lastName = ln;
}
void Person::setName(string fn, string mn, string ln)
{
        firstName = fn;
        middleName = mn;
        lastName = ln;
}

string Person::getFirstName() const
{
        return firstName;
}

string Person::getMiddleName() const
{
        return middleName;
}

string Person::getLastName() const
{
        return lastName;
}

void Person::print() const
{
        cout << firstName << " "
             << middleName << " "
             << lastName;
}

bool Person::operator<(const Person &otherPerson) const
{
        if ((lastName < otherPerson.lastName) ||
            (lastName == otherPerson.lastName && middleName < otherPerson.middleName) ||
            (lastName == otherPerson.lastName && middleName == otherPerson.middleName && firstName < otherPerson.firstName))
                return true;
        else
                return false;
}

ostream &operator<<(ostream &os, const Person &p)
{
        os << p.firstName << " " << p.middleName << " " << p.lastName;
        return os;
}

istream &operator>>(istream &is, Person &p)
{
        is >> p.firstName >> p.middleName >> p.lastName;
        return is;
}
