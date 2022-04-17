//  struct_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

struct Birthday
{
        string name="";
        int day;
        int month;
};

void display (Birthday* bList, int size);

int main(void)
{
        Birthday b1;
        b1.name = "Johnny D";
        b1.day = 15;
        b1.month = 6;

        Birthday b2;
        b2.name = "Sally H";
        b2.day = 3;
        b2.month = 9;

        Birthday list[10];
        list[0]=b1;
        list[1]=b2;
        display(list,10);
        cout<<endl;

        Birthday* bPtr;
        bPtr=list;
        bPtr->name = "Patrick P";
        bPtr=list+1;
        bPtr->name = "Kiki K";
        display(list,10);
}

void display (Birthday* bList, int size)
{
        for(int i=0; i<size; i++)
        {
                if(bList[i].name!="")
                {
                        cout<<bList[i].name<<"'s brithday falls on ";
                        cout<<bList[i].day<<"/"<<bList[i].month<<endl;
                }
        }
}
