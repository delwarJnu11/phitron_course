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
Node *convert_arr_to_bst(int a[], int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftNode = convert_arr_to_bst(a, l, mid - 1);
    Node *rightNode = convert_arr_to_bst(a, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
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
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Node *root = convert_arr_to_bst(arr, 0, n - 1);
    print_tree(root);
    return 0;
}