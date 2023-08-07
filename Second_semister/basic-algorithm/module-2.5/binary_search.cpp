/**
 * Leetcode code problem No-> #704. Binary Search
 * Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
 */
#include <bits/stdc++.h>
using namespace std;

// search element using binary search
int searchElement(vector<int> &nums, int target)
{
    if (nums.size() == 1)
        return 0;
    int l = 0, r = nums.size() - 1, ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << searchElement(nums, 6);
    return 0;
}