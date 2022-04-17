#include "FriendBook.hpp"

FriendBook::FriendBook(string name){
        your_name =name;
        count=0;
        friendList = new string [3];
}

FriendBook::~FriendBook(){
        delete[] friendList;
        friendList=NULL;
        cout<<"Deleted "<<your_name<<"'s Friends"<<endl;
}

void FriendBook::addFriend(string name){
        friendList[count]=name;
        count++;
}

void FriendBook::editFriend(int pos, string name){
        friendList[pos]=name;
        pos++;
}

void FriendBook::display(){
        cout<<endl;
        cout<<your_name+"'s friends are:"<<endl;
        for(int i = 0; i<count; i++) {
                cout<<friendList[i]+", ";
        }
        cout<<endl<<endl;
}
