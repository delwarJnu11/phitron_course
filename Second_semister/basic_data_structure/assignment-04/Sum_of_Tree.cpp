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
// sum of all tree
int sum_of_tree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    long long int sum = root->val;
    sum += sum_of_tree(root->left);
    sum += sum_of_tree(root->right);

    return sum;
}
int main()
{
    Node *root = input_tree_level_order();
    long long int total_val = sum_of_tree(root);
    cout << total_val << endl;
    return 0;
}