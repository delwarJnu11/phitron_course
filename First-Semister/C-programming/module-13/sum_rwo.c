#include <stdio.h>

int main(){
    int i,j,n,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}