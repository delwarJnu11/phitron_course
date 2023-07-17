#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[101];
        scanf("%s", s);
        int sz = strlen(s);
        if (sz <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n", s[0], sz - 2, s[sz - 1]);
        }
    }
    return 0;
}