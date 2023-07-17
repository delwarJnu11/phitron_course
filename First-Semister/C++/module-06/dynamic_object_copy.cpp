#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("rakib hasan", 25);
    Person *sakib = new Person("sakib hasan", 25);
    // copy sikib's info to rakib
    *rakib = *sakib;
    cout << "Name: " << rakib->name << endl;
    cout << "Age: " << rakib->age;
    return 0;
}