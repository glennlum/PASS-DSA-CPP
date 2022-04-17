//stringstream_example.cpp

// CPP program to count words in a string using stringstream.
// Source: https://www.geeksforgeeks.org/stringstream-c-applications/

/*
   A stringstream associates a string object with a stream
   allowing you to read from the string as if it were a stream (like cin).
 */

#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

int countWords(string str)
{
        // breaking input into word using string stream
        stringstream s(str); // Used for breaking words
        string word; // to store individual words

        int count = 0;

        //while words exist, read word from stringstream and assign to 'word'

        while (s >> word)
                count++;

        /* Alternate Method with getline */

        //while(getline(s,word,' '))
        //count++;

        return count;
}

// Driver code
int main()
{
        string s = "geeks for geeks geeks "
                   "contribution placements";
        cout << " Number of words are: " << countWords(s)<<endl;
        return 0;
}
