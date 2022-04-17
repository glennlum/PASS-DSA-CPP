//  GUI.cpp

#include "GUI.h"

GUI::GUI()
{

};

GUI::~GUI()
{

};

void GUI::showHiScore(Data* dataArr)
{
        cout<<"            High Score          "<<endl;

        for(int i=0; i<MAX_SIZE; i++)
        {
                if(dataArr[i].getScore()!=0)
                {
                        cout<<"              ";
                        cout<<dataArr[i].getPlayerNm()<<"-";
                        cout<<dataArr[i].getScore();
                        cout<<"              ";
                        cout<<endl;
                }
        }
}

void GUI::showCurrScore()
{
        cout<<endl<<"SCORE: "<<CURR_SCORE<<endl;
}

void GUI::showGameOver()
{
        cout<<endl;
        cout<<"Game Over!"<<endl;
        cout<<"Your Score: "<<CURR_SCORE<<endl;
}

void GUI::showEnterNickName()
{
        cout<<endl<<"Enter a 3-Char Nickname: "<<endl;

        for(int i=0; i<MAX_SIZE; i++)
        {
                cout<<"char"<<(i+1)<<" > ";
                cin>>NICKNAME[i];
        }
        cout<<endl;
        cout<<endl;
}

void GUI::showStartScreen()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|           0 SUPER            |"<<endl;
        cout<<"|           0 GREEDY           |"<<endl;
        cout<<"|           0 COINMAN          |"<<endl;
        cout<<"|             (^_^)            |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
}

void GUI::showCoinLeft()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"| O           (^_^)            |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
        cout<<" Left[1]    Jump[2]    Right[3] "<<endl;
}

void GUI::takeCoinLeft()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|  +1                          |"<<endl;
        cout<<"|(^o^)                         |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
}

void GUI::noCoinLeft()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|  X                           |"<<endl;
        cout<<"|(*_*)                         |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
}

void GUI::showCoinRight()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|             (^_^)          O |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
        cout<<" Left[1]    Jump[2]    Right[3] "<<endl;
}

void GUI::takeCoinRight()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                           +1 |"<<endl;
        cout<<"|                         (^o^)|"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
}

void GUI::noCoinRight()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|                           X  |"<<endl;
        cout<<"|                         (*_*)|"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
}

void GUI::showCoinAbove()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|               O              |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|             (^_^)            |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
        cout<<" Left[1]    Jump[2]    Right[3] "<<endl;
}

void GUI::takeCoinAbove()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|               +1             |"<<endl;
        cout<<"|             (^o^)            |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|           {{     }}          |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
}

void GUI::noCoinAbove()
{
        cout<<"|——————————————————————————————|"<<endl;
        cout<<"|               X              |"<<endl;
        cout<<"|             (*_*)            |"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|           {{     }}          |"<<endl;
        cout<<"|——————————————————————————————|"<<endl;
}
