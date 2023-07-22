#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// insert linked list
void insert_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = tail->next;
}
// get size of a linked list
int getSize(Node *head)
{
    if (!head)
        return 0;
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
// find middle Node
Node *middle_node(Node *head)
{
    Node *tmp = head;
    for (int i = 0; i < getSize(head) / 2; i++)
    {
        tmp = tmp->next;
    }
    return tmp;
}
// print linked list
void print_linked_list(Node *head)
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
    int n;
    cin >> n;
    int val;
    while (n--)
    {
        cin >> val;
        insert_linked_list(head, tail, val);
    }
    Node *middle = middle_node(head);
    // print_linked_list(middle);
    cout << middle->val << endl;
    return 0;
}