#include <iostream>

using namespace std;

float add(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);
void callBack(float x, float y, void (*funcPtr)());
void callMeMaybe();

int main(void)
{
        float x = 11.10;
        float y = 7.55;

        /* 1. Function pointers and callback functions */

        // Declare a function pointer
        void (*funcPtr1)();
        // Get function pointer to point to a function
        funcPtr1 = callMeMaybe;
        // Perform a call back
        callBack(x, y, funcPtr1);

        /* 2. Function pointer arrays */

        // Declare a function pointer array
        float (*funcPtrArr[])(float, float) = {add, multiply, divide};
        // Declare an array of symbols
        string symbols[] = {"+", "x", "/"};

        for (int i = 0; i < 3; i++) // Use a loop to perform different mathematical operations on values x and y
        {
                cout << x << " " << symbols[i] << " " << y << " = ";
                cout << funcPtrArr[i](x, y) << endl;
        }
        return 0;
}

void callBack(float x, float y, void (*funcPtr)())
{
        if (x > 0 && y > 0)
        {
                funcPtr(); // call back
        }
}

void callMeMaybe()
{
        cout << "Why, hello there..." << endl;
}

float add(float x, float y)
{
        return x + y;
}

float multiply(float x, float y)
{
        return x * y;
}

float divide(float x, float y)
{
        return x / y;
}
