#include <stdio.h>

int main(){
    int i,j,n,s=0,k;
    scanf("%d",&n);
    k =(n*2) - 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("*");
        }
        k-=2;
         s++;
        printf("\n");
    }
    return 0;
}