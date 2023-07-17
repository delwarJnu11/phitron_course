#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// post order traversal
void postorer(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorer(root->left);
    postorer(root->right);
    cout << root->val << " ";
}
int main()
{
    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    postorer(root);
    return 0;
}