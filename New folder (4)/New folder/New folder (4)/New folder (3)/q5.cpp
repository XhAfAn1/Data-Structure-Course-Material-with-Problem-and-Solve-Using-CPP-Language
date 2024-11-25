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

    void Inorder(BST* root)
    {
        if (!root)
        {
            return;
        }
        Inorder(root->left);
         cout << root->data <<" ";
        Inorder(root->right);
    }

    int minValue(BST* root)
    {
        BST* cur = root;
        while (cur->left)
            cur = cur->left;

        return cur->data;
    }

    int maxValue(BST* root)
    {
        BST* cur = root;
        while (cur->right)
            cur = cur->right;

        return cur->data;
    }
};


int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 1);
    b.Insert(root, 4);
    b.Insert(root, 6);
    b.Insert(root, 3);
    b.Insert(root, 7);
    b.Insert(root, 13);
    b.Insert(root, 23);
    b.Insert(root, 26);
    b.Insert(root, 28);
cout << "Inorder \n";
    b.Inorder(root);
    cout << "Minimum value: " << b.minValue(root) << endl;
    cout << "Maximum value: " << b.maxValue(root) << endl;
    return 0;
}
