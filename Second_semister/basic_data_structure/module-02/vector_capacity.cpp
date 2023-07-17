#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // v.push_back(40);
    // cout << v.capacity() << endl;
    // v.push_back(50);
    // cout << v.capacity() << endl;
    // v.push_back(60);
    // cout << v.capacity() << endl;
    // v.push_back(70);
    // cout << v.capacity() << endl;
    // v.push_back(80);
    // cout << v.capacity() << endl;
    // v.push_back(90);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // cout << v.size() << endl;
    // v.resize(2);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    v.insert(v.begin() + 2, 20);
    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}