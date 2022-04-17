//  STLSet_example.cpp

#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main(void)
{
        //----------------------------------------------------------
        //SET Demo Part 1

        // A set does not accept duplicates
        // Values in a set are sorted on insertion

        cout<<"Create an int Set"<<endl;

        set<int> myset;
        set<int>::iterator it;
        int number;

        for (int i=1; i<=5; ++i)
        {
                cout<<"Enter a number: ";
                cin>>number;
                myset.insert(number);
        }
        cout<<endl;

        for (it=myset.begin(); it!=myset.end(); ++it)
        {
                cout<<*it<<" ";
        }
        cout<<endl;


        //----------------------------------------------------------
        //SET Demo Part 2

        // The same rules apply for the results of a set operation
        // The result contains no duplicates values
        // Values in the resulting set are sorted

        vector<int> v(10);
        vector<int>::iterator itr;
        set<int>::iterator itSet;

        set<int>myset1;
        set<int>myset2;

        for (int i=0; i<5; i++)
        {
                myset1.insert (i*5);
                myset2.insert (i*10);
        }
        cout<<endl;

        //use a range-based for loop to print set elements
        //'auto' - automatic type detection

        cout<<"set1: ";
        for (auto elem : myset1)
        {
                cout << elem <<" ";
        }
        cout<<endl;

        cout<<"set2: ";
        for (auto elem : myset2)
        {
                cout << elem <<" ";
        }
        cout<<endl<<endl;

        //More on 'auto'
        //Visit: https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/

        //----------------------------------------------------------

        cout<<"Intersect"<<endl;
        set_intersection (myset1.begin(),myset1.end(),myset2.begin(),myset2.end(),v.begin());
        //perform intersection and input result into the vector
        for (itr=v.begin(); itr!=v.end(); itr++)
        {
                cout<<*itr<<" ";
        }
        cout<<endl;

        //----------------------------------------------------------

        cout<<"Difference"<<endl;
        set_difference (myset1.begin(),myset1.end(),myset2.begin(),myset2.end(),v.begin());
        //perform difference and input result into the vector
        for (itr=v.begin(); itr!=v.end(); itr++)
        {
                cout<<*itr<<" ";
        }
        cout<<endl;

        //----------------------------------------------------------

        cout<<"Union"<<endl;
        set_union (myset1.begin(),myset1.end(),myset2.begin(),myset2.end(),v.begin());
        //perform union and input result into the vector
        for (itr=v.begin(); itr!=v.end(); itr++)
        {
                cout<<*itr<<" ";
        }
        cout<<endl;

        return 0;
}
