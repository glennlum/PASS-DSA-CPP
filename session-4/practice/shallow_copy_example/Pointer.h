//  Pointer.h
//  Description: declaration of the Pointer class (shallow copy vers)
//  Created by Glenn Lum on 30/7/19.
//  Copyright © 2019 Glenn Lum. All rights reserved.
//

#ifndef POINTER_H
#define POINTER_H

#include <iostream>
using namespace std;

class Pointer
{
    
public:
    
    Pointer() //inline declaration
    {
        m_ptr=NULL; // pointer set to NULL
    };

    ~Pointer() // inline declaration
    {
        clear(); // calls clear function
    }
    
    void clear(); // deallocates pointer memory and sets pointer to NULL
    
    bool set(int number); // creates a new memory space to store a number
    // returns false if memory is full
    
    friend ostream& operator<< (ostream &ostr, const Pointer & pointer);
    // Not ideal to use a friend function (for demo only)
    

private:
    
    int *m_ptr; // integer pointer
    
};


#endif /* POINTER_H */
