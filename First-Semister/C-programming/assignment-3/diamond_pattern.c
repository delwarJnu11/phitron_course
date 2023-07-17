#include <stdio.h>
//Diamond Function
void diamond(int n){
    int i,j,s=n-1,k=1;
    for(i=1;i<=(n*2)-1;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("%d",j);
        }
        if(i < n){
            k+=2;
            s--;
        }else{
            k-=2;
            s++;
        }
        printf("\n");
    }
}
//main function
int main(){
    int n;
    scanf("%d",&n);
    diamond(n);
    return 0;
}