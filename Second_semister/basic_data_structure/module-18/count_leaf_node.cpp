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

// input tree function
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
        // 1. queue theke ber kore ana
        Node *p = q.front();
        q.pop();
        // 2. jabotiyo kaj
        int l, r;
        cin >> l >> r;
        Node *leftNode;
        Node *rightNde;
        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);
        if (r == -1)
            rightNde = NULL;
        else
            rightNde = new Node(r);
        p->left = leftNode;
        p->right = rightNde;
        // 3. children Node push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = max_height(root->left);
        int r = max_height(root->right);
        return l + r;
    }
}
int main()
{
    Node *root = input_tree();
    cout << max_height(root) << endl;
    return 0;
}