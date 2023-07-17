#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section[10];
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
        cin.ignore();
    }

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i].id, arr[j].id);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << endl;
    }

    return 0;
}