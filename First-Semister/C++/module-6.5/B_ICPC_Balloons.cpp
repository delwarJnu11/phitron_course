#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        // Array to keep track of solved problems
        int count[26] = {0};

        int balloons = 0;

        for (int i = 0; i < n; i++)
        {
            if (count[s[i] - 'A'] == 0)
            {
                // First team to solve the problem
                balloons += 2;
                count[s[i] - 'A'] = 1;
            }
            else if (count[s[i] - 'A'] == 1)
            {
                // Other teams that solved the problem
                balloons += 1;
                count[s[i] - 'A'] = 1;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
