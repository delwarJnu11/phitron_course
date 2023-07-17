// Question: Take a doubly linked list as input and check if it forms any palindrome or not.
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

// check palindrome or not
void check_palindrome(Node *head, Node *tail)
{
    bool is_palindrome = true;
    Node *tmp = head;
    Node *tail_tmp = tail;
    int mid = size(head) / 2;
    while (mid--)
    {
        if (tmp->val != tail_tmp->val)
        {
            is_palindrome = false;
            break;
        }
        tmp = tmp->next;
        tail_tmp = tail_tmp->prev;
    }
    is_palindrome ? cout << "YES" : cout << "NO" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head, tail, val);
    }
    check_palindrome(head, tail);
    return 0;
}