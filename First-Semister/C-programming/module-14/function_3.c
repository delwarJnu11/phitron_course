#include <stdio.h>
//function with parameter but no return type
void sub(int a, int b){
    int res = a - b;
    printf("%d", res);
}

int main(){
    sub(5,2);
    return 0;
}