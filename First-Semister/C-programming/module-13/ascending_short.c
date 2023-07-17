#include <stdio.h>

int main(){
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    //ascending short
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}