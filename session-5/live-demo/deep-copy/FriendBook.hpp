#ifndef FriendBook_hpp
#define FriendBook_hpp

#include <iostream>
#include <string>

using namespace std;

class FriendBook
{

public:
    FriendBook(string name);
    FriendBook(FriendBook &fb); //custom copy constructor
    ~FriendBook();
    void addFriend(string name);
    void editFriend(int pos, string name);
    string getName();
    string *getFriendList();
    void copy(FriendBook &fb); //custom copy method
    FriendBook &operator=(FriendBook &fb); //overloaded = operator
    void display();

private:
    string your_name;
    string *friendList;
    int count;
};

#endif
