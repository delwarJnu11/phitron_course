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
// convert array to binary search tree
Node *convert_to_bst(vector<int> &v, int l, int r)
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
// print tree 0,-3,9,-10,null,5
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
// max height
int max_height(Node *root)
{
    if (root == NULL)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);
    if (l > r)
        return l + 1;
    else
        return r + 1;
    // return max(l, r) + 1;
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
    cout << max_height(root) << endl;
    return 0;
}

/***********************************
    #108. Convert Sorted Array to Binary Search Tree (LeetCode)
    /*
    * Definition for a binary tree node.
    * struct TreeNode {
    *     int val;
    *     TreeNode *left;
    *     TreeNode *right;
    *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
    *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    * };
    */
/*


TreeNode *convert_to_bst(vector<int> &v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    TreeNode *root = new TreeNode(v[mid]);
    TreeNode *leftNode = convert_to_bst(v, l, mid - 1);
    TreeNode *rightNode = convert_to_bst(v, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        TreeNode *root = convert_to_bst(nums, 0, nums.size() - 1);
        return root;
    }
};
*/