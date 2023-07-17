// No Return + Parameter start
#include <stdio.h>
void times(int a, int b){
    int multi = a*b;
    printf("%d", multi);
}
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    // No Return + Parameter function calling
    times(a,b);
    return 0;
}