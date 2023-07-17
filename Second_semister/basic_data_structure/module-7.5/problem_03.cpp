// Take a singly linked list as input and print the middle element.If there are multiple values in the middle print both.
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
// get linked list size
int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
// find mid
void find_mid(Node *head)
{
    int length = size(head);
    int mid = (length + 1) / 2;
    Node *tmp = head;
    for (int i = 0; i < mid - 1; i++)
    {
        tmp = tmp->next;
    }

    if (length % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val;
    }
    else
    {
        cout << tmp->val;
    }
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
    find_mid(head);
    return 0;
}