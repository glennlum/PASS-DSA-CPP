//  Vector.h (STL implementation)

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

/**
 * @class Vector
 * @brief A template vector class
 *
 *
 * @author Lum Zhi Hao Glenn
 * @version
 * 01 - Home Coded Vector Class using an Array
 * 02 - Replace Array with a STL Vector
 *
 * @date 26/05/19
 *
 */

static int MIN_SIZE=10;

template <class Type>
class Vector
{

public:
/**
 * @brief Constructs a new vector obj with intial capacity of 10
 */
Vector();
/**
 * @brief  Class Destructor
 */
~Vector();
/**
 * @brief  Insert new element to end of the list.
 * @param  i - Vector obj reference of type 'Type'
 * @pre    Vector obj must be initalised
 * @post   Contents of list are modified.
 */
bool push_back (const Type& i);
/**
 * @brief  Removes element from back of list.
 * @pre    Vector obj must be initalised
 * @post   Contents of vecotr are modified.
 */
bool pop_back ();
/**
 * @brief  Removes element from the list.
 * @pre    Vector obj must be initalised
 * @post   Contents of vector are modified.
 */
void clear();
/**
 * @brief  Returns element at a specified location in the list
 * throws out_of_range exception if index is invalid
 * @param  index - location specifier
 * @pre    Vector obj must be initalised
 */
Type& at (int index);
/**
 * @brief  Prints list elements to screen
 * separated by a space.
 * @warning Works for primitive  data types only !
 * @pre    Vector obj must be initalised
 */
void print() const;
/**
 * @brief  Returns true if list is empty
 * @pre    Vector obj must be initalised
 */
bool isEmpty() const;
/**
 * @brief  Returns number of elements
 * currently stored in the list
 * @pre    Vector obj must be initalised
 */
long size();

private:
vector<Type> vec;

};

template <class Type>
Vector<Type>::Vector()
{
        vec.reserve (MIN_SIZE);
}

template <class Type>
Vector<Type>::~Vector(){
}

template <class Type>
bool Vector<Type>::push_back(const Type & i)
{
        try
        {
                vec.push_back(i);
                return true;
        }
        catch (...)
        {
                return false;
        }
}

template <class Type>
bool Vector<Type>::pop_back()
{
        if(vec.size()>0)
        {
                vec.pop_back();
                return true;
        }
        else
        {
                return false;
        }
}

template<class Type>
void Vector<Type>::clear()
{
        vec.clear();
}

template <class Type>
Type& Vector<Type>::at (int index)
{
        return vec.at(index);
}

template <class Type>
void Vector<Type>::print() const
{
        if (vec.size()==0)
        {
                cout<<"No Data";
        }
        else
        {
                for (int index = 0; index< vec.size(); index++)
                {
                        cout<<vec.at(index)<<" ";
                }
        }
        cout<<endl;
}

template <class Type>
bool Vector<Type>::isEmpty() const
{
        return vec.empty();
}

template <class Type>
long Vector<Type>::size()
{
        return vec.size();
}

#endif /* VECTOR_H */
