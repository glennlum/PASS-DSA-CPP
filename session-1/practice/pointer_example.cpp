//  pointer_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
        //Pointer to stack memory

        int x = 10;
        int* p;
        p=&x;
        cout<<x<<endl;  //prints value stored in x;
        cout<<*p<<endl; //prints value stored in x (use * dereference operator);
        cout<<&x<<endl; //prints memory address of x
        cout<<p<<endl;  //prints memory address of x
        cout<<&p<<endl; //prints memory address of p
        cout<<endl;

        //Pointer to heap memory

        int* z = new int;
        *z = 25;
        cout<<*z<<endl; //prints int value stored in heap;
        cout<<z<<endl;  //prints memory address of int value stored in heap
        cout<<&z<<endl; //prints memeory address of p
        delete z;       //deallocate memory in heap
        z=NULL;         //set NULL pointer

        //cout<<*z<<endl;   //doing this will cause an error (why?)
}
