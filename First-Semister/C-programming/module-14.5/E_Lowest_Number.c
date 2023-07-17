#include <stdio.h>

int main(){
    int n,pos;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    int small = arr[0];
    pos = 1;
    for(int i=0;i<n;i++){
        if(arr[i] < small){
            small = arr[i];
            pos = i+1;
        }
    }
    printf("%d %d",small, pos);
    return 0;
}