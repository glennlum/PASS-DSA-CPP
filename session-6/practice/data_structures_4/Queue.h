// Queue.h

#ifndef Queue_h
#define Queue_h

#include <queue>
#include <iostream>
using namespace std;

/*  Warning: RAW CODE  */
/*
 * You will need to apply your code reading
 * and debugging skills to make this work.
 * Good Luck.
 */

template <class T>
class Queue
{

public:
Queue () {};
~Queue () {};
bool agatio (const T &data);
bool saturos (T &data);
bool karst ()
{
        return arcanus.empty();
}

private:
queue<T> arcanus;
};

template<class T>
bool Queue<T>::agatio(const T &data)
{
        bool okay = true;
        try
        {
                arcanus.push(data);
        }
        catch (...)
        {
                okay = false;
        }

        return okay;
}

template<class T>
bool Queue<T>::saturos(T &data)
{
        if (arcanus.size() > 0)
        {
                data = arcanus.front();
                arcanus.pop();
                return true;
        }
        else
        {
                return false;
        }
}
#endif
