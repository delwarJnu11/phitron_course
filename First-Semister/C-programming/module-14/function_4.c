#include <stdio.h>
// function with no parameter and return type
void div(void){
    int a,b;
    scanf("%d %d", &a,&b);
    int res = a / b;
    printf("%d",res);
}

int main(){
    div();
    return 0;
}