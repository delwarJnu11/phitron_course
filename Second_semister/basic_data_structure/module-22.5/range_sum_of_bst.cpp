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
// sum of range in a bst
int range_sum_of_bst(Node *root, int low, int high)
{
    if (!root)
        return 0;
    queue<Node *> q;
    q.push(root);
    int sum = 0;
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if ((f->val >= low) && (f->val <= high))
        {
            sum += f->val;
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return sum;
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
    int sum = range_sum_of_bst(root, 7, 15);
    cout << sum << " ";
    return 0;
}

/**
 #938. Range Sum of BST(LeetCode)
 * /**
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
class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (!root)
            return 0;
        queue<TreeNode *> q;
        q.push(root);
        int sum = 0;
        while (!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();

            if ((f->val >= low) && (f->val <= high))
            {
                sum += f->val;
            }

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
        return sum;
    }
};
*/