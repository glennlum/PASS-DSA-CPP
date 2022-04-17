//  functions2a_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

void addFive_1(int x); //pass-by-value
void addFive_2(int &x);//pass-by-reference
void addFive_3(int *x);//pass-by-address

//For each of the above functions,can you describe
//what is happening at the level of memory?

int main(void)
{
        int n = 10;

        cout<<n<<endl;

        addFive_1(n);

        cout<<n<<endl;

        return 0;

}

void addFive_1(int x)
{
        x+=5;
}

void addFive_2(int &x)
{
        x+=5;
}

void addFive_3(int *x)
{
        (*x)+=5;
}
