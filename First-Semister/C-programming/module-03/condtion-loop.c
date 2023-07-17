#include<stdio.h>

int main(){
    int i;
    for(i=1;i<= 5;i++){
        if(i % 2 == 1){
            printf("%d Odd\n", i);
        }else{
            printf("%d even\n", i);
        }
    }
    return 0;
}