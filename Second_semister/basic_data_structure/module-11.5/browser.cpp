#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// insert node
void insert_node(Node *&head, Node *&tail, string val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
            break;
        insert_node(head, tail, str);
    }

    int q;
    cin >> q;
    string command, address;
    Node *currentAddress = head;
    cin.ignore();
    while (q--)
    {
        getline(cin, command);
        if (command.length() > 4)
        {
            address = command.substr(6);
        }

        if (command.find("visit") == 0)
        {
            Node *tmp = head;
            while (tmp != NULL && tmp->val != address)
            {
                tmp = tmp->next;
            }
            if (tmp != NULL)
            {
                currentAddress = tmp;
                cout << currentAddress->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (currentAddress->next != NULL)
            {
                currentAddress = currentAddress->next;
                cout << currentAddress->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (currentAddress->prev != NULL)
            {
                currentAddress = currentAddress->prev;
                cout << currentAddress->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}