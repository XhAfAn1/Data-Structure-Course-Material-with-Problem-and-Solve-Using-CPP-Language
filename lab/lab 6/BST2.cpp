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
void Search(BST *root, int data)
{
	int depth = 0;
	BST *temp = new BST;
	temp = root;
	while(temp != NULL)
	{
		depth++;
		if(temp->data == data)
		{
			cout<<"\nData found at depth: "<<depth;
			return;
		}

		else if(temp->data > data)
			temp = temp->left;
		else
			temp = temp->right;
	}

	cout<<"\n Data not found";
	return;
}
};


int main()
{
    BST b, *root = NULL;
    int n;
    root = b.Insert(root, 13);
    b.Insert(root, 3);
    b.Insert(root, 2);
    b.Insert(root, 4);
    b.Insert(root, 17);
    b.Insert(root, 16);
    b.Insert(root, 20);
    cout<<"\nEnter the Element to be search: ";
	cin>>n;
	b.Search(root, n);
    //b.Inorder(root);
    return 0;
}
