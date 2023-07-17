#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 5, 5, 30, 30, 70, 30, 40};
    // remove from list
    // myList.remove(5);
    // sort ascending order
    myList.sort();
    // sort descending order
    // myList.sort(greater<int>());
    // remove duplicate properly if list is sorted
    myList.unique();
    // reverse the list
    // myList.reverse();
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}