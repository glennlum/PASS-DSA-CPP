#include <iostream>

using namespace std;

void func(int n)
{
    cout << "Call func(" << n << ")" << endl;

    if (n > 0) // base case
    {
        func(n - 1);
        cout << "func(" << n << ") prints:" << n << endl;
    }

    cout << "Terminate func(" << n << ")" << endl;
}

int main(void)
{
    func(3);
}
