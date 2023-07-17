// Question : Take two stacks of size N and M as input and check if both of them are the same or not .Don’t use STL to solve this problem.
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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        delete deleteNode;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0 ? true : false;
    }
};
int main()
{
    myStack st1;
    myStack st2;
    int n;
    cin >> n;
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    bool flag = true;
    if (st1.size() != st2.size())
    {
        flag = false;
    }
    if (st1.size() == st2.size())
    {
        while (!st1.empty() && !st2.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }

    flag ? cout << "YES" : cout << "NO";

    return 0;
}