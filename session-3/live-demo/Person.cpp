#include "Person.hpp"

Person::Person()
{
        this->name = "no name";
        this->age = 0;
        this->quote = "no quote";
}

Person::~Person()
{
        // nothing to do for now
}

string Person::returnInfo() const
{
        return "Name: " + this->name + "\nAge: " + to_string(this->age) + "\nQuote: " + this->quote + "\n";
}

void Person::updateInfo(string name, int age, string quote)
{
        this->name = name;
        this->age = age;
        this->quote = quote;
}

ostream &operator<<(ostream &os, const Person &P)
{
        return os << P.returnInfo();
}

istream &operator>>(istream &is, Person &P)
{
        string name, age, quote;
        getline(is, name, ',');
        getline(is, age, ',');
        getline(is, quote);
        P.updateInfo(name, stoi(age), quote); // stoi - converts string to integer
        return is;
}
