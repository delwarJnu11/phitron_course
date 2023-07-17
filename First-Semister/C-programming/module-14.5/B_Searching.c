#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int flag = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            flag = i;
            break;
        }
    }
    printf("%d",flag);
    return 0;
}