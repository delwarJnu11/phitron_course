#include <stdio.h>
//call by reference
void fun(int *x){
    *x += 100;
    printf("Fun Func er X- %d\n",*x);
}
int main(){
    int x = 10;
    fun(&x);
    printf("Main Func er X- %d\n",x);
    return 0;
}