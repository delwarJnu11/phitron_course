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

// delete specific Node
void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
}
// delete head
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
// get size
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
// print all Node
void print_node(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_node(head);
    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid Index. You can't Delete this Node." << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_node(head, pos);
    }
    print_node(head);
    return 0;
}