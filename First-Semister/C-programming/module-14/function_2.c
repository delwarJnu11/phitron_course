#include <stdio.h>
//function with no parameter but having return type

int multiply(){
    int a,b;
    scanf("%d %d",&a,&b);
    int multi = a * b;
    return multi;
}
int main(){
    int result = multiply();
    printf("%d",result);
    return 0;
}