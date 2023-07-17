// Question : Take a singly linked list as input and check if the linked list contains any duplicate value.You can assume that the maximum value will be 100.
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

void insert_element(Node *&head, int val)
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
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_element(head, val);
    }

    bool is_duplicate = false;
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *nextNode = tmp->next;
        while (nextNode != NULL)
        {
            if (tmp->val == nextNode->val)
            {
                is_duplicate = true;
            }
            nextNode = nextNode->next;
        }
        tmp = tmp->next;
    }
    if (is_duplicate == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}