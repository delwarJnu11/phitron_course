#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// insert Node
void insert_node(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}
// find min max
void find_min_max(Node *head)
{
    Node *tmp = head;
    int min = tmp->val;
    int max = tmp->val;
    while (tmp != NULL)
    {
        if (tmp->val <= min)
        {
            min = tmp->val;
        }
        if (tmp->val >= max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max << " " << min;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head, tail, val);
    }
    find_min_max(head);
    return 0;
}