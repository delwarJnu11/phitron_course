#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int sum_of_first_three = 0;
        int sum_of_last_three = 0;

        for (int j = 0; j < 3; j++)
        {
            sum_of_first_three += str[j];
        }
        for (int j = 3; j < 6; j++)
        {
            sum_of_last_three += str[j];
        }

        if (sum_of_first_three == sum_of_last_three)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         int c1 = 0;
//         int c2 = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             c1 = c1 + s[i];
//         }

//         for (int i = 3; i <= 5; i++)
//         {
//             c2 = c2 + s[i];
//         }
//         if (c1 == c2)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }