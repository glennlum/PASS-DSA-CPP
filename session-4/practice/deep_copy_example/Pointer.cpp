//  Pointer.cpp

#include "Pointer.h"

Pointer:: Pointer(const Pointer &initialiser)
{
        m_ptr=NULL;
        copy (initialiser);
}

void Pointer::clear()
{
        if (m_ptr!=NULL)
        {
                delete m_ptr;
        }
        m_ptr=NULL;
}

bool Pointer:: copy (const Pointer &rhs)
{
        if (rhs.m_ptr != NULL)
        {
                return set (*(rhs.m_ptr));
        }
        else
        {
                return false;
        }
}

bool Pointer:: set(int number)
{
        if (m_ptr == NULL)
        {
                m_ptr=new int;
        }
        if (m_ptr==NULL)
        {
                return false;
        }
        else
        {
                *m_ptr=number;
                return true;
        }
}

ostream& operator << (ostream &ostr, const Pointer &pointer)
{
        ostr << "m_ptr is stored at location: " << &(pointer.m_ptr)
             << endl;
        ostr << "m_ptr points to location: " << pointer.m_ptr << endl;
        ostr << "contents of location is: " << *pointer.m_ptr << endl;
        return ostr;
}

Pointer& Pointer::operator = (const Pointer &rhs)
{
        copy (rhs);
        return *this;
}
