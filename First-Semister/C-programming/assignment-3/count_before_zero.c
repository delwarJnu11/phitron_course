#include <stdio.h>
// count_before_zero function
int count_before_zero(int *arr,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            break;
        }
        count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int number_of_element = count_before_zero(arr,n);
    printf("%d\n",number_of_element);
    return 0;
}