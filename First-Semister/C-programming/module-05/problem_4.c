#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    int res = number / 1000;
    if(res % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}