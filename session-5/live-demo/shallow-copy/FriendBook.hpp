#ifndef FriendBook_hpp
#define FriendBook_hpp

#include <iostream>
#include <string>

using namespace std;

class FriendBook
{

public:
    FriendBook(string name);
    ~FriendBook();
    void addFriend(string name);
    void editFriend(int pos, string name);
    void display();

private:
    string your_name;
    string *friendList;
    int count;
};

#endif
