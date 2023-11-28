/**
 * Leetcode problem no -> #912. Sort an Array.
 * Given an array of integers nums, sort the array in ascending order and return it.

 * You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.
*/

#include <bits/stdc++.h>
using namespace std;

// conquer
vector<int> merge(vector<int> &nums, int l, int mid, int r)
{
    int leftSize = mid - l + 1;
    vector<int> left(leftSize);

    int rightSize = r - mid;
    vector<int> right(rightSize);

    for (int i = l, j = 0; i <= mid; i++, j++)
    {
        left[j] = nums[i];
    }
    for (int i = mid + 1, j = 0; i <= r; i++, j++)
    {
        right[j] = nums[i];
    }

    left[leftSize] = INT_MAX;
    right[rightSize] = INT_MAX;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (left[lp] <= right[rp])
        {
            nums[i] = left[lp];
            lp++;
        }
        else
        {
            nums[i] = right[rp];
            rp++;
        }
    }
    return nums;
}
// divide part
vector<int> mergeSort(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return nums;
    int mid = (l + r) / 2;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid + 1, r);
    vector<int> res = merge(nums, l, mid, r);
    return res;
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
    vector<int> r = mergeSort(nums, 0, nums.size() - 1);
    for (auto val : r)
    {
        cout << val << " ";
    }
    return 0;
}