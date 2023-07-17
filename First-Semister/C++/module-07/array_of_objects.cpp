#include <bits/stdc++.h>
using namespace std;

// create class
class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    Student a[3];
    // input array of objects
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    // print array of objects
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}