#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    // constructor
    Person(string nm, int a, int m1, int m2)
    {
        name = nm;
        age = a;
        marks1 = m1;
        marks2 = m2;
    }

    void print_name()
    {
        cout << name << endl;
    }
    int sum()
    {
        return marks1 + marks2;
    }
};

int main()
{

    // create person object's class
    Person rakib("Rakib Hasan", 24, 85, 75);
    rakib.print_name();
    cout << rakib.sum() << endl;

    return 0;
}