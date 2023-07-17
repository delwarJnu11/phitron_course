#include <stdio.h>

int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);
    char new_str[1000000];
    int i = 0;
    while (s[i] != '\\')
    {
        new_str[i] = s[i];
        i++;
    }
    printf("%s", new_str);
    return 0;
}