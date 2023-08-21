#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int l, int m, int r)
{
    int leftSize = m - l + 1;
    vector<int> left(leftSize);
    // int left[leftSize];
    int rightSize = r - m;
    vector<int> right(rightSize);
    // int right[rightSize];
    cout << leftSize << " " << rightSize << endl;
    int j = 0;
    for (int i = l; i <= m; i++)
    {
        left[j] = nums[i];
        j++;
    }
    j = 0;
    for (int i = m + 1; i < r; i++)
    {
        right[j] = nums[i];
        j++;
    }
    int k = l;
    int i = 0;
    j = 0;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            nums[k] = left[i];
            i++;
        }
        else
        {
            nums[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        nums[k] = left[i];
        i++;
        k++;
    }
    while (i < rightSize)
    {
        nums[k] = right[j];
        j++;
        k++;
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
    merge(nums, 0, 4, nums.size() - 1);
    for (auto v : nums)
    {
        cout << v << " ";
    }
    return 0;
}
