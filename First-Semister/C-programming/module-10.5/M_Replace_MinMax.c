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
    int min = a[0];
    int min_index = 0;
    int max = a[0];
    int max_index = 0;
    // find min and max number from array
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }
    // swap
    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;
    // print array
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            printf("%d ", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}