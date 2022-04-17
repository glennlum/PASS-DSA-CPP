//  person_test.cpp

#include <stdio.h>
#include <iostream>
#include "Person.h"

using namespace std;

int main (void)
{
    cout<<"Test1:"<<"default constructor"<<endl;
    Person p1;
    cout<<p1<<endl;

    cout<<"Test2:"<<"non-default constructor"<<endl;
    Person p2("Sam",25);
    cout<<p2<<endl;

    cout<<"Test3:"<<"getName"<<endl;
    cout<<p2.getName()<<endl;
    cout<<p2<<endl;

    cout<<"Test4:"<<"getAge"<<endl;
    cout<<p2.getAge()<<endl;
    cout<<p2<<endl;

    cout<<"Test5:"<<"setName"<<endl;
    p2.setName("Jill");
    cout<<p2<<endl;

    cout<<"Test6:"<<"setAge"<<endl;
    p2.setAge(45);
    cout<<p2<<endl;
}
