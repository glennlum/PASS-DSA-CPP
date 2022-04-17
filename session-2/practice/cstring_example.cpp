//  cstring_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

void display (char* c, int size);
void clear (char* c, int size);
char* copy (char*c, int size);

int main(void)
{
        char str[10] = {'E','L','I','Z','A'};
        //display contents of c-style string
        cout<<str<<endl;
        display(str,10);
        //clear contents of string
        clear(str,10);
        display(str,10);
        //fill array with a new name (using pointer arithmetic)
        *str='B';
        *(str+1)='O';
        *(str+2)='B';
        *(str+3)='B';
        *(str+4)='Y';
        display(str,10);
        //copy string
        char* newStr=copy(str,10);
        display(newStr,10);
        //deallocate newStr
        delete[] newStr;
        newStr=NULL;
}

void display (char* c, int size)
{
        for(int i=0; i<size; i++)
        {
                cout<<*(c+i);
        }
        cout<<endl;
}

void clear (char* c, int size)
{
        for (int i=0; i<size; i++)
        {
                c[i]='\0';
        }
}

char* copy (char*c, int size)
{
        char* strCpy = new char[size];

        for (int i=0; i<size; i++)
        {
                strCpy[i]=c[i];
        }
        return strCpy;
}
