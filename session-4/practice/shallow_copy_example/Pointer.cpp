//  Pointer.cpp
//  Description: implementation of the Pointer class (shallow copy version)
//  Created by Glenn Lum on 30/7/19.
//  Copyright © 2019 Glenn Lum. All rights reserved.
//

#include "Pointer.h"

void Pointer::clear()
{
    if(m_ptr!=NULL)
    {
        delete m_ptr; // deallocate pointer memory
    }
    m_ptr=NULL; // set pointer to NULL
}


bool Pointer:: set(int number)
{
    if (m_ptr == NULL)
    {
        m_ptr=new int; // new operator creates integer mmemory space in heap
    }
    
    if (m_ptr==NULL)
    {
        return false; // no more heap memory available
    }
    else
    {
        *m_ptr=number; // copy the number value into newly created heap memory
        return true; // true if operation in successful
    }
}

// Overloaded output operator
ostream& operator << (ostream &ostr, const Pointer &pointer)
{
    ostr << "m_ptr is stored at location: " << &(pointer.m_ptr)
    << endl;
    ostr << "m_ptr points to location: " << pointer.m_ptr << endl;
    ostr << "contents of location is: " << *pointer.m_ptr << endl;
    
    return ostr;
}



