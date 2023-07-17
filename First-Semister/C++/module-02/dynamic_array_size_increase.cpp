// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // declare dynamic array A array size with 5 integers
//     int *a = new int[5];
//     // input array elements
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     // increased array B declare with size of 10.
//     int *b = new int[10];
//     // copy A array elements to B Array
//     for (int i = 0; i < 5; i++)
//     {
//         b[i] = a[i];
//     }
//     // delete a array
//     delete[] a;
//     // Input rest elements that was increased in the run time
//     for (int i = 5; i < 10; i++)
//     {
//         cin >> b[i];
//     }
//     // print updated B array
//     for (int i = 0; i < 10; i++)
//     {
//         cout << b[i] << " ";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Bike
// {
// public:
//     char color[100];
//     char brand[100];
//     int speed;
// };
// int main()
// {
//     // declare object instance Bike class
//     Bike my_bike;
//     char clr[100] = "Red";
//     char brnd[100] = "Suzuki";
//     strcpy(my_bike.color, clr);
//     strcpy(my_bike.brand, brnd);
//     my_bike.speed = 10;

//     cout << my_bike.speed;

//     return 0;
// }

// int main()
// {
//     // dynamic allocating a new int stars variable using new
//     int *stars = new int;
//     *stars = 5000;

//     cout << "Visible stars in the sky: " << *stars << endl;
//     // icrease size of stars variable
//     *stars = 10000;
//     cout << "Visible stars in the sky now: " << *stars << endl;
//     // stars memory de-allocated using the delete operator
//     delete stars;

//     cout << *stars;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Rectangle
// {
// public:
//     int width;
//     int height;

//     // Constructor
//     Rectangle(int w, int h)
//     {
//         width = w;
//         height = h;
//     }
// };

// int main()
// {
//     // Creating an object of Rectangle with width=5 and height=3
//     Rectangle rect(5, 3);

//     // Accessing the  variables
//     cout << "Width: " << rect.width << endl;
//     cout << "Height: " << rect.height << endl;

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

    return 0;
}
