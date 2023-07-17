#include <bits/stdc++.h>
using namespace std;

// create student class
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(char *n, int r, int c, char s)
    {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }
};
// return object from function with RVO
Student salim()
{
    char name[100] = "Salim Ullah";
    Student salim(name, 23, 10, 'C');
    return salim;
}

int main()
{
    Student salim_info = salim();
    cout << "Name: " << salim_info.name << endl;
    cout << "Roll: " << salim_info.roll << endl;
    cout << "Class: " << salim_info.cls << endl;
    cout << "Section: " << salim_info.section << endl;
    return 0;
}
