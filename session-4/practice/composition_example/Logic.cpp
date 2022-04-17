//  Logic.cpp

#include "Logic.h"

Logic::Logic()
{

}

Logic::~Logic()
{

}

void Logic::addnSort(Data* dataArr, Data d)
{
        for(int i=0; i<MAX_SIZE; i++)
        {
                if(dataArr[i].getScore()==0)
                {
                        dataArr[i].set(d.getPlayerNm(),d.getScore());
                        return;
                }
                else if(d.getScore()>dataArr[i].getScore())
                {
                        Data temp;
                        temp.set(dataArr[i].getPlayerNm(),dataArr[i].getScore());
                        dataArr[i].set(d.getPlayerNm(),d.getScore());
                        if(i!=MAX_SIZE-1)
                                dataArr[i+1].set(temp.getPlayerNm(),temp.getScore());
                }
        }
}

void Logic::increment (int& n)
{
        n+=1;
}

void Logic::decrement (int& n)
{
        n-=1;
}

void Logic::reset (int& n, int newVal)
{
        n=newVal;
}
