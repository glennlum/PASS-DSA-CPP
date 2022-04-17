#ifndef COURSE_TEST_HPP
#define COURSE_TEST_HPP

#include <iostream>
#include "TestLib.hpp"       //test library
#include "../src/Course.hpp" //class under test

using namespace std;

// Forward declaration
void CourseTest();

// Implementation
void CourseTest()
{
    header("COURSE TEST");

    /* Default Constructor */
    section("Test Default Constructor");
    // setup
    Course c1;
    // test
    require<string>(c1.GetName(), "\0", "name should be initialised to null");
    require<char>(c1.GetSection(), '\0', "section should be initialised to null");
    require<int>(c1.GetCredits(), 0, "credits should be initialised to 0");

    /* Test Getters */
    section("Test Getters");
    // setup
    char name[]{'A', 'B', 'C'};
    Course c2(name, 'A', 5);
    // test
    require<string>(c2.GetName(), "ABC", "GetName should return name");
    require<char>(c2.GetCredits(), 5, "GetCredits should return credits");
    require<int>(c2.GetSection(), 'A', "GetSection should return section");

    /* Test Setters */
    section("Test Setters");
    // setup
    Course c3;
    char newName[]{'D', 'E', 'F'};
    c3.SetName(newName);
    // test
    require<string>(c3.GetName(), "DEF", "SetName should update name");
    c3.SetCredits(-1);
    require<char>(c3.GetCredits(), 0, "SetCredits should reject a negative value");
    c3.SetCredits(6);
    require<char>(c3.GetCredits(), 6, "SetCredits should update credits");
    c3.SetSection('G');
    require<int>(c3.GetSection(), 'G', "SetSection should update section");
}
#endif
