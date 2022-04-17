#include <iostream>
#include "Vector.hpp"

using namespace std;

int main(void)
{
    Vector<int> v;
    for (int i = 0; i < 20; i++)
        v.push_back(i);
    v.print_contents();
    return 0;
}