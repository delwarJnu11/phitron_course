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
// convert to bst
Node *convert_to_bst(vector<int> v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(v[mid]);
    Node *leftNode = convert_to_bst(v, l, mid - 1);
    Node *rightNode = convert_to_bst(v, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
// search in bst
Node *search_in_bst(Node *root, int val)
{
    if (!root)
        return NULL;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (root->val == val)
        {
            return root;
        }
        else
        {
            return NULL;
        }
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
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
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    Node *root = convert_to_bst(v, 0, v.size() - 1);
    Node *root2 = search_in_bst(root, 2);
    print_tree(root2);
    return 0;
}