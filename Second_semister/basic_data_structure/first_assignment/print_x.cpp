// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j == i || (j == n - i + 1))
//             {
//                 if (i == (n + 1) / 2)
//                 {
//                     cout << "X";
//                 }
//                 else if (i <= n / 2)
//                 {
//                     if (j <= n / 2)
//                     {
//                         cout << "\\";
//                     }
//                     else
//                     {
//                         cout << "/";
//                     }
//                 }
//                 else
//                 {
//                     if (j <= n / 2)
//                     {

//                         cout << "/";
//                     }
//                     else
//                     {
//                         cout << "\\";
//                     }
//                 }
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if ((n / 2) == i)
                {
                    cout << "X";
                    continue;
                }
                else
                {
                    cout << "\\";
                    continue;
                }
            }
            if (i + j == n - 1)
            {
                cout << "/";
                continue;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}