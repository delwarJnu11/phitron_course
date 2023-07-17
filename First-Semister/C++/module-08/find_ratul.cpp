#include <bits/stdc++.h>
using namespace std;

int main()
{
    string names;
    getline(cin, names);
    stringstream name(names);
    string word;
    int flag = 0;
    while (name >> word)
    {
        if (word == "Ratul")
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}