#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        // input array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Print the smallest possible result
        int min_sum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                min_sum = min(min_sum, sum);
            }
        }
        cout << min_sum << endl;
    }
    return 0;
}