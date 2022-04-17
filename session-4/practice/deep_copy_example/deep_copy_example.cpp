//  deep_copy_example.cpp

#include <iostream>
#include "Pointer.h"

int main(void)
{
    Pointer ptr1;
    Pointer ptr2;

    ptr1.set (89);
    ptr2 = ptr1;
    Pointer ptr3 (ptr1);

    cout << "Pointer 1:" << endl;
    cout << ptr1;
    cout << endl;

    cout << "Pointer 2:" << endl;
    cout << ptr2;
    cout << endl;

    cout << "Pointer 3:" << endl;
    cout << ptr3;
    cout << endl;

    return 0;
}
