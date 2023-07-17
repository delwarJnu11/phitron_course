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
// reverse
void reverse_list(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse_list(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
// check palindrome
void check_palindrome(Node *head, Node *new_head)
{
    Node *tmp = head;
    Node *tmp_2 = new_head;
    bool flag = true;

    while (tmp != NULL)
    {
        if (tmp->val != tmp_2->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp_2 = tmp_2->next;
    }
    flag ? cout << "YES" : cout << "NO";
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
    // copy first linked list
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert_node(new_head, new_tail, tmp->val);
        tmp = tmp->next;
    }
    reverse_list(new_head, new_head);
    check_palindrome(head, new_head);

    return 0;
}