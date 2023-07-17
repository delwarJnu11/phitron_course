#include<stdio.h>

int main(){
    int i = 1;
    do{
        printf("%d\n", i);
        break;
        i++;
    }
    while(i <= 10);
    
    return 0;
}