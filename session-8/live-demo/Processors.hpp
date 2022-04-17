#ifndef Processors_hpp
#define Processors_hpp

using namespace std;

/* forward declaration */

template <class Type>
void print(Type &item);

template <class Type>
void increment(Type &item);

/* implementation */

template <class Type>
void print(Type &item)
{
    cout << item << " ";
}

template <class Type>
void increment(Type &item)
{
    item++;
}

#endif
