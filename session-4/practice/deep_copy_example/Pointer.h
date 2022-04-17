//  Pointer.h

#ifndef POINTER_H
#define POINTER_H

#include <iostream>
using namespace std;

class Pointer
{
public:
Pointer()
{
        m_ptr=NULL;
};

Pointer (const Pointer &initialiser);

~Pointer()
{
        clear();
}

bool copy  (const Pointer &rhs);
void clear();
bool set(int number);
friend ostream& operator<< (ostream &ostr, const Pointer & pointer);
Pointer& operator = (const Pointer &rhs);

private:
int *m_ptr;
};

#endif /* POINTER_H */
