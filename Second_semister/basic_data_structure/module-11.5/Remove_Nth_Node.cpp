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
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
// print
void print_node(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// get size
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
// remove nth postion from end
void remove(Node *head, int n)
{
    Node *tmp = head;
    for (int i = 1; i < size(head) - n; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
    {
        tmp = NULL;
    }
    tmp->next = tmp->next->next;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *new_head = NULL;
    Node *new_tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head, tail, val);
    }
    int n;
    cin >> n;
    remove(head, n);
    print_node(head);

    return 0;
}