#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    // Replace every positive number by 1.
    // Replace every negative number by 2
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            ar[i] = 1;
        }
        else if (ar[i] < 0)
        {
            ar[i] = 2;
        }
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}