#include <stdio.h>

int main(){
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++){
            printf("%d ",j);
        }
        k++;
        printf("\n");
    }
    return 0;
}