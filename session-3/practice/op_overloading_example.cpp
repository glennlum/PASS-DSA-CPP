//  op_overloading_example.cpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

int main(void)
{
        Person p1;
        Person p2;
        Person p3;
        Person p4;

        cout<<"Enter person 1's name and age (ex.Tommy Lee Jones,55): ";
        cin>>p1;
        cout<<"<p1> "<<p1;

        cout<<"Enter person 2's name and age (ex.Tommy Lee Jones,55): ";
        cin>>p2;
        cout<<"<p2> "<<p2;

        p3=p2;
        cout<<"<p3> "<<p3;

        ifstream infile ("data.txt");
        string quote;
        if(infile.is_open())
        {
                infile>>p4;
                infile.ignore();
                getline(infile,quote,'!');
        }
        else
        {
                cout<<"Error Reading From File";
        }
        cout<<"<p4> "<<p4<<quote<<endl;

        return 0;
}
