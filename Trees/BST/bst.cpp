#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

int main()
{
    class node *root = NULL;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    inorder(root);
}