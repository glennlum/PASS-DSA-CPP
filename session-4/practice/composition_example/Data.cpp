//  Data.cpp

#include "Data.h"

Data::Data()
{
        playerNm[0]=' ';
        playerNm[1]=' ';
        playerNm[2]=' ';
        pl_score=0;
}

Data::~Data(){
}

char* Data::getPlayerNm()
{
        return &playerNm[0];
}

int Data::getScore()
{
        return pl_score;
}

void Data::set(char* p, int s)
{
        for(int i=0; i<MAX_SIZE; i++)
        {
                playerNm[i]=p[i];
        }
        pl_score = s;
}
