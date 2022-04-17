//  HM03.h

#ifndef HM03_h
#define HM03_h

#include <stdio.h>

/*
   Interface Classes

   An interface describes the behavior or capabilities of a C++ class without
   committing to a particular implementation of that class.

   More on interfaces
   Visit: https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm
 */

class HM03
{
public:
virtual void surf() = 0;   //pure virtual method
};

#endif
