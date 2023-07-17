#include <stdio.h>

int main(){
    int user_input = 3;
    if(user_input >=0){
        if(user_input % 2 == 0){
            printf("Even");
        }else{
            printf("Odd");
        }
    }else{
        printf("Please Input valid Number");
    }
    return 0;
}