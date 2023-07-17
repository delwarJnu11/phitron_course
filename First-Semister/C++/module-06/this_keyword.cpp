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
    Person(string name, int age, int marks1, int marks2)
    {
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
        this->name = name;
    }

    void print_name()
    {
        cout << name << endl;
    }
    int sum()
    {
        return this->marks1 + this->marks2;
    }
};

int main()
{

    // create person object's class
    Person rakib("Rakib Hasan", 24, 85, 75);
    rakib.print_name();
    cout << rakib.sum();

    return 0;
}