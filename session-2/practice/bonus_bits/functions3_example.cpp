//  functions3_example.cpp

#include <iostream>
#include "Dog.h"
#include "Animal.h"
using namespace std;

//--------------------------------------

//  Additional practice with functions

//--------------------------------------

void display(int a, int b);
void display(int a);

void swapByValue (int a, int b);
void swapByAddress (int * a, int * b);
void swapByReference (int &a, int &b);

int returnByValue (int a, int b);
int* returnByAddress (int a, int b);
int& returnByReference (int a, int b, int& c);

//--------------------------------------
//  3 Function return types
//--------------------------------------

int main(void)
{
        //Values initialised in main block
        int x = 5;
        int y = 10;

        //--------------------------------------
        //  void functions
        //--------------------------------------
        cout<<"Void functionn demo: "<<endl;
        display(x,y);

        //--------------------------------------
        //  3 Types of function parameters
        //--------------------------------------

        cout<<"Pass by value demo: "<<endl;
        swapByValue (x,y); // Pass by value - does not alter actual values
        cout<<x<<" "<<y<<endl;

        cout<<"Pass by address demo: "<<endl;
        swapByAddress (&x, &y); //Pass by address - alters actual values
        cout<<x<<" "<<y<<endl;

        cout<<"Pass by reference demo: "<<endl;
        swapByReference (x, y); //Pass by refrence - alters actual values
        cout<<x<<" "<<y<<endl;

        //--------------------------------------
        //  3 Function return types
        //--------------------------------------

        cout<<"Return by value demo: "<<endl;
        cout<<returnByValue(x,y)<<endl; //Return by value - creates copy of the result

        cout<<"Return by address demo: "<<endl;
        int *p = returnByAddress(x,y); //Return by address - returns address of actual result
        cout<<p<<endl;
        cout<<*p<<endl;
        delete p; //remember to deallocate memory
        p=nullptr;

        cout<<"Return by reference demo: "<<endl;
        int j = 0;
        int &k = returnByReference(x,y,j); //Return by reference - returns reference to actual result
        // A very clunky way to make k reference j
        cout<<j<<endl;
        j++;
        cout<<k<<endl;
        // A good way to understand pass by reference

        //--------------------------------------
        //  Function Overloading

        //Function overloading is a feature in C++ where
        //one or more functions can have the same name but
        //different parameters.Function overloading can be
        //considered as an example of polymorphism in C++.

        //--------------------------------------
        cout<<"Function overloading demo: "<<endl;
        display (x);
        display (x,y);

        //--------------------------------------
        //  Function Overriding

        //Function overriding is a feature that allows us to have a
        //same function in child class which is already present in the
        //parent class. A child class inherits the data members and member
        //functions of parent class, but when you want to override a
        //functionality in the child class then you can use function overriding.
        //It is like creating a new version of an existing function, in the child class.
        //--------------------------------------

        cout<<"Function overriding demo: "<<endl;

        //parent class
        Animal a;
        a.eat();

        //child class
        Dog d;
        d.eat(); // overridden 'eat' method in derived class
        d.bark();

        return 0;
}

//--------------------------------------

//  Implementation

//--------------------------------------

//void functions
void display(int a, int b)
{
        cout<<a<<" "<<b<<endl;
}
// overloaded display function
void display(int a)
{
        cout<<a<<endl;
}

//Pass by Value
void swapByValue (int a, int b)
{
        int temp;
        temp=a;
        a=b;
        b=temp;
        //function makes a copy of parameters passed in
        //so actual values are never modified
}

//Pass by Address
void swapByAddress (int * a, int * b)
{
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
        //function takes two memory addresses and dereferences(*) them
        //parameter passed in is the address of an actual value in memory
        //hence actual value gets modified
}

//Pass by reference
void swapByReference (int &a, int &b)
{
        int temp;
        temp=a;
        a=b;
        b=temp;
        //function takes in a reference(&) to an actual value in memory
        //actual value gets modified
}

//Return by Value
int returnByValue (int a, int b)
{
        return a*b;
        //before terminating the function creates a
        //new int variable in stack memory containing the result
        //the new int variable is returned to the caller
}

//Return by Address
int* returnByAddress (int a, int b)
{
        int *ptr = new int; //heap memory persists after the function terminates
        *ptr = a*b;
        return ptr;
        //returns an address to the resulting value in heap memeory
}

// Return by reference
int& returnByReference (int a, int b, int& c) // c exists outside the function
{
        c=a*b; //c is modified to reflect the result
        return c;
        //returns a reference of int varaible c

}
