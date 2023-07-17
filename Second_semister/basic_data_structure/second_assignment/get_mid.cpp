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
// sort linked list in descending order
void sort_list(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
// get list length
int getLength(Node *head)
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

void find_mid(Node *head)
{
    Node *tmp = head;
    int length = getLength(tmp);
    int mid = (length + 1) / 2;
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
    // sort ascending order
    sort_list(head);
    // find mid
    find_mid(head);
    return 0;
}