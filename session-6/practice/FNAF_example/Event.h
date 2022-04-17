//  Event.h

#ifndef Event_h
#define Event_h

#include <iostream>
#include <stdio.h>
using namespace std;

/*
 * Declaring Global Variables
 *
 * Basically, the extern keyword extends the visibility of the C variables and C functions.
 * Since the extern keyword extends the the variables visibility
 * to the whole program, the variable can be used anywhere
 * in any of the files of the whole program
 *
 * More on Extern: https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
 *
 */

extern string INIT[]; //intial data loaded onto security system
extern string CAM1[]; //data for camera feed 1
extern string CAM2[]; //data for camera feed 2
extern string CAM3[]; //data for camera feed 3
extern string CAM4[]; //data for camera feed 4

#endif
