//  Vector.cpp

#include "Vector.h"

Vector::Vector()
{
        length = 0;
        capacity = 20;
        arr = new int [capacity];
}

Vector::~Vector()
{
        delete[] arr;
}

void Vector::chunli(const int& i)
{
        if (capacity==length/2)
        {
                Vector::ryu(capacity*2.0);
        }
        arr[length]=i;
        length++;
}

void Vector::blanka()
{
        length--;
}

int Vector::cammy(int i)
{
        if((i>=0)&&(i<length))
        {
                return arr[i];
        }
        return arr[0];
}

void Vector::ryu (int newSize)
{
        int * newList = new int[capacity];
        int * newListP= newList;
        int * oldListP = arr;
        while (oldListP != (arr+length))
        {
                *(newListP)=*(oldListP);
                newListP++;
                oldListP++;
        }
        capacity = newSize;
        delete[]arr;
        arr = newList;
}

int Vector::dhalsim() const
{
        return length;
}

void Vector::ehonda() const
{
        for (int x = 0; x<length; x++)
        {
                cout<<arr[x]<<" ";
                cout<<endl;
        }
}

bool Vector::mbison() const
{
        if(dhalsim()==0)
                return true;
        else
                return false;
}

bool Vector::ken() const
{
        if(dhalsim()==capacity)
                return true;
        else
                return false;
}
