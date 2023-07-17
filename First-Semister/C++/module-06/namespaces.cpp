#include <bits/stdc++.h>
using namespace std;
namespace Sakib
{
    int age = 24;
    void print()
    {
        cout << "Hello form Sakib" << endl;
    }
}
namespace Bakib
{
    int age2 = 34;
    void print2()
    {
        cout << "Hello from bakib" << endl;
    }
}

using namespace Sakib;
using namespace Bakib;
int main()
{
    cout << age << endl;
    print();
    return 0;
}