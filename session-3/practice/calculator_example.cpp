//  calculator_example.cpp

#include <stdio.h>
#include <iostream>
#include "Calculator.h"

using namespace std;

int main(void)
{
        Calculator<int> c1(23,11);
        cout<<c1.add()<<endl;
        cout<<c1.sub()<<endl;

        Calculator<double> c2(23.85,11.77);
        cout<<c2.add()<<endl;
        cout<<c2.sub()<<endl;

        Calculator<float> c3(786.234,11.53401);
        cout<<c3.add()<<endl;
        cout<<c3.sub()<<endl;

        return 0;
}
