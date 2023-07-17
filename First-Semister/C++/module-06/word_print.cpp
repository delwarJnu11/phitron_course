#include <bits/stdc++.h>
using namespace std;

// word print using recursive function
void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        cout << word << endl;
        print(ss);
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    // word print
    //  string word;
    //  while (ss >> word)
    //  {
    //      cout << word << endl;
    //  }
    return 0;
}