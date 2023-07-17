#include <stdio.h>

int main()
{
    char a[100];
    // input with gets
    // gets(a);
    fgets(a, 16, stdin);
    a[14] = '\0';
    printf("%s", a);
    return 0;
}