#include <stdio.h>

int main(){
    int arr[]= {10,20,30,40,50};
    printf("Normal : %d\n",arr[0]);
    printf("Pointer : %d\n",*(arr));
    printf("Normal : %d\n",4[arr]);
    printf("Pointer : %d\n",*(4+arr));
    return 0;
}