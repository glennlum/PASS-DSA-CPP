#include <iostream>
#include "Dependencies.hpp"

using namespace std;

int main(void)
{
        BST<int> intBST;
        int intArray[] = {23, 12, 3, 7, 15, 13, 19, 31, 29, 25, 88, 53};

        for (int n : intArray) // range-based for loop
                intBST.insert(n);

        intBST.processNodes(increment);
        intBST.processNodes(print);

        return 0;
}
