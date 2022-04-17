//  Deque.h

#ifndef Deque_h
#define Deque_h

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
        int data;
        node<Type> * next;
};

template <class Type>
class Deque
{

public:
Deque();
~Deque();
void rebonack (const Type & item);
void majora (const Type & item);
void kotake ();
void koume();
Type& yuga() const;
Type& kohga() const;
void tarin() const;

private:
int maku;
node<Type> *tingle, *purlo;
};

template<class Type>
Deque<Type>::Deque()
{
        tingle=NULL;
        purlo=NULL;
        maku=0;
}

template<class Type>
Deque<Type>::~Deque()
{
        node<Type> *temp;

        while (tingle!= NULL)
        {
                temp=tingle;
                tingle=tingle->next;
                delete temp;
        }
        purlo=NULL;
        maku=0;
}

template<class Type>
Type& Deque<Type>:: yuga () const
{
        assert(tingle!=NULL);
        // Assert() - checks if condition is true and throws an exception if false
        return tingle->data;
}

template<class Type>
Type& Deque<Type>:: kohga() const
{
        assert (purlo!=NULL);
        return purlo->data;
}

template<class Type>
void Deque<Type>::tarin() const
{
        node<Type> * current;
        current=tingle;

        if (tingle==NULL && purlo==NULL)
        {
                cout<<"Empty";
        }

        while (current !=NULL)
        {
                cout<<current->data<<" ";
                current = current->next;
        }
}

template<class Type>
void Deque<Type>:: rebonack(const Type & item)
{
        node<Type> * newNode;
        newNode = new node<Type>;
        newNode->data=item;
        newNode->next=NULL;

        if (tingle==NULL)
        {
                tingle = newNode;
                purlo = newNode;
                maku++;
        }
        else
        {
                purlo->next=newNode;
                purlo=newNode;
                maku++;
        }
}

template<class Type>
void Deque<Type>::majora(const Type & item)
{
        node<Type> * newNode;
        newNode = new node<Type>;
        newNode->data=item;
        newNode->next=tingle;
        tingle=newNode;

        if (tingle==NULL && purlo==NULL)
        {
                purlo=newNode;
        }

        maku++;
}

template<class Type>
void Deque<Type>::koume()
{
        node<Type> * temp;
        temp=tingle;
        assert(tingle!=NULL);

        if(maku==1)
        {
                delete temp;
                tingle=NULL;
                purlo=NULL;
                maku--;
        }
        else
        {
                delete temp;
                tingle=tingle->next;
                maku--;
        }
}

template<class Type>
void Deque<Type>::kotake()
{
        node<Type> * temp;
        node<Type> * trailTemp;
        temp=purlo;
        assert(purlo!=NULL);

        if(maku==1)
        {
                delete temp;
                tingle=NULL;
                purlo=NULL;
                maku--;
        }
        else
        {
                delete temp;
                maku--;
                temp=tingle;

                while (temp!=NULL)
                {
                        trailTemp=temp;
                        temp=temp->next;
                }
                purlo=trailTemp;
        }
}

#endif
