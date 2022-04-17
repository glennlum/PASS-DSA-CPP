#ifndef REGIST_H
#define REGIST_H

#include <iostream>
#include "Course.hpp"

using namespace std;

const unsigned MAX_COURSES = 10;

class Registration
{
public:
  Registration();

  unsigned ComputeCredits() const; 
  //Previously called 'GetCredits' but actually performs a calculation

  long GetStudentId() const;
  unsigned GetSemester() const;
  unsigned GetCount() const;
  Course GetCourse(const int index) const;

  void SetStudentId(const long id);
  void SetSemester(const unsigned sem);
  void SetCount(const unsigned ct);
  void SetCourse(const Course course, const int index);

  friend ostream &operator<<(ostream &os, const Registration &R);
  friend istream &operator>>(istream &input, Registration &R);

private:
  long studentId;
  unsigned semester;
  unsigned count;
  Course courses[MAX_COURSES];
};

#endif
