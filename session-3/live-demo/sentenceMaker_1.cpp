#include <iostream>

using namespace std;

int LENGTH = 0; // global variable declaration

string *resizeArray();
void copyContents(string *oldSentence, string *newSentence);
void insertWord(string *sentence, string word);
void printSentence(string *sentence);

int main(void)
{
        string *currentSentence = new string[LENGTH]; // starts off as an empty sentence
        
        while (true) // infinte loop
        {
                string word;
                cout << "Type a word ( . to end) > ";
                cin >> word;
                if (word == ".") // if word is '.', exit the loop
                {
                        break;
                }
                string *newSentence = resizeArray();        // create a new array in heap of size LENGTH+1
                copyContents(currentSentence, newSentence); // copy contents of current sentence to new sentence
                insertWord(newSentence, word);              // add word to the end of new sentence
                delete[] currentSentence;                   // deallocate memory of old sentence
                currentSentence = newSentence;              // make current sentence point to the new sentence
                LENGTH++;                                   // update LENGTH global variable
        }
        printSentence(currentSentence);
        return 0;
}

string *resizeArray()
{
        string *newSentence = new string[LENGTH + 1];
        return newSentence;
}

void copyContents(string *currentSentence, string *newSentence)
{
        for (int i = 0; i < LENGTH; i++)
        {
                newSentence[i] = currentSentence[i];
        }
}

void insertWord(string *sentence, string word)
{
        sentence[LENGTH] = word;
}

void printSentence(string *sentence)
{
        cout << "### You wrote: '";
        for (int i = 0; i < LENGTH; i++)
        {
                cout << sentence[i] << " ";
        }
        cout << ".'" << endl;
}
