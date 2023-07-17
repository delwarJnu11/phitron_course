// Question : Take two doubly linked lists as input and check if they are the same or not .
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
// insert node doubly linked list
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
    newNode->prev = tail;
    tail = tail->next;
}
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
// print node
void print_node(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// check equal or not
void check_same(Node *head, Node *head_2)
{
    Node *tmp = head;
    Node *tmp_2 = head_2;
    bool is_same = false;
    if (size(tmp) == size(tmp_2))
    {
        while (tmp != NULL && tmp_2 != NULL)
        {
            if (tmp->val == tmp_2->val)
            {
                is_same = true;
            }
            else
            {
                is_same = false;
            }
            tmp = tmp->next;
            tmp_2 = tmp_2->next;
        }
    }
    if (is_same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head, tail, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head_2, tail_2, val);
    }
    check_same(head, head_2);
    return 0;
}