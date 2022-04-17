//  Security_System.cpp

#include "Security_System.h"

Security_System::Security_System()
{
        power=100;
        door=false;
        light=false;
        time.set(0,0);

        for(int i=0; i<4; i++)
        {
                queue<string> q;
                q.push(INIT[i]);
                event_feed.insert(pair<int,queue<string> > (i,q));
        }
}

Security_System::~Security_System(){
}

void Security_System::run()
{
        while(time.gethr()!=6 && power>0)
        {
                display();
        }

        if(time.gethr()==6 && power>0)
        {
                cout<<endl<<"--------------------------------------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Bong! Bong! Bong!"<<endl;
                cout<<"It's 6AM at last! Time to GO HOME!"<<endl;
                cout<<endl;
                cout<<"===You Win!==="<<endl;
                cout<<endl;
        }
        else
        {
                cout<<endl<<"--------------------------------------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Uh-oh...the power is out...I can't see....WHAT THE F-..!!!"<<endl;
                cout<<endl;
                cout<<"((@)) ((@))"<<endl;
                cout<<"^^^^^^^^^^^"<<endl;
                cout<<"^^^^^^^^^^^"<<endl;
                cout<<endl;
                cout<<"AaArRGHGHH!!"<<endl;
                cout<<"iieEEarghE!!"<<endl;
                cout<<endl;
                cout<<"===Game Over!==="<<endl;
                cout<<endl;
        }
}

void Security_System::display()
{
        cout<<endl<<"--------------------------------------------------------------------------"<<endl;
        cout<<"Security Console >>> ";
        //disp time
        cout<<"Time: ";
        time.show();
        //disp door
        cout<<" | Door: ";
        string d_status;
        cout<<(d_status=(door==true)?"CLOSED":"OPEN"); //ternary operator
        //disp light
        cout<<" | Light: ";
        string l_status;
        cout<<(l_status=(light==true)?"ON":"OFF"); //ternary operator
        //disp power
        cout<<" | Power: "<<power<<" %"<<endl;
        //disp menu
        menu();
        //get user input
        selector();
        //decrement power
        deplete();
        //increment time
        time.increment(tickTock());
}

void Security_System::menu()
{
        //disp menu
        cout<<endl;
        cout<<"[1] Cam 1 (Stage)"<<endl;
        cout<<"[2] Cam 2 (Kitchen)"<<endl;
        cout<<"[3] Cam 3 (Store)"<<endl;
        cout<<"[4] Cam 4 (Hallway)"<<endl;
        cout<<"[5] Door "<<endl;
        cout<<"[6] Light"<<endl;
        cout<<endl;
}

void Security_System::selector()
{
        int choice=0;
        cout<<">>> ";
        cin>>choice;

        string d_status;
        string l_status;

        switch (choice)
        {
        case 1:
                cout<<endl<<"<<Cam 1>> ";
                cout<<event_feed.find(choice-1)->second.front()<<endl;
                event_feed.find(choice-1)->second.pop();
                event_feed.find(choice-1)->second.push(CAM1[thisLilPiggy()-1]);
                power-=3;
                break;
        case 2:
                cout<<endl<<"<<Cam 2>> ";
                cout<<event_feed.find(choice-1)->second.front()<<endl;
                event_feed.find(choice-1)->second.pop();
                event_feed.find(choice-1)->second.push(CAM2[thisLilPiggy()-1]);
                power-=3;
                break;
        case 3:
                cout<<endl<<"<<Cam 3>> ";
                cout<<event_feed.find(choice-1)->second.front()<<endl;
                event_feed.find(choice-1)->second.pop();
                event_feed.find(choice-1)->second.push(CAM3[thisLilPiggy()-1]);
                power-=3;
                break;
        case 4:
                cout<<endl<<"<<Cam 4>> ";
                cout<<event_feed.find(choice-1)->second.front()<<endl;
                event_feed.find(choice-1)->second.pop();
                event_feed.find(choice-1)->second.push(CAM4[thisLilPiggy()-1]);
                power-=3;
                break;
        case 5:
                cout<<endl<<"<<Door>> ka-chunk!! ";
                door=(door==true)?false:true; //ternary operator
                cout<<(d_status=(door==true)?"CLOSED":"OPEN")<<endl;
                break;
        case 6:
                cout<<endl<<"<<Light>> BzZzt!! ";
                light=(light==true)?false:true; //ternary operator
                cout<<(l_status=(light==true)?"ON":"OFF")<<endl; //ternary operator
                break;
        default:
                cout<<endl<<"<<Caution>> Fumbling with the controls wastes power...!!!"<<endl;
                power-=7;
        }
}

void Security_System::deplete()
{
        //depletes up to 8% per round
        if(light==true)
                power-=4;
        if(door==true)
                power-=4;
}
