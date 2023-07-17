#include <stdio.h>
// Has Return + Parameter start
int sum(int a,int b){
    return a+b;
}
int main(){
    // Has Return + Parameter function call
    int a,b;
    scanf("%d %d", &a,&b);
    int total = sum(a,b);
    printf("%d",total);

    return 0;
}