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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

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
        tail->next = newNode;
        tail = newNode;
    }
    int pop()
    {
        sz--;
        if (head == NULL)
        {
            return -1;
        }
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        int deleteNodeVal = deleteNode->val;
        delete deleteNode;
        return deleteNodeVal;
    }
    int front()
    {
        if (head == NULL)
            return -1;
        else
            return head->val;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

/**
 * Coding Ninja's problem --> implement Queue with singly linked list
 */

// #include <bits/stdc++.h>
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class Queue
// {
// public:
//     Node *head = NULL;
//     Node *tail = NULL;
//     Queue()
//     {
//         // Implement the Constructor
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty()
//     {
//         // Implement the isEmpty() function
//         if (head == NULL)
//             return true;
//         else
//             return false;
//     }

//     void enqueue(int data)
//     {
//         // Implement the enqueue() function
//         Node *newNode = new Node(data);
//         if (tail == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         tail->next = newNode;
//         tail = newNode;
//     }

//     int dequeue()
//     {
//         // Implement the dequeue() function
//         if (head == NULL)
//         {
//             return -1;
//         }
//         Node *deleteNode = head;
//         head = head->next;
//         int deleteNodeValue = deleteNode->data;
//         if (head == NULL)
//         {
//             tail = NULL;
//         }
//         delete deleteNode;
//         return deleteNodeValue;
//     }

//     int front()
//     {
//         // Implement the front() function
//         if (head != NULL)
//         {
//             return head->data;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };