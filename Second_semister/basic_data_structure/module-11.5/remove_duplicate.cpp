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
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
// print
void print_node(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// sort list
void sort(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
// remove duplicate
void remove_dup(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        while (tmp->next != NULL && tmp->val == tmp->next->val)
        {
            Node *del = tmp->next;
            tmp->next = del->next;
            delete del;
        }
        tmp = tmp->next;
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
    // sort function call
    sort(head);
    // remove duplicate function call
    remove_dup(head);
    // print
    print_node(head);

    return 0;
}