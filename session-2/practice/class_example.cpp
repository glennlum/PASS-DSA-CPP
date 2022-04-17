//  class_example.cpp

#include <stdio.h>
#include <iostream>
#include "Person.h"

using namespace std;

void display (Person* pList, int size);

int main(void)
{
        Person p1 ("Maggie",36);
        Person p2 ("Sophie",12);
        Person p3 ("Jimmy",10);

        Person list[10];
        list[0]=p1;
        list[1]=p2;
        list[2]=p3;
        display(list,10);
        cout<<endl;

        Person* pPtr;
        //point to first element (using -> operator)
        pPtr=list;
        pPtr->setName("Neil");
        //point to second element (using -> operator)
        pPtr=list+1;
        pPtr->setName("Patrick");
        //point to third element (using -> operator)
        pPtr=list+2;
        pPtr->setName("Harris");
        //display birthdays to screen
        display(list,10);
}

void display (Person* pList, int size)
{
        for(int i=0; i<size; i++)
        {
                if(pList[i].getName()!="none")
                {
                        cout<<"Name: "<<pList[i].getName();
                        cout<<" , Age: "<<pList[i].getAge()<<endl;
                }
        }
}
