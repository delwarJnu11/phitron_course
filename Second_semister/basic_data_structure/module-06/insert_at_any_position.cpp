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

// insert at tail
void insert_at_tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    // if head is empty
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
    cout << endl
         << "Inserted at tail done!" << endl;
}

// insert at any position
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *new_node = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
    cout << endl
         << "Inserted at position: " << pos << "done!" << endl;
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
    while (true)
    {
        cout << "Enter Option: ";
        int option;
        cin >> option;
        cout << "Option 1: Insert At Tail" << endl;
        cout << "Option 2: Insert At Any Position" << endl;
        cout << "Option 3: Print Linked List" << endl;
        cout << "Option 4: Terminate" << endl;
        if (option == 1)
        {
            cout << "Enter your Value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (option == 2)
        {
            cout << "Enter Positon: ";
            int pos;
            cin >> pos;
            cout << "Enter Value: ";
            int val;
            cin >> val;
            insert_at_any_position(head, pos, val);
        }
        else if (option == 3)
        {
            print_linked_list(head);
        }
        else if (option == 4)
        {
            break;
        }
    }
    return 0;
}