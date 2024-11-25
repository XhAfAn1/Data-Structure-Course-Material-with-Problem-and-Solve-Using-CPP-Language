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
    void Search(BST *root, int data)
    {

        BST *temp = new BST;
        temp = root;
        while(temp != NULL)
        {

            if(temp->data == data)
            {
                cout<<"Data found "<<endl;
                return;
            }

            else if(temp->data > data)
                temp = temp->left;
            else
                temp = temp->right;
        }

        cout<<"Data not found";
        return;
    }
};


int main()
{
    BST b, *root = NULL;
    int n;
    root = b.Insert(root, 1);
    b.Insert(root, 4);
    b.Insert(root, 6);
    b.Insert(root, 3);
    b.Insert(root, 7);
    b.Insert(root, 13);
    b.Insert(root, 23);
    b.Insert(root, 26);
    b.Insert(root, 28);
    cout<<"\nEnter data to search: ";
    cin>>n;
    b.Search(root, n);

    return 0;
}