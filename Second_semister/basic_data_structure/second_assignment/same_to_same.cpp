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
// insert node
void insert_node(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// get linked list size
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val;
    // input list 1
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head, tail, val);
    }
    // input list 1
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head_2, tail_2, val);
    }
    // compare two list
    bool flag = false;
    if (size(head) == size(head_2))
    {
        while (head != NULL && head_2 != NULL)
        {
            if (head->val == head_2->val)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            head = head->next;
            head_2 = head_2->next;
        }
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}