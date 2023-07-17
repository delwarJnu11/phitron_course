#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",arr[i]);
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            continue;
        }
        sum+=arr[i];
    }
    printf("%d",sum);
  
    return 0;
}