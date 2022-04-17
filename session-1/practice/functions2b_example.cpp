//  functions2b_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

int addFive_1(int* x); //return-by-value
int& addFive_2(int* x);//return-by-reference
int* addFive_3(int* x);//return-by-address

//For each of the above functions,can you describe
//what is happening at the level of memory?

int main(void)
{
        int* p = new int(5);

        cout<<*p<<endl;

        cout<<addFive_1(p)<<endl;

        cout<<*p<<endl;

        return 0;

}


int addFive_1(int* x)
{
        int n = *x+5;
        return n; //returns the value of x
}

int& addFive_2(int* x)
{
        int* n = x;
        *n+=5;
        return *n; //returns a reference to x
}

int* addFive_3(int* x)
{
        int* n = x;
        *n+=5;
        return n; //returns the address of x
}
