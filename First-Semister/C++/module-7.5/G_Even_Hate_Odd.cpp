#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        // Input array elements
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int evenCount = 0, oddCount = 0;

        // Count even and odd elements
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        int diff = abs(evenCount - oddCount);

        if (diff == 0)
        {
            cout << "0" << endl;
        }
        else if (diff % 2 == 0)
        {
            cout << diff / 2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}