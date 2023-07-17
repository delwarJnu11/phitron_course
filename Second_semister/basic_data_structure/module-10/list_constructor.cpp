#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList; //type-1
    // list<int> myList(10); // type-2
    // list<int> myList(10, 5); // type-3
    // list<int> list_2 = {1, 2, 3, 4, 5};
    // list<int> myList(list_2); // type-4
    // copy form array
    // int arr[5] = {10, 20, 30, 40, 50};
    // list<int> myList(arr, arr + 5); // type-5
    // copy form vector
    vector<int> v = {100, 200, 300};
    list<int> myList(v.begin(), v.end()); // type-6
    // output list
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}