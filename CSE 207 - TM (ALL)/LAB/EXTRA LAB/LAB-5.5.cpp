#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{
struct node* node = (struct node*)
                    malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;

return(node);
}
struct node* insert(struct node* node, int data)
{

if (node == NULL)
    return(newNode(data));
else
{

    if (data <= node->data)
        node->left = insert(node->left, data);
    else
        node->right = insert(node->right, data);

    return node;
}
}
int minValue(struct node* node)
{
struct node* current = node;
while (current->left != NULL)
{
    current = current->left;
}
return(current->data);
}
int main()
{
struct node* root = NULL;
root = insert(root, 8);
insert(root, 1);
insert(root, 2);
insert(root, 3);
insert(root, 9);
insert(root, 5);

cout << "\n Minimum value in BST is " << minValue(root);
getchar();
return 0;
}

