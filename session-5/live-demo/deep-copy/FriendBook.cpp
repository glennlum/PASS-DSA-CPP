#include "FriendBook.hpp"

FriendBook::FriendBook(string name)
{
        your_name = name;
        count = 0;
        friendList = new string[3];
}

FriendBook::FriendBook(FriendBook &fb) // custom copy constructor
{
        count = 0;
        friendList = new string[3];
        copy(fb);
}

FriendBook::~FriendBook()
{
        delete[] friendList;
        friendList = NULL;
        cout << "Deleted " << your_name << "'s Friends" << endl;
}

void FriendBook::addFriend(string name)
{
        friendList[count] = name;
        count++;
}

void FriendBook::editFriend(int pos, string name)
{
        friendList[pos] = name;
        pos++;
}

string FriendBook::getName()
{
        return this->your_name;
}

string *FriendBook::getFriendList()
{
        return this->friendList;
}

void FriendBook::copy(FriendBook &fb) // custom copy method
{
        your_name = fb.getName();
        for (int i = 0; i < 3; i++)
        {
                if (fb.getFriendList()[i] != "")
                {
                        addFriend(fb.getFriendList()[i]);
                }
                else
                {
                        break;
                }
        }
}

FriendBook &FriendBook::operator=(FriendBook &fb) // overloaded = operator
{
        copy(fb);
        return *this;
}

void FriendBook::display()
{
        cout << endl;
        cout << your_name + "'s friends are:" << endl;
        for (int i = 0; i < count; i++)
        {
                cout << friendList[i] + ", ";
        }
        cout << endl
             << endl;
}
