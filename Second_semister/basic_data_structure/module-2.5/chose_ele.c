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
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    printf("%lld", sum);

    return 0;
}