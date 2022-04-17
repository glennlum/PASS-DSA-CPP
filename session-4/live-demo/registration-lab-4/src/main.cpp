#include <iostream>
#include <fstream>
#include "Course.hpp"
#include "Regist.hpp"

using namespace std;

int main()
{
  ifstream infile("rinput.txt");
  if (!infile)
    return -1;

  Registration R;
  infile >> R;

  ofstream ofile("routput.txt");

  ofile << R
        << "Number of courses = " << R.GetCount() << '\n'
        << "Total credits     = " << R.ComputeCredits() << '\n';

  Course aCourse("MTH_3020", 'B', 2);
  aCourse.SetCredits(5);
  cout << aCourse << endl; 

  return 0;
}
