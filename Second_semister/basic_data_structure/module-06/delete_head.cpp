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
        cout << endl
             << "Inserted at head done!" << endl;
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

// insert at head
void insert_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
    cout << "Inserted at Head" << endl;
}

// delete from any position
void delete_from_any_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *node_to_deleted = tmp->next;
    tmp->next = tmp->next->next;
    delete node_to_deleted;
    cout << endl
         << "Deleted Node from position " << pos << endl;
}

// delete head
void delete_head(Node *&head)
{
    Node *deletedNode = head;
    head = head->next;
    delete deletedNode;
    cout << endl
         << "Deleted Node from head" << endl;
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
        cout << "Enter Option: " << endl;

        cout << "Option 1: Insert At Tail" << endl;
        cout << "Option 2: Insert At Any Position" << endl;
        cout << "Option 3: Insert At Head" << endl;
        cout << "Option 4: Delete form any posiiton" << endl;
        cout << "Option 5: Delete form Head" << endl;
        cout << "Option 6: Print Linked List" << endl;
        cout << "Option 7: Terminate" << endl;
        int option;
        cin >> option;
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
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {

                insert_at_any_position(head, pos, val);
            }
        }
        else if (option == 3)
        {
            cout << "Enter Value: ";
            int val;
            cin >> val;
            insert_at_head(head, val);
        }
        else if (option == 4)
        {
            cout << "Enter postion: ";
            int pos;
            cin >> pos;
            delete_from_any_position(head, pos);
        }
        else if (option == 5)
        {
            delete_head(head);
        }
        else if (option == 6)
        {
            print_linked_list(head);
        }
        else if (option == 7)
        {
            break;
        }
    }
    return 0;
}