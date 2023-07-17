// Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that.

#include <stdio.h>
int my_abs(int n){
    if(n < 0){
        return n * (-1);
    }else{
        return n;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int abs = my_abs(n);
    printf("%d",abs);
    return 0;
}