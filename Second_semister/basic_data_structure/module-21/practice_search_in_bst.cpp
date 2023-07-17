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
// input tree
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }
        f->left = myLeft;
        f->right = myRight;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
// search in bst
bool search_in_bst(Node *root, int x)
{
    if (!root)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return search_in_bst(root->left, x);
    }
    else
    {
        return search_in_bst(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    search_in_bst(root, 111) ? cout << "Yes, Found" << endl : cout << "No, Not Found" << endl;
    return 0;
}