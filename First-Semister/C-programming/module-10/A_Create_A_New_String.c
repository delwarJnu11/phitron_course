#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    char t[1001];
    scanf("%s", t);
    int s_cnt = 0;
    int t_cnt = 0;
    // s count
    int i = 0;
    while (s[i] != '\0')
    {
        s_cnt++;
        i++;
    }
    // t count
    int j = 0;
    while (t[j] != '\0')
    {
        t_cnt++;
        j++;
    }
    printf("%d %d\n", s_cnt, t_cnt);
    printf("%s %s", s, t);
    return 0;
}