#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 5, 5, 30, 30, 70, 30, 40};
    // access 1st element
    cout << myList.front() << endl;
    // access last element
    cout << myList.back() << endl;
    // access n'th element
    cout << *next(myList.begin(), 5);
    return 0;
}