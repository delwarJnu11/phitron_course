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
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *leftTree;
        Node *rightTree;

        if (l == -1)
            leftTree = NULL;
        else
            leftTree = new Node(l);
        if (r == -1)
            rightTree = NULL;
        else
            rightTree = new Node(r);
        f->left = leftTree;
        f->right = rightTree;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
int maxDepth(Node *root)
{
    if (!root)
        return 0;
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_tree();
    int res = maxDepth(root);
    cout << res << endl;
    return 0;
}