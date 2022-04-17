#ifndef COURSE_TEST_HPP
#define COURSE_TEST_HPP

#include <iostream>
#include <sstream>
#include "TestLib.hpp"       //test library
#include "../src/Vector.hpp" //class under test

using namespace std;

// Forward declaration
void VectorTest();

// Implementation
void VectorTest()
{
    header("VECTOR TEST");

    section("Test Default Constructor");
    Vector<int> v1;
    v1.print_contents(); // debug
    require<int>(v1.capacity(), 1, "An empty Vector should have a capacity of 1");

    section("Test push_back");
    Vector<int> v2;
    for (int i = 0; i < 15; i++)
        v2.push_back(i);
    v2.print_contents(); // debug
    require<int>(v2.size(), 15, "push_back should add 10 elements to the vector");

    section("Test at");
    Vector<int> v3;
    for (int i = 0; i <10 ; i++)
        v3.push_back(i+1);
    v3.print_contents(); // debug
    require<int>(v3.at(4), 5, "at should return the 5th element of the vector");

    //special tests for exceptions
    string testName = "at should throw an exception if input < 0";
    try
    {
        v3.at(-1);
        fail(testName);
    } 
    catch(...)
    {
        pass(testName);
    }
    
    // special tests for exceptions
    testName = "at should throw an exception if input > current length";
    try
    {
        v3.at(10);
        fail(testName);
    }
    catch (...)
    {
        pass(testName);
    }
}

#endif