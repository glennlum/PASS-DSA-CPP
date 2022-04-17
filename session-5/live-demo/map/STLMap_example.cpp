#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "Person.hpp"
#include "Address.hpp"

using namespace std;

int main(void)
{
        // Map - A map uses key-value pairs to organise data
        // A map will sort its key from smallest to largest
        // A key cannot have a duplicate key, keys must be unique
        // Multimap - a Multimap is a map type that accepts duplicate keys

        //-------------------------------------------------
        //  Part 1
        //-------------------------------------------------

        // Declaring map obj
        map <string, int> myMap;
        // Try switching between 'map' and 'multimap'
        //multimap<string, int> myMap;

        //-------------------------------------------------
        // Insert values into map
        // Left side: key / Right side: Value

        cout << endl;
        cout << "Test 1 - .insert()" << endl;
        myMap.insert(pair<string, int>("John", 200));
        cout << "John,200" << endl;
        myMap.insert(pair<string, int>("Jill", 300));
        cout << "Jill,300" << endl;
        myMap.insert(pair<string, int>("Tom", 50));
        cout << "May,10" << endl;
        myMap.insert(pair<string, int>("May", 10));
        cout << "John,300" << endl;
        myMap.insert(pair<string, int>("John", 300)); //"John" used twice
        cout << "Alice,110" << endl;
        myMap.insert(pair<string, int>("Alice", 110));
        cout << "Alice,3300" << endl;
        myMap.insert(pair<string, int>("Alice", 330)); //"Alice" used twice

        //-------------------------------------------------
        // Define an iterator called 'it'

        cout << endl;
        cout << "Test 2 - .begin() and .end() " << endl;
        cout << "Print map contents from beginning to end." << endl;
        map< string, int > :: iterator it;
        //multimap<string, int>::iterator it;

        // Using an iterator to print key and value from first to last element of map
        for (it = myMap.begin(); it != myMap.end(); ++it)
        {
                // accessing data members using pointers and -> operator
                cout << setw(10) << setfill(' ') << left;
                cout << it->first << "   " << it->second << endl;
        }

        //-------------------------------------------------
        // Find the key value for a given name

        cout << endl;
        cout << "Test 3 - .find()" << endl;
        cout << "Find Tom's votes      : ";
        cout << myMap.find("Tom")->second << endl;
        cout << "Find Alice's votes    : ";
        cout << myMap.find("Alice")->second << endl;

        //-------------------------------------------------
        // Display all votes with the name "Alice"

        // Define an iterator to point to element with the key "Alice"
        map <string, int>::const_iterator values = myMap.find ("Alice");
        //multimap<string, int>::const_iterator values = myMap.find("Alice");

        // Count the number of key value pairs with "Alice" assign value to "number"
        cout << endl;
        cout << "Test 4 - .count()" << endl;
        cout << "Count instances of Alice: ";
        long number = myMap.count("Alice");
        cout << number << endl;

        cout << "Print votes for each instance of Alice: ";
        // For the first to the last key-value pair
        for (int i = 0; i < number; i++)
        {
                cout << values->second << " , ";
                // print right-side value associated with "Alice"
                ++values;
                // move iterator to the next key-value pair containing "Alice" as key
        }
        cout << endl;

        //-------------------------------------------------
        //  Part 2
        //-------------------------------------------------

        cout << endl;
        cout << "Test 5 - Insert user-defined obj as map key" << endl;
        cout << "Create an Address Book (Person-Address) and display contents" << endl
             << endl;

        // create person and address objs

        Person p1("Mr", "Bling", "Bling");
        Person p2("Ms", "Loosey", "Goosey");
        Person p3("Mrs", "Ho", "Mo");

        Address a1(5, 20, 12, "ORCHARD", "SGP", "SINGPORE", 97347);
        Address a2(30, 2, 14, "GOTHENBURG", "SWD", "SWEDEN", 12232);
        Address a3(323, 1, 34, "ANTALYA", "TKY", "TURKEY", 65776);

        //-------------------------------------------------
        // declaring map obj
        // Try switching between 'map' and 'multimap'
        map<Person, Address> addressBook;
        // multimap <Person, Address> addressBook;

        //-------------------------------------------------
        // Insert values into map
        // Left side: key / Right side: Value
        // Note: the key will be sorted by map class
        // Overload comparison operator '<' in person class is used for sorting

        addressBook.insert(pair<Person, Address>(p1, a1));
        addressBook.insert(pair<Person, Address>(p2, a2));
        addressBook.insert(pair<Person, Address>(p3, a3));

        //-------------------------------------------------
        // Define an iterator called "itr"
        map<Person, Address>::iterator itr;

        //-------------------------------------------------
        // Using an iterator print key and value
        // from first to last element of map

        for (itr = addressBook.begin(); itr != addressBook.end(); ++itr)
        {
                // accessing data members using pointers and -> operator
                cout << setw(3) << setfill(' ') << left;
                cout << itr->first << " " << itr->second << endl;
        }

        return 0;
}
