#include <stdio.h>

int main() {
    // Write C code here
    int i,j,n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(i=1;i<=n*2;i++){
         for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("*");
        }
        if( i == n){
            k= (n*2)-1;
        }
        if( i < n){
            s--;
            k+=2;
        }else if(i > n){
            s++;
            k-=2;
        }
        printf("\n");
       
    }

    return 0;
}