/* Function Pointer Traversal Fragement */

template <class Type>
void BST<Type>::inorderTraversal(void (*funcPtr)(Type& item))const
{
        inorder(root,*funcPtr);
}

template <class Type>
void BST<Type>::inorder (node<Type> *p, void (*funcPtr)(Type& item))const
{
        if (p!=NULL)
        {
                inorder(p->left, *funcPtr);
                (*funcPtr)(p->data);
                inorder (p->right, *funcPtr);
        }
}
