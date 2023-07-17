#include <stdio.h>

int main(){
    int i,j,n,s,k=1;
    scanf("%d",&n);
    s=n-1;
    for(i=1;i<=(n*2)-1;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("*");
        }
        if(i <= n-1){
            s--;
            k+=2;
        }else{
            s++;
            k-=2;
        }
        printf("\n");
    }
    return 0;
}