// Take a singly linked list as input, then take q queries.In each query you will be given an index and value.You need to insert those values in the given index and print the linked list.If the index is invalid print “Invalid”.
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
// insert linked list node
void insert_node(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}
// insert node in specific postion
void insert_node_at_any_postion(Node *head, int pos, int val)
{
    Node *new_node = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
}
// insert at head
void insert_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
// print linked list
void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head, val);
    }
    print_linked_list(head);
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_at_head(head, val);
        }
        else
        {
            insert_node_at_any_postion(head, pos, val);
        }
        // print linked list with updated node
        cout << endl;
        print_linked_list(head);
    }
    return 0;
}