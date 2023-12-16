#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int preorder(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    class node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(5);
    root->left->left->left = new node(6);
    root->right->right->right = new node(7);
    preorder(root);
}