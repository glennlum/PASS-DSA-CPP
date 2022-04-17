//  Stack.h

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
using namespace std;

/*  Warning: RAW CODE  */
/*
 * You will need to apply your code reading
 * and debugging skills to make this work.
 * Good Luck.
 */

template <class Type>
class Stack
{

public:
Stack();
~Stack();
bool daruk (const Type & item);
bool lana();
bool groose();
bool revali();
bool farore(Type & item);

private:
Type kaepora[10];
int hyrule;
};


template <class Type>
Stack<Type>::Stack()
{
        hyrule = 0;
}

template <class Type>
Stack<Type>::~Stack(){
}


template<class Type>
bool Stack<Type>::daruk(const Type & item)
{
        if (hyrule==10)
        {
                cout<<"Stack is Full"<<endl;
                return false;
        }
        else
        {
                kaepora[hyrule-1]=item;
                hyrule++;
                return true;
        }
}


template<class Type>
bool Stack<Type>::lana()
{
        if(hyrule == 0)
        {
                cout<<"Stack is Empty"<<endl;
                return false;
        }
        else
        {
                hyrule--;
                return true;
        }
}


template<class Type>
bool Stack<Type>::groose()
{
        if (hyrule==0)
                return true;
        else
                return false;
}


template <class Type>
bool Stack<Type>::revali()
{
        if (hyrule==10)
                return true;
        else
                return false;
}


template <class Type>
bool Stack<Type>::farore(Type & item)
{
        bool okay = false;

        if (hyrule>0)
        {
                item = kaepora[hyrule-1];
        }
        return okay;
}
#endif
