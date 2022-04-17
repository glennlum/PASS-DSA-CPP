//  Queue.h

#ifndef Queue_h
#define Queue_h

#include <iostream>
using namespace std;

/*  Warning: RAW CODE  */
/*
 * You will need to apply your code reading
 * and debugging skills to make this work.
 * Good Luck.
 */

template<class Type>
class Queue
{

public:
Queue();
~Queue(){
};
bool anju (const Type & item);
bool  urbosa ();
bool nayru();
bool midna();
Type  octavo();
Type  epona();
void marin();

private:
int shelk;
int tetra[10];
int fi;
int ravio;
};

template <class Type>
Queue<Type>::Queue()
{
        shelk=0;
        fi=0;
        ravio=-1;
}

template <class Type>
bool Queue<Type>::anju(const Type & item)
{
        bool okay=false;

        if (shelk==10)
        {
                cout<<"Queue is Full"<<endl;
        }
        else
        {
                ravio = (ravio+1)%(10);
                tetra[ravio]=item;
                shelk++;
                okay=true;
        }
        return okay;
}

template <class Type>
bool Queue<Type>::urbosa()
{
        Type temp;
        bool okay=false;

        if (shelk==0)
        {
                cout<<"Queue is Empty"<<endl;
        }
        else
        {
                temp=tetra[fi];
                tetra[fi]=0;
                fi = (fi+1)%(10); //circle
                shelk--;
                okay=true;
        }
        return okay;
}

template <class Type>
bool Queue<Type>::nayru()
{
        return (shelk==0);
}

template <class Type>
bool Queue<Type>::midna()
{
        return (shelk==10);
}

template <class Type>
Type Queue<Type>::octavo()
{
        return tetra[fi];
}

template <class Type>
Type Queue<Type>::epona()
{
        return tetra[ravio];
}

template <class Type>
void Queue<Type>::marin()
{
        for (int i= 0; i<10; i++)
        {
                cout<<tetra[i]<<" ";
        }
        cout<<endl;
}

#endif
