#include <stdio.h>

int main(){
    int x = 10;
    int *ptr = &x;
    int *ptr2 = ptr;
    *ptr2 = 142;
    printf("x - %d\n",x);
    printf("ptr - %d\n",*ptr);
    printf("ptr2 - %d\n",*ptr2);
    return 0;
}