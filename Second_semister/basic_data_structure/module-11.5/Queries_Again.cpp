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
// get size
int size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
// print Normal order L to R
void print_normal_order(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// print reverse order R -> L
void print_reverse_order(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
// insert node
void insert_at_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            // print
            print_normal_order(head);
            print_reverse_order(tail);
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        print_normal_order(head);
        print_reverse_order(tail);
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
        print_normal_order(head);
        print_reverse_order(tail);
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
        print_normal_order(head);
        print_reverse_order(tail);
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
        int x, v;
        cin >> x >> v;
        insert_at_any_pos(head, tail, x, v);
    }
    return 0;
}
