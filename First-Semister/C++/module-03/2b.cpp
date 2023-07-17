// #include <bits/stdc++.h>
// using namespace std;
// class Car
// {
// public:
//     string Brand;
//     string Model;
//     int Year;
//     Car(string x, string y, int z) // constructor method
//     {
//         Brand = x;
//         Model = y;
//         Year = z;
//     }
// };
// int main()
// {
//     Car car_1("BMW", "Y5", 2003);
//     cout << car_1.Brand << endl;
//     cout << car_1.Model << endl;
//     cout << car_1.Year << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    // Constructor function
    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};

int main()
{
    // Creating a dynamic object of the Person class and passing values using the constructor
    char karim_name[100] = "Kaim Uddin";
    char salim_name[100] = "Salim Uddin";
    Person *karim = new Person(karim_name, 5.8, 30);
    Person *salim = new Person(salim_name, 5.8, 40);

    cout << karim->name << endl;
    cout << karim->height << endl;
    cout << karim->age << endl;

    return 0;
}