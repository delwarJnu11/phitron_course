// Question : Make a class named Student.Write a program to take a positive integer N as input and make an Student array of size N.Your task is to sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
// sort compare function
bool studentcmp(Student a, Student b)
{
    if (a.marks == b.marks)
        return a.roll < b.roll;
    return a.marks > b.marks;
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
        cin.ignore();
    }
    // sorting using selection sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i].marks == arr[j].marks)
    //         {
    //             if (arr[i].roll > arr[j].roll)
    //             {
    //                 swap(arr[i], arr[j]);
    //             }
    //         }
    //         else if (arr[i].marks > arr[j].marks)
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    // sort this array of object using sort function
    sort(arr, arr + n, studentcmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    return 0;
}