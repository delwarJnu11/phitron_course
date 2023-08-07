/**
 * Leetcode problem No-> #268. Missing Number Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
 */
#include <bits/stdc++.h>
using namespace std;

int find_missing_number(vector<int> &nums)
{
    int n = nums.size();
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int num : nums)
    {
        actual_sum += num;
    }
    int missing_number = expected_sum - actual_sum;
    return missing_number;
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
    cout << find_missing_number(nums);
    return 0;
}
