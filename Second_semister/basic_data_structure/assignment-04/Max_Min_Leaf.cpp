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
// find min max of leaf nodes
void findMinMax(Node *root, int &mn, int &mx)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        // min
        if (root->val < mn)
        {
            mn = root->val;
        }
        // max
        if (root->val > mx)
        {
            mx = root->val;
        }
    }
    findMinMax(root->left, mn, mx);
    findMinMax(root->right, mn, mx);
}
int main()
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    Node *root = input_tree_level_order();
    findMinMax(root, mn, mx);
    cout << mx << " " << mn << endl;

    return 0;
}