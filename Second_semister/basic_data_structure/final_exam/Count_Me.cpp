#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string word;
        int cnt = 0;
        stringstream ss(s);
        map<string, int> mp;
        string most_times_used_word;
        int most_times = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > most_times)
            {
                most_times_used_word = word;
                most_times = mp[word];
            }
        }
        cout << most_times_used_word << " " << most_times << endl;
    }
    return 0;
}
