#include<iostream>
#include "sll.h"

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


        else
        {

            if (root->left==NULL and root->right==NULL)
                return NULL;


            else if (root->left == NULL)
            {
                BST* temp = root->right;
                free(root);
                return temp;
            }
            else if (root->right == NULL)
            {
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
      int minValue(BST* root)
    {
        BST* temp = root;
        while (temp->left!=NULL)
            temp = temp->left;

        return temp->data;
    }

    int maxValue(BST* root)
    {
        BST* cur = root;
        while (cur->right)
            cur = cur->right;

        return cur->data;
    }

    int height(BST *root)
{
	if(root==NULL){
        return 0;
	}
	int lh=height(root->left);
	int rh=height(root->right);

	if(lh>rh){
        return 1+lh;
	}
	else
        return 1+rh;
}
};




int main()
{

     BST b, *root = NULL;

    int m=-1;
    while(m!=0){
            cout<<endl;
        cout<<"MENU"<<endl;
    cout<<"1.insert."<<endl;
    cout<<"2.Search "<<endl;
    cout<<"3.print"<<endl;
    cout<<"4.delete"<<endl;
    cout<<"5.min and max value"<<endl;
    cout<<"6.Height"<<endl;

    cout<<"press 0 to exit"<<endl<<endl;
    cout<<"Enter :";

    cin>>m;
    if(m==0){
        break;
    }

    if(m==1){ int n;
    cout<<"how many values: ";
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value:";
        cin>>data;
        root = b.Insert(root, data);
    }
    }


    if(m==2){
            int n;
    cout<<"\nEnter data to search: ";
    cin>>n;
    b.Search(root, n);
    }

    if(m==3){
            cout << "Preorder \n";
    b.printPreorder(root);

    cout << "\nInorder  \n";
    b.printInorder(root);

    cout << "\nPostorder \n";
    b.printPostorder(root);
    }
    if(m==4){
         int n;
    cout<<"\nEnter data to search: ";
    cin>>n;
    root = b.deleteNode(root, n);
    }

    if(m==5){
     cout << "Minimum value: " << b.minValue(root) << endl;
    cout << "Maximum value: " << b.maxValue(root) << endl;
    }
    if(m==6){
      cout<<"Height is: "<<b.height(root);
    }

    if(m<0 || m>13)
        cout<<endl<<"Invalid Option"<<endl;



    cout<<endl;
    }


}

