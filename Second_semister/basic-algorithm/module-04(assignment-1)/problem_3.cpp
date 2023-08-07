// Question No ->3: You are given an array of N positive integers. The next line will contain an integer K. You need to tell whether there exists more than one occurrence of K in that array or not. If there exists more than one occurrence of K print YES, Otherwise print NO.
// See the sample input-output for more clarification.

// The given array will be sorted in increasing order. And it is guaranteed that at least one occurrence of K will exist.
// You must solve this in O(logn) complexity.

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1, ans;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] >= target)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int upperBound(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1, ans;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] > target)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans - 1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int k;
    cin >> k;
    int lb = lowerBound(nums, k);
    int ub = upperBound(nums, k);
    // cout << nums[lb] << nums[ub] << endl;
    if (nums[lb] == nums[ub] && lb != ub)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}