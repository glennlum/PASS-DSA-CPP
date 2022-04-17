#include <iostream>
#include <fstream>
#include "Person.hpp"

using namespace std;

int main(void)
{
        Person famousPerson;

        ifstream infile("data.txt");

        if (infile.is_open()) // stream is currently associated to a file
        {
                while (!infile.eof()) // while not at end of file
                {
                        infile >> famousPerson;       // read famous person from file input stream, uses overloaded '>>'
                        cout << famousPerson << endl; // print famous person to std out, uses overloaded '<<'
                }
        }
        else
        {
                cout << "Error: File not found";
        }

        return 0;
}