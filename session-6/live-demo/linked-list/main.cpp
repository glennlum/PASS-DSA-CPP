#include <iostream>
#include <list>
#include "List.hpp"

using namespace std;

int main(void)
{
    cout << "Homemade Linked List" << endl;
    linkedlist<int> list;
    // Test 'insert'
    cout << "Insert 5,4,30" << endl;
    list.insert(5);
    list.insert(4);
    list.insert(30);
    // Test 'search'
    cout << "Search for 30: " << list.search(30) << endl;
    cout << "Search for 10: " << list.search(10) << endl;
    // Test 'delete'
    cout << "Delete 5: " << list.deleteNode(5) << endl;
    cout << "Delete 1: " << list.deleteNode(1) << endl;
    
    list.printContents();
}
