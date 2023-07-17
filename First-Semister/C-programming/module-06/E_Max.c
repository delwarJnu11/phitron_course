#include <stdio.h>

int main(){
    int i,n,val;
    scanf("%d",&n);
    int max = 0;
    for(i=1; i <= n;i++){
        scanf("%d",&val);
        if(val >= max){
            max=val;
        }
    }
    printf("%d",max);
    return 0;
}