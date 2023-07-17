#include <stdio.h>

int main()
{
    char a[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &a[i]);
    }
    int sz = sizeof(a) / sizeof(char);
    printf("%d\n", sz);
    for (int i = 0; i < 6; i++)
    {
        printf("%c", a[i]);
    }
    return 0;
}