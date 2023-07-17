#include <stdio.h>
void sum(int x,int y){
    long long int summation = x+y;
    printf("%lld",summation);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    return 0;
}