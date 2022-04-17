/* Just some Examples of ways you can configure BST nodes to store data */

/* BST Node Fragment 1 */
node
{
        int key
        Range dateRange;
        Vector<data> Library
        node * left;
        node * right;
};

/* BST Node Fragment 2 */
node
{
        int id
        Vector<data> * v_ptr;
        node * left;
        node * right;
};

/* BST Node Fragment 3 */
node
{
        int serialNo
        Map<data> * m_ptr;
        node * left;
        node * right;
};

/* BST Node Fragment 4 */
node
{
        date d;
        data_library d1;
        node * left;
        node * right;
};

/* BST Node Fragment 5 */
node
{
        int id;
        collection * c;
        node * left;
        node * right;
};


/* BST Node Fragment 6 */
node
{
        data * d_ptr;
        node * left;
        node * right;
};
