//  sharedBuffer.h

#ifndef sharedBuffer_h
#define sharedBuffer_h

#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * Declaring Global Variables
 *
 * Basically, the extern keyword extends the visibility of the C variables and C functions.
 * Since the extern keyword extends the the variables visibility
 * to the whole program, the variable can be used anywhere
 * in any of the files in the program
 *
 * More on Extern: https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
 *
 */

extern const int MAX_SIZE;  //Max size of memory
extern int COUNTER;         //A simple Counter
extern int ROUNDS;          //Maximum number of rounds per game
extern int POSITION;        //Position of the coin 1=left/2=up/3=right
extern int USER_INPUT;      //Stores user input
extern int CURR_SCORE;      //Stores s user's score
extern char NICKNAME[3];    //Stores a user's nickname

#endif
