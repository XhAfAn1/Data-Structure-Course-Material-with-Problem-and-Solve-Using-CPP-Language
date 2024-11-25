#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};
node* CreateNode(int data)
{
	node *newnode = new node;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

node* InsertIntoTree(node* root, int data)
{
	node *temp = CreateNode(data);
	node *t = new node;
	t = root;
	if(root == NULL)
		root = temp;
	else
	{
		while(t != NULL)
		{
			if(t->data < data )
			{
				if(t->right == NULL)
				{
					t->right = temp;
					break;
				}
				t = t->right;
			}

			else if(t->data > data)
			{
				if(t->left == NULL)
				{
					t->left = temp;
					break;
				}
				t = t->left;
			}
		}
	}
	return root;
}

void Search(node *root, int data)
{
	int depth = 0;
	node *temp = new node;
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

int main()
{
	char ch;
	int n, i, a[12]={10, 4, 80, 11, 99, 6, 2, 67, 57, 70, 18, 24};
	node *root = new node;
	root = NULL;
	for(i = 0; i < 12; i++)
		root = InsertIntoTree(root, a[i]);

	up:
	cout<<"\nEnter the Element to be search: ";
	cin>>n;
	Search(root, n);
	cout<<"\n\n\tYou want to search more...enter choice(yes/no)?";
	cin>>ch;
	if(ch == 'y' || ch == 'Y')
	goto up;

	return 0;
}
