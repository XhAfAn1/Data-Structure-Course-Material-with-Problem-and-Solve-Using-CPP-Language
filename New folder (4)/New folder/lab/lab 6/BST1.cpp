
#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    BST(){
    }
    BST(int value)
{
    data = value;
    left = right = NULL;
}
    BST* Insert(BST* root, int value)
{
    if (!root) {

        return new BST(value);
    }


    if (value > root->data) {

        root->right = Insert(root->right, value);
    }
    else {

        root->left = Insert(root->left, value);
    }

    return root;
}

    void Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
};


int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 13);
    b.Insert(root, 3);
    b.Insert(root, 2);
    b.Insert(root, 4);
    b.Insert(root, 17);
    b.Insert(root, 16);
    b.Insert(root, 20);

    b.Inorder(root);
    return 0;
}
