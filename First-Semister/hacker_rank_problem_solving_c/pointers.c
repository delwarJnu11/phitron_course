// #include <stdio.h>
// #include <stdlib.h>
// void update(int *a, int *b)
// {
//     // Complete this function
//     int sum = *a + *b;
//     int sub = abs(*a - *b);
//     *a = sum;
//     *b = sub;
// }
// int main()
// {
//     int a, b;
//     int *pa = &a, *pb = &b;

//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
void update(int *a, int *b)
{
    // Complete this function
    *a = *a + *b;
    *b = abs((*a - *b) - *b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}