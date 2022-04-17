//  loop_example.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
        char choice = 'y'; // y = 121 in ASCII
        int arr[5];
        int count=0, sum=0;;

        while (choice=='y')
        {
                if(count<5)
                {
                        cout<<"Enter a number: ";

                        cin>>arr[count];
                        count++;

                        cout<<"Enter another number? (y/n): ";
                        cin>>choice;
                }
                else
                {
                        cout<<"Error: array out of bounds"<<endl;
                        break;
                }
        }

        cout<<endl;
        cout<<"You entered: ";

        for(int i=0; i<count; i++)
        {
                cout<<arr[i]<<", ";
                sum+=arr[i];
        }

        cout<<endl;
        cout<<"Average = "<<sum/count<<endl;

        return 0;
}
