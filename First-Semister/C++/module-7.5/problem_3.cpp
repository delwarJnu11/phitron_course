// Question : Take a sentence S as input and then take another string word X as input.Then count how many times the word X appeared in the sentence.The words in the sentence are separated by spaces.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, x;
    getline(cin, str);
    cin >> x;
    stringstream ss(str);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        if (word == x)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}