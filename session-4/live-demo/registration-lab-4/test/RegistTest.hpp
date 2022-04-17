#ifndef REGIST_TEST_HPP
#define REGIST_TEST_HPP

#include <iostream>
#include "TestLib.hpp"       //test library
#include "../src/Regist.hpp" //class under test

using namespace std;

// Forward declaration
void RegistTest();

// Implementation
void RegistTest()
{
    header("REGIST TEST");

    Course c1("ABC", 'D', 5), c2("EFG", 'H', 6);

    /* Default Constructor */
    section("Test Default Constructor");
    // setup
    Registration r1;
    Course emptyCourse;
    // test
    require<long>(r1.GetStudentId(), 0, "StudentId should be initialised to 0");
    require<unsigned>(r1.GetSemester(), 0, "Semester should be initialised to 0");
    require<unsigned>(r1.GetCount(), 0, "Count should be initialised to 0");
    require<Course>(r1.GetCourse(0), emptyCourse, "First course in list should be empty");

    /* Test Getters */
    section("Test Getters");
    // setup
    Registration r2;
    r2.SetStudentId(123);
    r2.SetSemester(456);
    r2.SetCount(1);
    r2.SetCourse(c1, 0);
    // test
    require<long>(r2.GetStudentId(), 123, "GetStudentId should return student id");
    require<unsigned>(r2.GetSemester(), 456, "GetSemester should return semester");
    require<unsigned>(r2.GetCount(), 1, "GetCount should return count");
    require<Course>(r2.GetCourse(0), c1, "GetCourse should return course at index 0");

    /* Test Setters */
    section("Test Setters");
    // setup
    Registration r3;
    // test
    r3.SetStudentId(987);
    require<long>(r3.GetStudentId(), 987, "SetStudentId should update student id");
    r3.SetSemester(100);
    require<unsigned>(r3.GetSemester(), 100, "SetSemester should update semester");
    r3.SetCount(2);
    require<unsigned>(r3.GetCount(), 2, "SetCount should update count");
    r3.SetCourse(c1, 0);
    r3.SetCourse(c2, 1);
    require<Course>(r3.GetCourse(0), c1, "SetCourse should update course at index 0");
    require<Course>(r3.GetCourse(1), c2, "SetCourse should update course at index 1");

    /* Test Setters */
    section("Test ComputeCredits");
    // setup
    Registration r4;
    r4.SetCount(2);
    r4.SetCourse(c1, 0);
    r4.SetCourse(c2, 1);
    // test
    require<unsigned>(r4.ComputeCredits(), 11, "ComputeCredits should return total credits");
}
#endif
