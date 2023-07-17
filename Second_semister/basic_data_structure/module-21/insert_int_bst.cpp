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
        // step -> 1
        Node *f = q.front();
        q.pop();
        // step -> 2
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

        // step ->3
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
// print tree
void print_tree(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
void insert_tree(Node *&root, int x)
{
    if (!root)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (!root->left)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_tree(root->left, x);
        }
    }
    else
    {
        if (!root->right)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_tree(root->right, x);
        }
    }
}
int main()
{
    Node *root = input_tree();
    insert_tree(root, 9);
    insert_tree(root, 22);
    insert_tree(root, 27);
    insert_tree(root, 32);
    print_tree(root);
    return 0;
}