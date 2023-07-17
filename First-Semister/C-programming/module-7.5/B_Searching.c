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
    int x;
    scanf("%d", &x);
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            flag = i;
            break;
        }
    }
    printf("%d", flag);
    return 0;
}