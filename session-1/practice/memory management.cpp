#include <iostream>

/* 3 ways to pass parameters */

// pass-by-value
void increment_by_value(int val)
{
    val = val + 1;
}

// pass-by-reference
void increment_by_reference(int &ref)
{
    ref = ref + 1;
}

// pass-by-address
void increment_by_address(int *addr)
{
    *addr = *addr + 1;
}

int main(void)
{

    /* A. Working with stack memory */

    int x = 3;
    increment_by_value(3);
    std::cout << " x=" << x << std::endl; // will x change? - no (3)

    int y = 7;
    int &q = y;                                         // '&q' - reference
    std::cout << " y=" << y << " q=" << q << std::endl; // q is an alias of y

    increment_by_reference(y);
    std::cout << " y=" << y << " q=" << q << std::endl; // will y change? - yes (y=8)

    int z = 11;
    int *w = &z;                                          // 'int *' - integer pointer , '&z' - memory address of z
    std::cout << " w=" << w << " z=" << z << std::endl;   // w is not equal to z
    std::cout << " w=" << w << " &z=" << &z << std::endl; // w contains z's address, w is a pointer
    std::cout << " *w=" << *w << " z=" << z << std::endl; // dereferencing w ('*w') , we find z

    increment_by_address(w);
    std::cout << " *w=" << *w << " z=" << z << std::endl; // wll z change? - yes (z=12)

    /* B. What about heap memory? */

    int *m = new int(19);
    std::cout << " m=" << m << std::endl;   // m points to an address in heap
    std::cout << " *m=" << *m << std::endl; // the value '19' is stored in that heap address

    increment_by_address(m);
    std::cout << " *m=" << *m << std::endl; // will the value at this memory address change? - yes (*m=20)

    /* C. Now for a challenge */

    int &f = *m;
    std::cout << " f=" << f << " *m=" << *m << std::endl; // f references the value stored at the heap address (f=20)
    std::cout << " &f=" << &f << " m=" << m << std::endl; // the address of f is the value stored in m

    increment_by_value(f);
    std::cout << " f=" << f << " *m=" << *m << std::endl; // nope, this won't increment the value f (f=20)

    increment_by_reference(f);
    std::cout << " f=" << f << " *m=" << *m << std::endl; // yes, this will increment the value f (f=21)

    increment_by_address(&f);
    std::cout << " f=" << f << " *m=" << *m << std::endl; // yes, this will increment the value f (f=22)

    /* D. Clean up time - always free up heap memory before the program terminates */

    delete m;                            // deallocate (free) the memory space m points to
    std::cout << "m=" << m << std::endl; // m still knows about the old address
    m = nullptr;                         // ensure m is no longer pointing to the old address
    std::cout << "m=" << m << std::endl; // m is now pointing to 'nothing'

    /* All good, now the program can exit */
    return 0;
}