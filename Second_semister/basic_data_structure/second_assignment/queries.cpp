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
// void insert_head(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }
void insert(Node *&head, Node *&tail, int val, int index)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // Node *tmp = head;
    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
// void insert_pos(Node *head, int pos, int val)
// {
//     Node *newNode = new Node(val);
//     Node *tmp = head;
//     for (int i = 1; i <= pos - 1; i++)
//     {
//         tmp = tmp->next;
//     }
//     newNode->next = tmp->next;
//     tmp->next = newNode;
// }
// // print original linked list
// void print_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int index, val;
        cin >> index >> val;
        insert(head, tail, val, index);
        cout << head->val << " " << tail->val << endl;
    }
    return 0;
}