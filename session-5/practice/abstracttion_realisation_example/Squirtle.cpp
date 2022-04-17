//  Squirtle.cpp

#include "Squirtle.h"

Squirtle::Squirtle()
{
        Pokemon::name="Squirtle";
        Pokemon::call="Squirt";
        Pokemon::level=25;
        Pokemon::hp=100;
}

Squirtle::~Squirtle(){
}

int Squirtle:: skillAndChance()
{
        return rand()%6+1;
}

void Squirtle:: attack()
{
        show();
        cout<<name<<" used Water Gun!"<<endl;
}

void Squirtle:: incurDamage()
{
        if(skillAndChance()<4)//light damage
        {
                hp-=10;
                cout<<"It's not very effective!"<<endl;
        }
        else if (skillAndChance()==4)//heavy damage
        {
                hp-=20;//heavy damage
                cout<<"A critical hit!"<<endl;
        }
        else //evade attack
        {
                cout<<name<<" evaded the attack!"<<endl;
        }
        cout<<endl;
}
