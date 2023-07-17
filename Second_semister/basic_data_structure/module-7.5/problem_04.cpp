// Take a singly linked list as input, then print the maximum value of them.

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
// insert node
void insert_node(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// find max
void find_max(Node *head)
{
    Node *tmp = head;
    int max = tmp->val;
    while (tmp != NULL)
    {
        if (tmp->val >= max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max << endl;
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
    find_max(head);
    return 0;
}