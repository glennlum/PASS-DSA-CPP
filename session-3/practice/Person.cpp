//  Person.cpp (v2)

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

void Person::operator = (const Person& P )
{
        name=P.getName();
        age=P.getAge();
}

ostream& operator << (ostream &os, const Person &P)
{
        os<<"Name: "<<P.getName()<<" Age: "<<P.getAge()<<endl;

        return os;
}

istream& operator >> (istream &is, Person &P)
{
        string name;
        int age;

        if(is.peek()!='\n')
        {
                getline(is,name,',');
                is>>age;
        }
        else
        {
                is.ignore(1);
                getline(is,name,',');
                is>>age;
        }

        P.setName(name);
        P.setAge(age);

        return is;
}
