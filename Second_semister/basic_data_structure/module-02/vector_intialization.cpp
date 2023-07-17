#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // type- 1
    // vector<int> v(5); // type- 2
    // vector<int> v(5, 10); // type- 3
    // vector<int> v2(5, 20); // type - 4
    // vector<int> v(v2);
    // copy from array
    int a[5] = {12, 13, 14, 15};
    vector<int> v(a, a + 5);
    // without constructor
    // vector<int> v = {1, 2, 3};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    cout << endl;
    cout << v[3];
    return 0;
}