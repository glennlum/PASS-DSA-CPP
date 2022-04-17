//  Eevee.cpp

#include "Eevee.h"

Eevee::Eevee()
{
        Pokemon::name="Eevee";
        Pokemon::call="Eev";
        Pokemon::level=27;
        Pokemon::hp=110;
}

Eevee::~Eevee(){
}

int Eevee:: skillAndChance()
{
        return rand()%6+1;
}

void Eevee:: attack()
{
        show();
        cout<<name<<" used Quick Attack!"<<endl;
}

void Eevee:: incurDamage()
{
        if(skillAndChance()<2)//light damage
        {
                hp-=10;
                cout<<"It's not very effective!"<<endl;
        }
        else if (skillAndChance()==6)//heavy damage
        {
                hp-=20;
                cout<<"A critical hit!"<<endl;
        }
        else //evade
        {
                cout<<name<<" evaded the attack!"<<endl;
        }
        cout<<endl;
}
