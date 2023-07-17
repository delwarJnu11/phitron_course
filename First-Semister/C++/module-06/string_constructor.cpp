#include <bits/stdc++.h>
using namespace std;

int main()
{
    // normally declare string
    string s = "Hello World";
    cout << s << endl;
    // option -> 1 to declare string usin g constructor
    string a("Hello World.");
    cout << a << endl;
    // option -> 2 to declare string usin g constructor
    string b("hello world", 4);
    cout << b << endl;
    // option -> 3 to declare string usin g constructor
    string c = "Hello World.";
    string d(c, 4);
    cout << d << endl;
    // option -> 4 to declare string usin g constructor
    string e(26, 'A');
    cout << e << endl;
    return 0;
}