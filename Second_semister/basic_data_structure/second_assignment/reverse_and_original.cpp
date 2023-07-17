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
// reverse linked list
void reverse_list(Node *n)
{
    if (n == NULL)
    {
        return;
    }
    reverse_list(n->next);
    cout << n->val << " ";
}
// print original linked list
void print_list(Node *head)
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
    // print reverse list
    reverse_list(head);
    cout << endl;
    // print original list
    print_list(head);
    return 0;
}