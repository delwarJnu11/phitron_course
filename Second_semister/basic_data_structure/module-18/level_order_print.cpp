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
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->right)
            q.push(f->right);
        if (f->left)
            q.push(f->left);
    }
}
int main()
{
    // create node
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    // connection
    root->left = a;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    root->right = b;
    b->right = d;
    d->left = f;
    d->right = g;
    level_order(root);
    return 0;
}