//  abstraction_realisation_example.cpp

#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include "Pokemon.h"
#include "Pikachu.h"
#include "Squirtle.h"
#include "Eevee.h"

using namespace std;

bool knockOut (Pokemon* a, Pokemon* b);

int main(void)
{
        /*------Pokemon Battle Arena!------*/

        //Choose Contenders - try switching between the Pokemon!
        Squirtle opp1; /*VS*/ Pikachu opp2;

        cout<<"----Let's Battle!----"<<endl<<endl;
        cout<<opp1.name<<" VS "<<opp2.name<<endl<<endl;
        cout<<"---------------------"<<endl<<endl;

        //Max of 30 rounds
        int rounds=30;
        //Battle loops for a maximum of 30 rounds
        while(rounds>0)
        {
                cout<<"-Round "<<(31-rounds)<<"-"<<endl<<endl;

                opp1.attack();
                opp2.incurDamage();
                if(knockOut(&opp1,&opp2)==true)
                        break;

                opp2.attack();
                opp1.incurDamage();
                if(knockOut(&opp1,&opp2)==true)
                        break;

                rounds--;
                sleep(2);
        }
        return 0;
}

bool knockOut (Pokemon * a, Pokemon * b)
{
        if(a->isKnockedOut())
        {
                cout<<"* "<<b->name<<" wins!!!"<<endl;
                return true;
        }
        else if(b->isKnockedOut())
        {
                cout<<"* "<<a->name<<" wins!!!"<<endl;
                return true;
        }
        else
        {
                return false;
        }
}
