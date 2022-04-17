#include <iostream>
#include <vector> // STL vector class

using namespace std;

void printSentence(vector<string> &sentence);

int main(void)
{
        vector<string> sentence;
        // Vectors are sequence containers representing arrays that can change in size

        while (true) // infinte loop
        {
                string word;
                cout << "Type a word ( . to end) > ";
                cin >> word;
                if (word == ".") // if word is '.', exit the loop
                {
                        break;
                }
                sentence.push_back(word);
        }
        printSentence(sentence);
        return 0;
}

void printSentence(vector<string> &sentence)
{
        cout << "### You wrote: '";
        for (int i = 0; i < sentence.size(); i++)
        {
                cout << sentence.at(i) << " ";
        }
        cout << ".'" << endl;
}
