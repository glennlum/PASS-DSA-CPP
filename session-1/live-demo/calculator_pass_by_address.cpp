#include <iostream>

/* Forward declaration */

/* Collection of methods for a simple calculator */
float add(float *firstValue, float *secondValue);
float subtract(float *firstValue, float *secondValue);
float multiply(float *firstValue, float *secondValue);
float divide(float *firstValue, float *secondValue);
void printResult(const float &result);

/* Methods for debugging */
void showVariableMemAddress(const float &variable);
void showVariableContents(const float &variable);
void showPointerMemAddress(const float *pointer);
void showPointerContents(const float *pointer);
void showDereferencedPointer(const float *pointer);

/* Method to clean up heap memory */
void cleanUpHeapMemory(float *pointer);

/* Program executes here */
int main(void)
{
    /* Run a simple test */

    // Initialise variables in stack memory
    float firstValue = 10;
    showVariableContents(firstValue);
    showVariableMemAddress(firstValue);

    float *pointerToFirstValue = &firstValue;
    showPointerContents(pointerToFirstValue);
    showPointerMemAddress(pointerToFirstValue);
    showDereferencedPointer(pointerToFirstValue);

    float secondValue = 4;
    showVariableContents(secondValue);
    showVariableMemAddress(secondValue);

    float *pointerToSecondValue = &secondValue;
    showPointerContents(pointerToSecondValue);
    showPointerMemAddress(pointerToSecondValue);
    showDereferencedPointer(pointerToSecondValue);

    // Test calculator methods
    printResult(add(pointerToFirstValue, pointerToSecondValue));
    printResult(subtract(pointerToFirstValue, pointerToSecondValue));
    printResult(multiply(pointerToFirstValue, pointerToSecondValue));
    printResult(divide(pointerToFirstValue, pointerToSecondValue));

    // Initialise variables in heap memory
    // To access heap memory, we will use only pointers
    float *pointerToThirdValue = new float(24);
    showPointerContents(pointerToThirdValue);
    showPointerMemAddress(pointerToThirdValue);
    showDereferencedPointer(pointerToThirdValue);

    float *pointerToFourthValue = new float(9);
    showPointerContents(pointerToFourthValue);
    showPointerMemAddress(pointerToFourthValue);
    showDereferencedPointer(pointerToFourthValue);

    // Test calculator methods once more
    printResult(add(pointerToThirdValue, pointerToFourthValue));
    printResult(subtract(pointerToThirdValue, pointerToFourthValue));
    printResult(multiply(pointerToThirdValue, pointerToFourthValue));
    printResult(divide(pointerToThirdValue, pointerToFourthValue));

    //Deallocate the heap memory used
    cleanUpHeapMemory(pointerToThirdValue);
    cleanUpHeapMemory(pointerToFourthValue);
    return 0;
}

/* Method implementation */

/* Collection of methods for a simple calculator */
float add(float *firstValue, float *secondValue)
{
    return *firstValue + *secondValue;
}

float subtract(float *firstValue, float *secondValue)
{
    return *firstValue - *secondValue;
}

float multiply(float *firstValue, float *secondValue)
{
    return *firstValue * *secondValue;
}

float divide(float *firstValue, float *secondValue)
{
    return *firstValue / *secondValue;
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

/* Method to clean up heap memory */
void cleanUpHeapMemory(float *pointer)
{
    //Deallocate the memory space that the pointer is pointing to
    delete pointer;
    //Once the memory space is returned to the system, ensure the
    //pointer does not point to the deallocated memory space
    //by setting its value to 'null'
    pointer = nullptr;
}