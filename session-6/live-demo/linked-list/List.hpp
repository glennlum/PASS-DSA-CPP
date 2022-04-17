#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
using namespace std;

// Linked list node
template <class Type>
struct node
{
    Type data;        // stores data
    node<Type> *next; // pointer to next node
};

template <class Type>
class linkedlist
{
public:
    linkedlist();
    ~linkedlist();
    void insert(const Type &item); // Inserts item into list
    bool search(const Type &item); // Returns true if item is found in the list
    bool deleteNode(const Type &item); // Returns true if item is deleted from list
    void printContents(); // Prints elements stored in list
private:
    int size; // size of list
    node<Type> *first, *last; // 2 pointers 'first' and 'last'
};

template <class Type>
linkedlist<Type>::linkedlist()
{
    first = NULL; // set to NULL
    last = NULL;  // set to NULL
    size = 0;     // empty list size 0
}

template <class Type>
linkedlist<Type>::~linkedlist()
{
    node<Type> *temp; // temp node pointer

    while (first != NULL) // while node is present
    // deletion from front of list
    {
        temp = first;        // assign first to temp
        first = first->next; // move first to next node
        delete temp;         // deallocate memory of temp
    }
    last = NULL; // set to NULL
    size = 0;    // empty list size 0
}

template <class Type>
void linkedlist<Type>::printContents()
{
    node<Type> *current; // current node pointer
    current = first;     // assign first to current

    while (current != NULL) // while node is present
    {
        cout << current->data << " "; // print node's data
        current = current->next;      // move to next node
    }
}

template <class Type>
bool linkedlist<Type>::search(const Type &item)
{
    node<Type> *current; // current node pointer

    bool found = false; // found is false

    current = first; // assign first to current

    while (current != NULL && !found) // while node is present and search item not found
    {
        if (current->data == item) // if the data matches search item
        {
            found = true; // found is true
        }
        else // if data does not match
        {
            current = current->next; // move to next node
        }
    }
    return found; // return the result of search
}

template <class Type>
void linkedlist<Type>::insert(const Type &item)
{
    node<Type> *newNode; // new node pointer

    newNode = new node<Type>; // intialise a new node and assign address to 'newNode'

    newNode->data = item; // assign a data value to the node

    newNode->next = NULL; // assign NULL to next node pointer

    if (first == NULL) // if list is empty
    {
        // assign new node as first node
        first = newNode; // assign first pointer to item added
        last = newNode;  // assign last pointer to item added
        size++;          // increment size
    }
    else // if list not empty
    {
        // insert new node at the back
        last->next = newNode; // assign newNode to last position
        last = newNode;       // assign last pointer to last item added
        size++;               // increment size
    }
}

template <class Type>
bool linkedlist<Type>::deleteNode(const Type &item)
{
    bool found = false;              // found is false
    node<Type> *temp;                // temp pointer
    node<Type> *current;             // current pointer
    node<Type> *trailCurrent = NULL; // trails current pointer (one step behind)
    Type x;                          // stores a type variable

    // Begin search for item to be deleted
    // Step 1 - check the first node in the list for a match

    if (first->data == item && size == 1)
    // if list has one item and that item is a match
    {
        found = true;    // found is true
        temp = first;    // assign first to temp
        x = first->data; // assign first data to x
        delete temp;     // deallocate memory of temp

        first = last = NULL; // list is now empty , first and last is NULL
    }
    else if (first->data == item && size > 1)
    // if first item is a match and array size is more than one
    {
        found = true;        // found is true
        temp = first;        // assign first to temp
        x = first->data;     // asising first data to x
        first = first->next; // assign first to point to next node

        delete temp; // deallocate memory of temp
    }

    // Step 2 - if first is not a match, traverse the list
    
    current = first; // assign first to current

    while (current != NULL && !found) // while current pointer is not null and match not found
    {
        if (current->data == item) // if current node is a match
        {
            found = true; // found is true

            temp = current; // assign current to temp

            x = current->data; // assign current data to x

            trailCurrent->next = current->next;
            // assign the current nodes next element to the preceding node's next element
            // esssentially skips over the node to be deleted

            delete temp; // deallocate memory of temp
        }
        else // if current node is not a match
        {
            trailCurrent = current;  // move trailCurrent to next node
            current = current->next; // move current to next node
        }
    }
    return found; // return result of deletion
    // if item not found, no deletion takes place and found is false
}

#endif
