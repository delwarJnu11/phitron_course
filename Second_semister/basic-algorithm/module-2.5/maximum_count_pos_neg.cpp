/**
 * Leetcode code problem No-> #2529. Maximum Count of Positive Integer and Negative Integer
 */

// #include <bits/stdc++.h>
// using namespace std;

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
//     int pos_cnt = 0;
//     int neg_cnt = 0;
//     for (int val : v)
//     {
//         if (val > 0)
//             pos_cnt++;
//         else
//             neg_cnt++;
//     }
//     pos_cnt >= neg_cnt ? cout << pos_cnt : cout << neg_cnt << endl;
//     return 0;
// }

// 1. Initialize two variables, ans1 and ans2, to 0. These variables will store the maximum number of consecutive positive and negative numbers in the list, respectively.

// 2. Initialize two pointers, s and e, to the beginning and end of the list, respectively.

// 3. While s is less than or equal to e, do the following:

//         -> Calculate the middle index of the list, mid.

//         -> If nums[mid] is negative, then update ans1 to mid + 1 and set s to mid + 1.

//         -> Otherwise, update e to mid - 1.

// 4. Repeat steps 2-3 for the positive numbers in the list.

// 5. Return the maximum of ans1 and ans2.

#include <bits/stdc++.h>
using namespace std;

int findMaxMinPosNeg(vector<int> &nums)
{
    int pos = 0, neg = 0, l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] < 0)
        {
            neg = mid + 1;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] > 0)
        {
            pos = nums.size() - mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (pos >= neg)
    {
        return pos;
    }
    else
    {
        return neg;
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << findMaxMinPosNeg(v);
    return 0;
}