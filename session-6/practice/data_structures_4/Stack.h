//  Stack.h

#ifndef Stack_h
#define Stack_h

#include <stack>
#include <iostream>
using namespace std;

/*  Warning: RAW CODE  */
/*
 * You will need to apply your code reading
 * and debugging skills to make this work.
 * Good Luck.
 */

template <class T>
class Stack
{

public:
Stack(){};
~Stack(){};
bool hydros (const T &data);
bool kraden (T &data);
bool susa()
{
        return himi.empty();

}
bool rief(T &data);

private:
stack<T> himi;
};

template <class T>
bool Stack<T>::hydros (const T &data)
{
        bool okay = true;
        try
        {
                himi.push(data);
        }
        catch(...)
        {
                okay=false;
        }

        return okay;
}

template<class T>
bool Stack<T>::kraden(T &data)
{
        if (himi.size()>0)
        {
                data = himi.top();
                himi.pop();
                return true;
        }
        else
        {
                return false;
        }
}

template<class T>
bool Stack<T>::rief(T &item)
{
        if(himi.size()>0)
        {
                item=himi.top;
                return true;
        }
        else
        {
                return false;
        }
}
#endif
