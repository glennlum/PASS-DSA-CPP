//  reference_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
        int x = 10;
        int& y = x; // y references x
        int& z = y; // z references y

        cout<<&x<<endl;
        cout<<&y<<endl;
        cout<<&z<<endl;

        x+=1;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;

        y+=1;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;

        z+=1;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;

        return 0;
}
