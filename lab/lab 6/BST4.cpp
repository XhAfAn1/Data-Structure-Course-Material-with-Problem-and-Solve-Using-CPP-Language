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

 BST* minValueNode( BST* node)
{
     BST* current;
    current= node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

BST* deleteNode(BST* root, int key)
{

    if (root == NULL)
        return root;


     if (key < root->data)
        root->left = deleteNode(root->left, key);


    else if (key > root->data)
        root->right = deleteNode(root->right, key);


    else {

        if (root->left==NULL and root->right==NULL)
            return NULL;


        else if (root->left == NULL) {
            BST* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
          BST* temp = root->left;
            free(root);
            return temp;
        }


        BST* temp = minValueNode(root->right);


        root->data= temp->data;


        root->right = deleteNode(root->right, temp->data);
    }
    return root;
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


     cout << "Inorder traversal of the given tree \n";
    b.Inorder(root);

    cout << "\nDelete 2\n";
    root = b.deleteNode(root, 2);
    cout << "Inorder traversal of the modified tree \n";
    b.Inorder(root);

    cout << "\nDelete 17\n";
    root = b.deleteNode(root, 17);
    cout << "Inorder traversal of the modified tree \n";
    b.Inorder(root);

    cout << "\nDelete 16\n";
    root = b.deleteNode(root, 16);
    cout << "Inorder traversal of the modified tree \n";
    b.Inorder(root);
    return 0;
}
