// You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”

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
// get list size
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
// print normal
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// print reverse
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
// insert at any postion
void insert_at_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        if (head == NULL && tail == NULL)
        {
            head = newNode;
            tail = newNode;
            print_normal(head);
            print_reverse(tail);
            return;
        }
        // insert head
        newNode->next = head;
        head->prev = newNode;
        head = newNode;

        print_normal(head);
        print_reverse(tail);
    }
    else if (pos == size(head))
    {
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        print_normal(head);
        print_reverse(tail);
    }
    else if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        newNode->prev = tmp;
        newNode->next->prev = newNode;
        print_normal(head);
        print_reverse(tail);
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        insert_at_any_pos(head, tail, pos, val);
    }

    return 0;
}
