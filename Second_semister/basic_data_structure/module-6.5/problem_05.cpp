// Take a singly linked list as input and check if the linked list is sorted in ascending order.
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
// insert node in linked list
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
// check is ascending or not
void is_asc(Node *head)
{
    Node *tmp = head;
    bool asc = true;
    while (tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
        {
            asc = false;
            break;
        }
        tmp = tmp->next;
    }

    asc ? cout << endl
               << "YES" << endl
        : cout << endl
               << "NO" << endl;
}

// print
void print(Node *head)
{
    cout << "Your Linked List: ";
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
    int val;
    // insert node function call
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_node(head, val);
    }
    print(head);
    // ascending or not checking function call
    is_asc(head);

    return 0;
}