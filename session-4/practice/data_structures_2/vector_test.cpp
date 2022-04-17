//  vector_test.cpp (STL implentation)

#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;

int main(void)
{
        cout<<"Test 1 - Empty Array"<<endl;

        Vector<int> v1;
        cout<<"print:      "; v1.print();

        try
        {
                cout<< "at(0):      "<<v1.at(0) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "size:       "<<v1.size() <<endl;
        cout<< "isEmpty:    "<<v1.isEmpty() <<endl;
        cout<<endl;


        cout<<"Test 2 - One-Element Array"<<endl;

        Vector<double> v2;
        v2.push_back(5.75);
        cout<<"print:      "; v2.print();

        try
        {
                cout<< "at(0):      "<<v2.at(0) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "size:       "<<v2.size() <<endl;
        cout<< "isEmpty:    "<<v2.isEmpty() <<endl;
        cout<<endl;
        v2.pop_back();
        cout<<"print:      "; v2.print();

        try
        {
                cout<< "at(0):      "<<v2.at(0) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "size:       "<<v2.size() <<endl;
        cout<< "isEmpty:    "<<v2.isEmpty() <<endl;
        cout<<endl;


        cout<<"Test 3 - Three-Element Array"<<endl;

        Vector<string> v3;
        v3.push_back("Bob");
        cout<<"print:      "; v3.print();

        try
        {
                cout<< "at(0):      "<<v3.at(0) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "size:       "<<v3.size() <<endl;
        cout<< "isEmpty:    "<<v3.isEmpty() <<endl;


        cout<<endl;
        v3.push_back("Martin");
        cout<<"print:      "; v3.print();

        try
        {
                cout<< "at(0):      "<<v3.at(1) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "isEmpty:    "<<v3.isEmpty() <<endl;
        cout<<endl;
        v3.push_back("Lisa");
        cout<<"print:      "; v3.print();

        try
        {
                cout<< "at(0):      "<<v3.at(2) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "size:       "<<v3.size() <<endl;
        cout<< "isEmpty:    "<<v3.isEmpty() <<endl;
        cout<<endl;
        v3.pop_back();
        v3.pop_back();
        cout<<"print:      "; v3.print();

        try
        {
                cout<< "at(0):      "<<v3.at(0) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "size:       "<<v3.size() <<endl;
        cout<< "isEmpty:    "<<v3.isEmpty() <<endl;
        cout<<endl;
        v3.pop_back();
        cout<<"print:      "; v3.print();

        try
        {
                cout<< "at(0):      "<<v3.at(0) <<endl;
        }
        catch(...)
        {
                cout<<"Error: out of range"<<endl;
        }

        cout<< "size:       "<<v3.size() <<endl;
        cout<< "isEmpty:    "<<v3.isEmpty() <<endl;

        return 0;
}
