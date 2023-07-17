#include <stdio.h>

int main(){
    int sum = 0;
    int i,value;
    scanf("%d", &value);

    for(i=1;i<=value;i++){
        sum+=i;    
    }
    printf("%d", sum);
    return 0;
}