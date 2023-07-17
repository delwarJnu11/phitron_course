#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    // input array A
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[m];
    // input Array B
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int ans[n + m];
    // copy A array element to Ans Array
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }
    // copy B array element to Ans Array
    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    // print B Array
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}