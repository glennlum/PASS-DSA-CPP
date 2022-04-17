#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

using namespace std;

/* Header */

template <class Type>
class Vector
{
public:
    Vector();
    ~Vector();
    void push_back(const Type &element);
    Type &at(int index);
    int size();
    int capacity();

    /* debug */
    void print_contents() const;

private:
    void resize(int new_size);

    int total_capacity;
    int current_length;
    Type *list;
};

/* Implementation */

template <class Type>
Vector<Type>::Vector()
{
    current_length = 0;
    total_capacity = 1;
    list = new Type[total_capacity];
}

template <class Type>
Vector<Type>::~Vector()
{
    delete[] list;
}

template <class Type>
void Vector<Type>::push_back(const Type &element)
{
    if ((total_capacity / 2) == current_length)
    {
        Vector::resize(total_capacity * 2.0);
    }

    list[current_length] = element;
    current_length++;
}

template <class Type>
Type &Vector<Type>::at(int index)
{
    if (index >= 0 && index < current_length)
    {
        return list[index];
    }
    throw "at() - invalid argument!";
}

template <class Type>
int Vector<Type>::size()
{
    return current_length;
}

template <class Type>
int Vector<Type>::capacity()
{
    return total_capacity;
}

template <class Type>
void Vector<Type>::print_contents() const
{
    for (int i = 0; i < current_length; i++)
    {
        cout << list[i] << ", ";
    }
    cout << endl;
    cout << "Current Length: " << current_length << " | ";
    cout << "Total Capacity: " << total_capacity << endl;
}

template <class Type>
void Vector<Type>::resize(int new_size)
{
    Type *new_list = new Type[new_size];
    // initialise a new larger array in heap
    Type *new_list_ptr = new_list;
    Type *old_list_ptr = list;
    // declare pointers to traverse the lists

    while (old_list_ptr != (list + current_length)) // loop until the end of the list
    {
        *(new_list_ptr) = *(old_list_ptr);
        // copy elements from old list to the new list
        new_list_ptr++;
        old_list_ptr++;
        // increment pointer's position
    }
    total_capacity = new_size;
    // update total capacity

    delete[] list;
    list = nullptr;
    // deallocate memory used by old array
    list = nullptr;
    list = new_list;
    // assign new array to current list
}

#endif
