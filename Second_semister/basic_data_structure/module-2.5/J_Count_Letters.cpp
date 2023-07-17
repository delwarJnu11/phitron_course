#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int letterCount[26] = {0}; // Initialize all counts to 0

    for (char letter : S)
    {
        int index = letter - 'a'; // Convert letter to index (0-25)
        letterCount[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letterCount[i] > 0)
        {
            char letter = 'a' + i; // Convert index to letter
            cout << letter << " : " << letterCount[i] << endl;
        }
    }

    return 0;
}
