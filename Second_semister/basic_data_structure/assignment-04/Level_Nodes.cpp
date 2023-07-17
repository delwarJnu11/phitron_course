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
// input tree in level order
Node *input_tree_level_order()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// push_level_nodes
void push_level_nodes(Node *root, vector<int> &v, int x)
{
    int level = 0;
    if (root == NULL)
    {
        return;
    }

    queue<pair<Node *, int>>
        q;
    q.push({root, level});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *p = pr.first;
        level = pr.second;

        if (x == level)
        {
            v.push_back(p->val);
        }

        if (p->left)
            q.push({p->left, level + 1});
        if (p->right)
            q.push({p->right, level + 1});
    }
}

vector<int> nodes(Node *root)
{
    vector<int> v;
    int x;
    cin >> x;
    push_level_nodes(root, v, x);
    return v;
}
int main()
{
    Node *root = input_tree_level_order();
    vector<int> v;
    v = nodes(root);
    if (v.size())
    {
        for (int val : v)
        {
            cout << val << " ";
        }
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}