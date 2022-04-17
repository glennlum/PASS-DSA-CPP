#include "Regist.hpp"

Registration::Registration()
{
  studentId = 0;
  semester = 0;
  count = 0;
}

unsigned Registration::ComputeCredits() const
{
  unsigned sum = 0;
  for (unsigned i = 0; i < count; i++)
    sum += courses[i].GetCredits();

  return sum;
}

long Registration::GetStudentId() const
{
  return studentId;
}
unsigned Registration::GetSemester() const
{
  return semester;
}
unsigned Registration::GetCount() const
{
  return count;
}
Course Registration::GetCourse(const int index) const
{
  return courses[index];
}

void Registration::SetStudentId(const long id)
{
  studentId = id;
}
void Registration::SetSemester(const unsigned sem)
{
  semester = sem;
}
void Registration::SetCount(const unsigned ct)
{
  count = ct;
}
void Registration::SetCourse(const Course course, const int index)
{
  if (index >= 0 && index < MAX_COURSES)
  {
    courses[index] = course;
  }
}

istream &operator>>(istream &input, Registration &R)
{
  input >> R.studentId >> R.semester >> R.count;

  for (unsigned i = 0; i < R.count; i++)
    input >> R.courses[i];

  return input;
}

ostream &operator<<(ostream &os, const Registration &R)
{
  os << "Student ID: " << R.GetStudentId() << '\n'
     << "Semester:   " << R.GetSemester() << '\n';

  for (unsigned i = 0; i < R.GetCount(); i++)
    os << R.GetCourse(i) << '\n';

  return os;
}
