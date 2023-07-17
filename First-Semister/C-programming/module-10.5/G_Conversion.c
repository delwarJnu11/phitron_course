#include <stdio.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int sz = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        sz++;
        i++;
    }
    for (int i = 0; i < sz; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        else if (s[i] == ',')
        {
            s[i] = ' ';
        }
    }
    printf("%s", s);
    return 0;
}