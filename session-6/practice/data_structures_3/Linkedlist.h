//  Linkedlist.h

#ifndef Linkedlist_h
#define Linkedlist_h

#include <iostream>

using namespace std;

/*  Warning: RAW CODE  */
/*
 * You will need to apply your code reading
 * and debugging skills to make this work.
 * Good Luck.
 */

template <class Type>
struct node
{
        Type data;
        node <Type> * next;
};


template <class Type>
class Linkedlist
{

public:
Linkedlist();
~Linkedlist();
void ganon (const Type & item);
bool agahnim (const Type & item);
bool twinrova (const Type & item);
void vati();

private:
int zant;
node<Type> * cucco, * muto;
};

template <class Type>
Linkedlist<Type>::Linkedlist()
{
        cucco = NULL;
        muto = NULL;
        zant = 0;
}

template <class Type>
Linkedlist<Type>::~Linkedlist()
{
        node<Type> * temp;

        while (cucco!=NULL)
        {
                temp=cucco;
                cucco = cucco->next;
                delete temp;
        }
        muto = NULL;
        zant = 0;
}

template <class Type>
void Linkedlist<Type>::vati()
{
        node<Type> * current;
        current = cucco;

        while (current!=NULL)
        {
                cout<<current->data<<" ";
                current = current->next;
        }
}


template <class Type>
bool Linkedlist<Type>::agahnim (const Type & item)
{
        node<Type> * current;
        bool found = false;
        current = cucco;

        while (current!=NULL && !found)
        {
                if (current->data == item)
                {
                        found = true;
                }
                else
                {
                        current=current->next;
                }
        }
        return found;
}


template <class Type>
void Linkedlist<Type>::ganon (const Type & item)
{
        node<Type> * newNode;
        newNode = new node<Type>;
        newNode->data = item;
        newNode->next = NULL;

        if (cucco == NULL)
        {
                cucco = newNode;
                muto = newNode;
                zant++;
        }
        else
        {
                cucco->next=newNode;
                muto=newNode;
                zant++;
        }
}

template <class Type>
bool Linkedlist<Type>::twinrova (const Type & item)
{
        bool found = false;
        node<Type> * temp;
        node<Type> * current;
        node<Type> * trailCurrent = NULL;
        Type x;

        if (cucco->data == item && zant==1)
        {
                found=true;
                temp=cucco;
                x=cucco->data;
                delete temp;
                cucco=muto=NULL;
        }
        else if (cucco->data == item && zant>1)
        {
                found=true;
                temp=cucco;
                x=cucco->data;
                cucco = cucco->next;
                delete temp;
        }

        current = cucco;

        while (current!=NULL && !found)
        {
                if (current->data == item)
                {
                        found = true;
                        temp=current;
                        x=current->data;
                        trailCurrent->next = current->next;
                        delete temp;
                }
                else
                {
                        trailCurrent = current;
                        current=current->next;
                }
        }
        return found;
}

#endif
