//  STL_example.cpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
        vector <int> v = {2,4,6,8,10};
        //list <int> v = {2,4,6,8,10}; // Try using list instead (replace vector with list)

        v.push_back(20);
        v.push_back(30);
        v.pop_back();

        vector<int>:: iterator itr;
        //list<int>:: iterator itr; // Try using list instead (replace vector with list)

        cout<<"Elements: "<<endl;
        for (itr=v.begin(); itr!=v.end(); itr++)
        {
                cout<<*itr<<" ";
        }
        cout<<endl;

        cout<<"Elements: "<<endl;
        for (itr=v.begin(); itr!=v.end(); itr++)
        {
                cout<<++*itr<<" ";
        }

        return 0;
}
