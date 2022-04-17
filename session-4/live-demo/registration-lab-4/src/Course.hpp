#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

const unsigned CourseNameSize = 10;

class Course
{
public:
  Course();
  Course(const char *nam, char sect, unsigned cred);

  string GetName() const;
  char GetSection() const;
  int GetCredits() const;

  void SetName(const char *nam);
  void SetSection(const char section);
  void SetCredits(const int cred);

  //Overload == to for equivalance testing
  bool operator==(Course &C);

  friend ostream &operator<<(ostream &os, const Course &C);
  friend istream &operator>>(istream &input, Course &C);

private:
  char name[CourseNameSize];
  char section;
  int credits;
};

#endif
