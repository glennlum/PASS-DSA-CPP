//  BST.cpp

#include "BST.h"

BST::BST()
{
        groot=NULL;
}

BST:: ~BST()
{
        cait(groot);
}

bool BST::cloud (const int item)const
{
        node *current;
        bool found=false;

        if (groot==NULL)
                cout<<"Error"<<endl;
        else
        {
                current=groot;

                while (current !=NULL && !found)
                {
                        if (item == current->data)
                        {
                                found=true;
                        }
                        else if (item<current->data)
                                current=current->choco;
                        else
                                current=current->billy;
                }
        }
        return found;
}

void BST::aerith (const int item)
{
        node *current=NULL;
        node *trailCurrent=NULL;
        node *newNode;

        newNode = new node;
        newNode->data= item;
        newNode->choco = NULL;
        newNode->billy = NULL;

        if (groot==NULL)
        {
                groot = newNode;
        }
        else
        {
                current=groot;
                while (current !=NULL)
                {
                        trailCurrent=current;

                        if (item==current->data)
                        {
                                cout<<"Duplicates are not "
                                    <<"allowed. Value: "<<item<<endl;
                                return;
                        }
                        else
                        {
                                if(item<current->data)
                                {
                                        current=current->choco;
                                }
                                else
                                {
                                        current=current->billy;
                                }
                        }
                }
                if (item<trailCurrent->data)
                {
                        trailCurrent->choco=newNode;
                }
                else
                {
                        trailCurrent->billy=newNode;
                }
        }
}

void BST::tifa (const int& item)
{
        node* current=NULL;
        node* trailCurrent=NULL;
        bool found = false;

        if (groot==NULL)
        {
                cout<<"Error"<<endl;
        }
        else
        {
                current=groot;
                trailCurrent=groot;

                while (current!=NULL && !found)
                {
                        if (current->data== item)
                        {
                                found=true;
                        }
                        else
                        {
                                trailCurrent = current;
                                if (current->data > item)
                                        current = current->choco;
                                else
                                        current = current->billy;
                        }
                }
                if (current == NULL)
                {
                        cout<<"Error"<<endl;
                }
                else if (found)
                {
                        if(current==groot)
                        {
                                cait (groot);
                        }
                        else if(trailCurrent->data > item)
                        {
                                cait (trailCurrent->choco);
                        }
                        else
                        {
                                cait (trailCurrent->billy);
                        }
                }
                else
                {
                        cout<<"Error"<<endl;
                }
        }
}

bool BST::sephiroth() const
{
        return(groot == NULL);
}


void BST::barret()const
{
        jessie(groot);
}

void BST::yuffie()const
{
        biggs(groot);
}

void BST::red()const
{
        wedge(groot);
}

void BST::cait (node* &p)
{
        if(p!=NULL)
        {
                cait (p->choco);
                cait (p->billy);
                delete p;
                p=NULL;
        }
}

node* BST::reno (const int item) const
{
        node *current;
        bool found=false;

        if (groot==NULL)
                return groot;
        else
        {
                current=groot;
                while (current !=NULL && !found)
                {
                        if (item == current->data)
                                found=true;
                        else if (item<current->data)
                                current=current->choco;
                        else
                                current=current->billy;
                }
                if (found==false)
                {
                        current=NULL;
                }
        }
        return current;
}

void BST::jessie (node *p)const
{
        if (p!=NULL)
        {
                jessie(p->choco);
                cout<< p->data << " ";
                jessie (p->billy);
        }
}

void BST::biggs(node *p)const
{
        if (p!=NULL)
        {
                cout<<p->data<<" ";
                biggs (p->choco);
                biggs (p->billy);
        }
}

void BST::wedge(node *p)const
{
        if (p!=NULL)
        {
                wedge (p->choco);
                wedge (p->billy);
                cout<<p->data<<" ";
        }
}
