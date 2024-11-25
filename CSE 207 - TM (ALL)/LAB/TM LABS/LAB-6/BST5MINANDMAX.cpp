#include <bits/stdc++.h>
using namespace std;

// tree node is defined
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

int minValue(Node* root)
{
    Node* cur = root;
    while (cur->left)
        cur = cur->left;

    return cur->val;
}

int maxValue(Node* root)
{
    Node* cur = root;
    while (cur->right)
        cur = cur->right;

    return cur->val;
}

int main()
{
    Node* root = new Node(16);
    root->left = new Node(3);
    root->left->right = new Node(13);
    root->left->right->left = new Node(10);
    root->right = new Node(20);
    root->right->left = new Node(18);

    cout << "Minimum value in the BST is: " << minValue(root) << endl;
    cout << "Maximum value in the BST is: " << maxValue(root) << endl;

    return 0;
}
