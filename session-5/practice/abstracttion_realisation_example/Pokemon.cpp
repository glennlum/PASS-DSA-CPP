//  Pokemon.cpp

#include <stdio.h>
#include "Pokemon.h"

Pokemon::Pokemon(){
}

Pokemon::~Pokemon(){
}

void Pokemon::speak()
{
        cout<<call+"!"<<"-"<<call+"!"<<endl;
}

void Pokemon::show()
{
        speak();
        cout<<name<<" | Level: "<<level<<" | HP: "<<hp<<endl;
}

bool Pokemon::isKnockedOut()
{
        if(hp<=0)
        {
                cout<<name<<" fainted!"<<endl;
                return true;
        }
        else
        {
                return false;
        }
}
