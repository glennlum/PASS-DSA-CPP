//  freddyGenerator.h

#ifndef freddyGenerator_h
#define freddyGenerator_h

#include <stdio.h>
#include <cstdlib>
#include <ctime>

/*
 * Declaring Global Functions
 *
 * Basically, the extern keyword extends the visibility of the C variables and C functions.
 * Since the extern keyword extends the the function’s visibility
 * to the whole program, the function can be used (called) anywhere
 * in any of the files of the whole program
 *
 * More on Extern: https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
 *
 */

/* A spruced up game engine to handle time and events - makes freddy come alive */

extern int tickTock();      //time driver
extern int thisLilPiggy(); //event driver

#endif
