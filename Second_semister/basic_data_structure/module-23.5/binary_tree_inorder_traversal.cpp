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
// inorder traversal
void inorderTraversal(Node *root, vector<int> &v)
{
    if (!root)
        return;
    inorderTraversal(root->left, v);
    v.push_back(root->val);
    inorderTraversal(root->right, v);
}
int main()
{
    Node *root = input_tree();
    vector<int> v;
    inorderTraversal(root, v);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}

/**
 * LeetCode problem #94. Binary Tree Inorder Traversal
 */
/**
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
// class Solution
// {
// public:
//     void inOrderTraversal(TreeNode *root, vector<int> &v)
//     {
//         if (!root)
//             return;
//         inOrderTraversal(root->left, v);
//         v.push_back(root->val);
//         inOrderTraversal(root->right, v);
//     }
//     vector<int> inorderTraversal(TreeNode *root)
//     {
//         vector<int> v;
//         inOrderTraversal(root, v);
//         return v;
//     }
// };