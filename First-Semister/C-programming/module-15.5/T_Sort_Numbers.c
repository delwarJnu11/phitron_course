#include <stdio.h>
void sorted_arr(){
    int n = 3;
    int arr[n];
    //input array element
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    //assign array elements in variable
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    //sorted Array
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j]=tmp;
            }
        }
    }
    //print sorted array
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    // print variable
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
}
int main(){
    sorted_arr();
    return 0;
}