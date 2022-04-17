//  shallow_copy_example.cpp
//  Description: Demonstrates a shallow copy using the Pointer class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include <iostream>
#include "Pointer.h"

int main(void)
{
   
    Pointer ptr1;
    Pointer ptr2;
    
    ptr1.set (89);
    
    Pointer ptr3(ptr1);
    // calls the default copy constructor
    // Shallow copy executed
    
    ptr2 = ptr1;
    // calls the default assignment(=) operator
    // Shallow copy executed
    
    
    cout << "Pointer 1:" << endl;
    cout << ptr1;
    cout << endl;
    
    cout << "Pointer 2:" << endl;
    cout << ptr2;
    cout << endl;
    
    cout << "Pointer 3:" << endl;
       cout << ptr3;
       cout << endl;
    
    //Ptr 1,2 and 3 have the same memory address
    //They are accessing the same value in memory
    //What problems will this cause?
    
    //An error SIGABRT is generated, why is that so?
    //Hint: clear() function is trying to deallocate
    //the same memory space multiple times.

    return 0;
}
