#include <stdio.h>
#include <string.h>

int main()
{
    char m[11], n[11];
    scanf("%s %s", m, n);
    int m_sz = strlen(m);
    int n_sz = strlen(n);

    printf("%d %d\n", m_sz, n_sz);
    printf("%s%s\n", m, n);
    char tmp = m[0];
    m[0] = n[0];
    n[0] = tmp;
    printf("%s %s", m, n);

    return 0;
}