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
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree Empty" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. node ber kore ano
        Node *f = q.front();
        q.pop();
        // 2. jabotiyo kaj
        cout << f->val << " ";
        // 3. Node push koro
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}