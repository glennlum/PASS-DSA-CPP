//  array_example.cpp

 #include <stdio.h>
 #include <iostream>

using namespace std;

void display_1 (int* x, int size);
void display_2 (int* x, int size);
void increment (int* x, int size);
int* copy (int* x, int size);

int main(void)
{
        int arr[5] = {1,2,3,4,5};

        display_1(arr,5);
        display_2(arr,5);

        increment(arr,5);
        display_1(arr,5);

        int* arrCpy = copy(arr,5);
        increment(arrCpy,5);

        display_1(arrCpy,5);
        display_1(arr,5);

        delete[] arrCpy;
        arrCpy=NULL;
}

void display_1 (int* x, int size)
{
        for(int i=0; i<size; i++)
        {
                cout<<x[i]<<" ";
        }
        cout<<endl;
}

void display_2 (int* x, int size)
{
        for(int i=0; i<size; i++)
        {
                cout<<*(x+i)<<" ";
        }
        cout<<endl;
}

void increment (int* x, int size)
{
        for (int i=0; i<size; i++)
        {
                x[i]++;
        }
}

int* copy (int* x, int size)
{
        int* newArr = new int[size];

        for (int i=0; i<size; i++)
        {
                newArr[i]=x[i];
        }
        return newArr;
}
