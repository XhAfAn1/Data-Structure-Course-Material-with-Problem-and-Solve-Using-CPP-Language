#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    BST()
    {
    }
    BST(int value)
    {
        data = value;
        left = right = NULL;
    }
    BST* Insert(BST* root, int value)
    {
        if (!root)
        {

            return new BST(value);
        }


        if (value > root->data)
        {

            root->right = Insert(root->right, value);
        }
        else
        {

            root->left = Insert(root->left, value);
        }

        return root;
    }

    void printPostorder(BST* node)
    {
        if (node == NULL)
            return;

        printPostorder(node->left);
        printPostorder(node->right);
        cout << node->data << " ";
    }

    void printInorder(BST* node)
    {
        if (node == NULL)
            return;

        printInorder(node->left);
        cout << node->data << " ";
        printInorder(node->right);
    }

    void printPreorder(BST* node)
    {
        if (node == NULL)
            return;

        cout << node->data << " ";
        printPreorder(node->left);
        printPreorder(node->right);
    }

};


int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 1);
    b.Insert(root, 2);
    b.Insert(root, 3);
    b.Insert(root, 4);
    b.Insert(root, 5);
    b.Insert(root, 6);

    cout << "Preorder \n";
    b.printPreorder(root);

    cout << "\nInorder  \n";
    b.printInorder(root);

    cout << "\nPostorder \n";
    b.printPostorder(root);
    return 0;
}
