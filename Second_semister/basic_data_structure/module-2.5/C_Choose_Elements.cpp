// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     long long a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     long long max_sum = 0;
//     for (int i = n - 1; i >= n - k; i--)
//     {
//         max_sum += a[i];
//     }

//     cout << max_sum << endl;

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    printf("%lld", sum);

    return 0;
}
