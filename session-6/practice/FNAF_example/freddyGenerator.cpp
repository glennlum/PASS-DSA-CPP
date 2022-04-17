//  freddyGenerator.cpp

#include "freddyGenerator.h"

int tickTock()
{
        int t = (thisLilPiggy()/2);
        if(t<5)
                return 13;
        else if(t==5)
                return 17;
        else
                return 23;
}

int thisLilPiggy()
{
        srand((unsigned) time(0));
        int rn;
        rn = (rand() % 12) + 1;
        return rn;
}
