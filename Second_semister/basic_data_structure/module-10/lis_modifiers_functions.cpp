#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 60, 70};
    // assign one list to another list O(1)
    // list<int> newList;
    // newList = myList;
    // delete head and tail with built-in function O(1)
    // myList.pop_front();
    // myList.pop_back();
    // insert head and tail with built-in function O(1)
    // myList.push_front(0);
    // myList.push_back(80);
    // insert at any position with built-in function O(N+K)
    // myList.insert(next(myList.begin(), 7), 80);
    // insert at any position with built-in function multiple data O(N+K)
    // myList.insert(next(myList.begin(), 7), {80, 90, 100});
    // delete at any position with built-in function O(N+K)
    // myList.erase(next(myList.begin(), 2));
    // insert at any position with built-in function multiple data O(N+K)
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 4));
    // replace 10 with 5
    // replace(myList.begin(), myList.end(), 10, 5);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    // find function
    auto it = find(myList.begin(), myList.end(), 5);
    if (it != myList.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}