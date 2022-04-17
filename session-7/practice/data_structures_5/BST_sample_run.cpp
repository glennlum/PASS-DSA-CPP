//  BST_sample_run.cpp

#include <iostream>
#include "BST.h"

int main(void)
{
        BST Btree;
        Btree.insert(23);
        Btree.insert(12);
        Btree.insert(31);
        Btree.insert(3);
        Btree.insert(15);
        Btree.insert(29);
        Btree.insert(88);
        Btree.insert(7);
        Btree.insert(13);
        Btree.insert(19);
        Btree.insert(25);
        Btree.insert(53);

        cout<<"Test - inorder()"<<endl;
        Btree.inorderTraversal();
        cout<<endl<<endl;

        cout<<"Test - preorder()"<<endl;
        Btree.preorderTraversal();
        cout<<endl<<endl;

        cout<<"Test - postorder()"<<endl;
        Btree.postorderTraversal();
        cout<<endl<<endl;

        return 0;
}
