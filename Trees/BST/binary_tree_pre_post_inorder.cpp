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
void inorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

int main()
{
    class node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    inorder(root);
    preorder(root);
    postorder(root);
}