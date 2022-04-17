//  io_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
        char c;
        cout<<"Enter a char: ";
        cin>>c;
        cout<<"You entered: "<<c<<endl;
        cout<<endl;

        char cStr[20];
        cout<<"Enter a C-style string: ";
        cin>>cStr;
        cout<<"You entered: "<<cStr<<endl;
        cout<<endl;

        string s;
        cout<<"Enter a string: ";
        cin.ignore();
        getline(cin,s);
        cout<<"You entered: "<<s<<endl;
        cout<<endl;

        return 0;
}
