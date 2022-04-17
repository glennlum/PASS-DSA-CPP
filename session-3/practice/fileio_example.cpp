//  fileio_example.cpp

#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
        // Write to file
        int num;
        cout<<"How many lines of text? (1-10): ";
        cin>>num;

        string someText="Hello There";
        ofstream outfile ("someFile.txt");

        if(outfile.is_open())
        {
                for(int i=0; i<num; i++)
                {
                        outfile<<someText+'\n';
                }
                outfile.close();
                cout<<"Written to file."<<endl;
        }
        else
        {
                cout<<"Error Writing to File";
        }
        cout<<endl;

        // Read from file
        string lineOfText;
        cout<<"File Contains: "<<endl;
        ifstream infile ("someFile.txt");
        if(infile.is_open())
        {
                while(!infile.eof())
                {
                        getline(infile,lineOfText);

                        cout<<lineOfText<<endl;
                }
                infile.close();
        }
        else
        {
                cout<<"Error Reading From File";
        }

        return 0;
}
