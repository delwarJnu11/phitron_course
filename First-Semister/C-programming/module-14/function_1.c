#include <stdio.h>

//function with parameter and return type
int sum(int x, int y){
    int total = x + y;
    return total;
}

int main(){
    int result = sum(26,24);
    printf("%d",result);
    return 0;
}