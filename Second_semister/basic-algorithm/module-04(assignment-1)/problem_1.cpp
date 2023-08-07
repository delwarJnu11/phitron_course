// Question No ->1 : Write a C++ program that takes N integer numbers and sorts them in non-increasing order using Merge Sort.

// You can’t use any built-in function for sorting.

#include <bits/stdc++.h>
using namespace std;

// merge the arrays
void merge(vector<int> &nums, int l, int mid, int r)
{
    int leftSize = mid - l + 1;
    vector<int> left(leftSize);

    int rightSize = r - mid;
    vector<int> right(rightSize);

    // copy element from nums array to left array
    int i = l, j = 0;
    while (i <= mid)
    {
        left[j] = nums[i];
        i++;
        j++;
    }
    // copy element from nums array to right array
    i = mid + 1, j = 0;
    while (i <= r)
    {
        right[j] = nums[i];
        i++;
        j++;
    }
    left[leftSize] = INT_MIN;
    right[rightSize] = INT_MIN;

    // create two pointer for compare element
    int lp = 0, rp = 0;
    i = l;
    while (i <= r)
    {
        if (left[lp] >= right[rp])
        {
            nums[i] = left[lp];
            lp++;
        }
        else
        {
            nums[i] = right[rp];
            rp++;
        }
        i++;
    }
}
// divide and conquer
void mergeSort(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return;
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }
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

    mergeSort(nums, 0, nums.size() - 1);

    for (auto val : nums)
    {
        cout << val << " ";
    }
    return 0;
}