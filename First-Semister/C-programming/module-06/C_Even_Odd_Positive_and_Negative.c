#include <stdio.h>

int main(){
    int n,a,even_count=0,odd_count=0,positive_count=0,negative_count=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d ", &a);
         if( a % 2 == 0){
            even_count++;
        }
        if(a % 2 != 0){
            odd_count++;
        }
        if(a > 0){
            positive_count++;
        }
        if(a < 0){
            negative_count++;
        }
    }

    printf("Even: %d\n",even_count);
    printf("Odd: %d\n",odd_count);
    printf("Positive: %d\n",positive_count);
    printf("Negative: %d\n",negative_count);

    return 0;
}