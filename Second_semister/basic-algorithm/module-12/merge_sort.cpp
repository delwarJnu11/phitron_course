#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int l, int mid, int r)
{
    int leftSize = mid - l + 1;
    vector<int> left(leftSize);
    int rightSize = r - mid;
    vector<int> right(rightSize);

    int k = 0;
    for (int i = l; i <= mid; i++)
    {
        left[k] = nums[i];
        k++;
    }

    k = 0;
    for (int i = mid + 1; i <= r; i++)
    {
        right[k] = nums[i];
        k++;
    }

    int cur = l, lp = 0, rp = 0;
    while (lp < leftSize && rp < rightSize)
    {
        if (left[lp] <= right[rp])
        {
            nums[cur] = left[lp];
            lp++;
        }
        else
        {
            nums[cur] = right[rp];
            rp++;
        }
        cur++;
    }

    while (lp < leftSize)
    {
        nums[cur] = left[lp];
        lp++;
        cur++;
    }

    while (rp < rightSize)
    {
        nums[cur] = right[rp];
        rp++;
        cur++;
    }
}

void mergeSort(vector<int> &nums, int l, int r)
{
    // if (l == r)
    //     return;
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