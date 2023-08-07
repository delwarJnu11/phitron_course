// Question No ->2 : Write a C++ program that takes N integer numbers that are sorted and distinct.The next line will contain an integer k.You need to tell whether K exists in that array or not .If it exists, print its index otherwise print “Not Found”.You must solve this in O(logn) complexity.

#include <bits/stdc++.h>
using namespace std;

void findElement(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            break;
        }

        if (nums[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (ans == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << ans << endl;
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
    int k;
    cin >> k;
    findElement(nums, k);
    return 0;
}