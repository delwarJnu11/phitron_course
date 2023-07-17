// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < q; i++)
//     {
//         int x;
//         cin >> x;
//         auto it = find(a.begin(),
//                        a.end(), x);
//         if (it != a.end())
//         {
//             cout << "found" << endl;
//         }
//         else
//         {
//             cout << "not found" << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort the array for binary search
    sort(a, a + n);

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        bool found = binary_search(a, a + n, x);
        if (found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}