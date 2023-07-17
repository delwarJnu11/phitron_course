#include <stdio.h>
//Find Max
int find_max(int *arr,int n){
    int max = *(arr);
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
//find Min
int find_min(int *arr,int n){
    int min = *(arr);
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max = find_max(arr,n);
    int min = find_min(arr,n);
    printf("%d %d",min,max);
    return 0;
}