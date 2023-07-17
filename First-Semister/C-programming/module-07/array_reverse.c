#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]);
    }
    // print odd index array element
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", ar[i]);
        }
    }
    printf("\n");
    // print even index array element
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", ar[i]);
        }
    }
    printf("\n");
    // print reverse array
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}