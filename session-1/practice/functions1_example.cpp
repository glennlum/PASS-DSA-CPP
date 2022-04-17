//  functions1_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

void sayHi_1();             //void function
string sayHi_2();           //function with return value
void sayHi_3(string s);     //parameterized void function
string sayHi_4 (string s);  //parameterized function w return value

int main(void)
{
        sayHi_1();

        string s = sayHi_2();
        cout<<s<<endl;

        sayHi_3("Shirley");

        cout<<sayHi_4("Harry")<<endl;

        return 0;
}

void sayHi_1()
{
        cout<<"Hello"<<endl;
}

string sayHi_2()
{
        string str = "Hello";
        return str;
}

void sayHi_3(string s)
{
        cout<<"Hello, ";
        cout<<s<<endl;
}

string sayHi_4 (string s)
{
        string str = "Hello, "+s;
        return str;
}
