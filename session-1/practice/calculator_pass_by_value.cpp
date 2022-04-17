#include <iostream>

/* Forward declaration */

/* Collection of methods for a simple calculator */
float add(float firstValue, float secondValue);
float subtract(float firstValue, float secondValue);
float multiply(float firstValue, float secondValue);
float divide(float firstValue, float secondValue);
void printResult(const float &result);

/* Methods for debugging */
void showVariableMemAddress(const float &variable);
void showVariableContents(const float &variable);
void showPointerMemAddress(const float *pointer);
void showPointerContents(const float *pointer);
void showDereferencedPointer(const float *pointer);

/* Program executes here */
int main(void)
{
    /* Run a simple test */

    //Initialise variables in stack memory
    float firstValue = 10;
    showVariableContents(firstValue);
    showVariableMemAddress(firstValue);

    float secondValue = 4;
    showVariableContents(secondValue);
    showVariableMemAddress(secondValue);

    //Test calculator methods
    printResult(add(firstValue, secondValue));
    printResult(subtract(firstValue, secondValue));
    printResult(multiply(firstValue, secondValue));
    printResult(divide(firstValue, secondValue));
    return 0;
}

/* Method implementation */

/* Collection of methods for a simple calculator */
float add(float firstValue, float secondValue)
{
    return firstValue + secondValue;
}

float subtract(float firstValue, float secondValue)
{
    return firstValue - secondValue;
}

float multiply(float firstValue, float secondValue)
{
    return firstValue * secondValue;
}

float divide(float firstValue, float secondValue)
{
    return firstValue / secondValue;
}

void printResult(const float &result)
{
    std::cout << "Result: " << result << std::endl;
}

/* Methods for debugging */
void showVariableMemAddress(const float &variable)
{
    // Prints the address of the float variable
    std::cout << &variable << std::endl;
}

void showVariableContents(const float &variable)
{
    // Prints the data stored in the float variable
    std::cout << variable << std::endl;
}

void showPointerMemAddress(const float *pointer)
{
    // Prints the address of the pointer variable
    std::cout << &pointer << std::endl;
}

void showPointerContents(const float *pointer)
{
    // Prints the data stored in the pointer variable
    std::cout << pointer << std::endl;
}

void showDereferencedPointer(const float *pointer)
{
    // Prints the data that the pointer variable is pointing to
    std::cout << *pointer << std::endl;
}