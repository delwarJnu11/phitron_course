#include <stdio.h>

void fun(double *ar,int size){
    for(int i=0;i<size;i++){
        printf("%0.2lf ",*(ar+i));
    }
}

int main(){
    double arr[5]= {10.0,20.3,30.56,40.00,50.256};
    fun(arr,5);
    return 0;
}