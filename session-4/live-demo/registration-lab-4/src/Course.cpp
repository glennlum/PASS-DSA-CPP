#include "Course.hpp"

Course::Course()
{
  name[0] = '\0';
  section = '\0';
  credits = 0;
}

Course::Course(const char *nam, char sect, unsigned cred)
{
  strncpy(name, nam, CourseNameSize);
  section = sect;
  credits = cred;
}

string Course::GetName() const
{
  string courseName(name);
  return courseName;
}
char Course::GetSection() const
{
  return section;
}

int Course::GetCredits() const
{
  return credits;
}

void Course::SetName(const char *nam)
{
  strncpy(name, nam, CourseNameSize);
}

void Course::SetSection(const char sect)
{
  section = sect;
}

void Course::SetCredits(const int cred)
{
  if (cred > 0)
    credits = cred;
}

bool Course::operator==(Course &C)
{
  return name == C.GetName() 
  && section == C.GetSection() 
  && credits == C.GetCredits();
}

istream &operator>>(istream &input, Course &C)
{
  char name[CourseNameSize];
  char sect;
  int cred;

  input >> name;
  C.SetName(name);
  input >> sect;
  C.SetSection(sect);
  input >> cred;
  C.SetCredits(cred);
  return input;
}

ostream &operator<<(ostream &os, const Course &C)
{
  os << "  Course:  " << C.GetName() << '\n'
     << "  Section: " << C.GetSection() << '\n'
     << "  Credits: " << C.GetCredits() << '\n';
  return os;
}
