#include <stdio.h>
void increment(int *v, int *w)
{
   int *p = (*v) + (*w);
    int *q = (*w) - (*v);
}
int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    increment(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}