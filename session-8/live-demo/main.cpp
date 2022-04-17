#include <iostream>
#include "BST.hpp"
#include "Processors.hpp"
#include "Date.hpp"
#include "Person.hpp"
#include "Wrapper.hpp"

using namespace std;

// Some Wrapper class helpers
int generateKey(string first, string second);
void showWrapperContents(Wrapper<Person> &w);
void lookupByID(BST<Wrapper<Person> > &bst, int id);

int main(void)
{
        /* Part 1 : Inserting primitive types into BST */
        cout << "\n\n# Inserting primitive types into BST" << endl;
        BST<int> intBST;
        int intArray[] = {23, 12, 3, 7, 15, 13, 19, 31, 29, 25, 88, 53};

        for (int n : intArray) // range-based for loop
                intBST.insert(n);

        intBST.processNodes(increment);
        intBST.processNodes(print);

        /* Part 2 : Inserting user-defined types into BST */
        cout << "\n\n# Inserting user-defined types into BST" << endl;
        BST<Date> dateBST;

        Date dateArray[] =
            {Date(1, 2, 2012), Date(3, 4, 2018), Date(5, 6, 2022), Date(7, 8, 2029)};

        for (Date date : dateArray)
                dateBST.insert(date);

        dateBST.processNodes(print<Date>);

        /* Part 3A : Inserting user-defined types into BST using wrappers */
        cout << "\n\n# Inserting user-defined types into BST using wrappers" << endl;
        BST<Wrapper<Person> > personBST;
        Wrapper<Person> personWrapper;

        int nameCount = 9;
        string fnArray[] =
            {"Elvis", "Robert", "Ginger", "Eddie", "Chet", "Frank V", "Jack", "Todd", "Jimmy"};
        string lnArray[] =
            {"Costello", "Plant", "Baker", "Van Halen", "Atkins", "Zappa", "Bruce", "Lundgren", "Page"};

        for (int i = 0; i < nameCount; i++)
        {
                int key = generateKey(fnArray[i], lnArray[i]);
                Person person(fnArray[i], lnArray[i]);
                personBST.insert(personWrapper.wrap(key, person));
        }

        personBST.processNodes(showWrapperContents);

        /* Part 3B : Lookup by ID */
        cout << "\n\n# Lookup by ID" << endl;

        int searchKey = generateKey("Ginger", "Baker");
        lookupByID(personBST, searchKey);

        return 0;
}

// Generates a unique ID that can be searched
int generateKey(string first, string second)
{
        string combinedString = first + second;
        int length = combinedString.length();
        int key = 0;
        for (int i = 0; i < length; i++)
                key += (char)combinedString[i]; // sum character's ASCII value
        return key;
}
// Prints wrapper content
void showWrapperContents(Wrapper<Person> &w)
{
        cout << w.getKey() << " -> " << w.getData() << endl;
}
// Lookup a person using an  ID
void lookupByID(BST<Wrapper<Person> > &bst, int id)
{
        Person temp;
        Wrapper<Person> searchItem(id, temp);
        Wrapper<Person> *result = bst.search(searchItem);
        if (nullptr == result)
                cout << "Not Found" << endl;
        showWrapperContents(*result);
}
