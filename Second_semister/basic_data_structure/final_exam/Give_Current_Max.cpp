#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks == b.marks)
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
        else
            return false;
        // if (a.roll < b.roll)
        //     return true;
        // else
        //     return false;
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student student_obj(name, roll, marks);
        pq.push(student_obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int command;
        string name;
        int roll, marks;
        cin >> command;
        if (command == 0)
        {
            cin >> name >> roll >> marks;
            Student student_obj(name, roll, marks);
            pq.push(student_obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            // delete if not empty
            if (!pq.empty())
                pq.pop();
            // print if not empty
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}