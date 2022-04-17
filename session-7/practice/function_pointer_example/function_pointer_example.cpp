//  function_pointer_example.cpp

#include <iostream>
#include <stdio.h>

using namespace std;

float add (float x, float y);
float multiply (float x, float y);
float divide (float x, float y);
void callBackFunc(float x, float y, void (*funcPtr)());
void callMeMaybe ();

int main(void)
{
        //1. Function Pointers
        float x = 11.10;
        float y = 7.55;
        float (*funcPtr)(float,float)={};
        //A Function Pointer ('={}' means currently pointing to nothing)
        float (*funcPtrArr[])(float,float)={add,multiply,divide};
        //A Function Pointer Array

        string funcName[]={"+","x","/"};

        for (int i=0; i<3; i++)
        {
                funcPtr=funcPtrArr[i];
                //during each loop a new function is assigned to funcPtr
                cout<<x<<" "<<funcName[i]<<" "<<y<<" = ";
                cout<<funcPtr(x,y)<<endl;
                //function call using funcPtr
        }

        //2. Callback Functions
        callBackFunc(x,y,callMeMaybe);

        return 0;
}

/*
   About Callback functions:
   In simple language, if a reference of a function is
   passed to another function as an argument it is called
   a Callback function. In C++, a callback function is
   a function that is called through a function pointer
   inside of another function. More on callback functions:
   https://www.geeksforgeeks.org/callbacks-in-c/
 */

void callBackFunc(float x, float y, void (*funcPtr)())
{
        if(x>20 && y>30)
        {
                funcPtr(); //performs call back
        }
}

void callMeMaybe ()
{
        cout<<"Why, hello there..."<<endl;
}

float add (float x, float y)
{
        return x+y;
}

float multiply (float x, float y)
{
        return x*y;
}

float divide (float x, float y)
{
        return x/y;
}
