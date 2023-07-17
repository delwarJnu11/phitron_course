#include <stdio.h>

int main(){
    int n;
    if(n > 0 && n%2 ==1){
        scanf("%d",&n);
    }

    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
            printf("Hello");
       }
        printf("\n");

    }

    return 0;
}