#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // print array element less than 10 and it's index
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 10)
        {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}