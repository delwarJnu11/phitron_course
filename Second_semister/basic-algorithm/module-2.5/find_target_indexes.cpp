/**
 * Leetcode code problem No-> #2089. Find Target Indices After Sorting Array
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> res;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int target;
    cin >> target;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            res.push_back(i);
        }
    }

    for (int idx : res)
    {
        cout << idx << " ";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// // lower bound
// int lowerBound(vector<int> &v, int target)
// {
//     if (v.size() == 1)
//         return v[0];
//     int l = 0, r = v.size() - 1, ans = -1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (v[mid] >= target)
//         {
//             ans = mid;
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     return ans;
// }
// // Upper bound
// int upperBound(vector<int> &v, int target)
// {
//     if (v.size() == 1)
//         return v[0];
//     int l = 0, r = v.size() - 1, ans = -1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (v[mid] > target)
//         {
//             ans = mid;
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     return ans - 1;
// }

// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     sort(v.begin(), v.end());
//     vector<int> result;

//     int lb = lowerBound(v, 2);
//     int ub = upperBound(v, 2);
//     cout << lb << endl
//          << ub;
//     return 0;
// }
