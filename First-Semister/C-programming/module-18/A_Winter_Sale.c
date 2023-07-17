#include <stdio.h>

int main(){
    float x,dp;
    scanf("%f %f",&x,&dp);
    float p = 100 - x;
    float main_price = ( 100 * dp) / p;
    printf("%0.2f",main_price);
    return 0;
}