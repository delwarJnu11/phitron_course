#include <stdio.h>

int main(){
    int n,i,j,s,k=1;
    scanf("%d",&n);
    s = n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("%d",i);
        }
        s--;
        k++;
        printf("\n");
    }
    return 0;
}