#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int k)
{
    if (left > right)
        return 0;
    int mid = (left + right) / 2;
    int l = binarySearch(arr, left, mid - 1, k);
    int r = binarySearch(arr, mid + 1, right, k);
    if (arr[mid] == k)
        return 1 + l + r;
    else if (k < arr[mid])
        return l;
    else
        return r;
};
int main()
{
    int n, k;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> k;
    int foundTimes = binarySearch(nums, 0, n - 1, k);

    if (foundTimes > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
