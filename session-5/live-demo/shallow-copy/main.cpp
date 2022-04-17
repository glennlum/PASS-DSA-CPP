#include <iostream>
#include "FriendBook.hpp"

using namespace std;

void corruptFriendData(FriendBook fb);

int main(void)
{
        // Setup
        FriendBook acc1("Amy");
        acc1.addFriend("Lewis");
        acc1.addFriend("Gopal");
        acc1.addFriend("June");
        cout << "acc1 ";
        acc1.display();

        cout << "Attempt to make a FriendBook copy using default copy constructor" << endl;
        FriendBook acc2(acc1);
        cout << "acc2 ";
        acc2.display();

        cout << "Attempt to make a FriendBook copy using default '=' operator" << endl;
        FriendBook acc3("");
        acc3 = acc1;
        cout << "acc3 ";
        acc3.display();

        cout << "Update the friend list of acc1 only" << endl;
        acc1.editFriend(0, "Patrick");

        cout << "acc1 ";
        acc1.display();

        cout << "acc2 ";
        acc2.display(); // acc1 FriendList is modified !

        cout << "acc3 ";
        acc3.display(); // acc2 FriendList is modified !

        cout << "Corrupt the data in acc1" << endl;
        corruptFriendData(acc1);

        cout << "acc1 ";
        acc1.display(); // acc1 FriendList is corrupted !

        cout << "acc2 ";
        acc2.display(); // acc1 FriendList is modified !

        cout << "acc3 ";
        acc3.display(); // acc2 FriendList is modified !

        /* Program will crash with a memory allocation error here */

        return 0;
}

void corruptFriendData(FriendBook fb) // pass by value
{
        // fb's default copy constructor is called...

        for (int i = 0; i < 3; i++)
        {
                fb.editFriend(i, "###"); // this will corrupt acc1, acc2 and acc3
        }

        // fb's destructor is called here printing "Deleted Amy's Friends"
}