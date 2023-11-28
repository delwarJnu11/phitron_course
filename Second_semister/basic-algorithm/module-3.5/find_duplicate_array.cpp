#include <bits/stdc++.h>
using namespace std;

void countFrequency(const vector<int> &nums, int n)
{
    vector<int> frequency(n + 1, 0);

    for (int num : nums)
    {
        frequency[num]++;
    }

    for (int i = 0; i <= n; i++)
    {
        if (frequency[i] > 0)
        {
            cout << nums[i] << endl;
        }
    }
}

int main()
{
    vector<int> nums = {5, 2, 3, 5, 4, 6};
    countFrequency(nums, nums.size());
    return 0;
}
