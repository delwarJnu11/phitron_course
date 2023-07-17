#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section[10];
    int id;
    int math_marks;
    int eng_marks;
};

bool studentcmp(Student a, Student b)
{
    if (a.math_marks + a.eng_marks == b.math_marks + b.eng_marks)
    {
        return a.id < b.id;
    }
    return (a.math_marks + a.eng_marks) > (b.math_marks + b.eng_marks);
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
        cin.ignore();
    }
    // sort
    sort(arr, arr + n, studentcmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}