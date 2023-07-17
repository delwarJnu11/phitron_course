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
Node *input_level_order_tree()
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
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
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
        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

// void print_level_order(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         cout << f->val << " ";

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
// }

bool search_tree(Node *root, int x)
{
    if (!root)
        return false;
    if (root->val == x)
        return true;
    if (root->val > x)
    {
        return search_tree(root->left, x);
    }
    else
    {
        return search_tree(root->right, x);
    }
}

int main()
{
    Node *root = input_level_order_tree();
    search_tree(root, 160) ? cout << "Yes, Found" << endl : cout << "No, Not Found" << endl;
    return 0;
}