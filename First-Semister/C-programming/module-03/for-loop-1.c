#include <stdio.h>

int main(){
    int i,a=0;
    for(i =0;i<5;i++){
        continue;
        a++;
    }
    printf("%d%d",i,a);
    return 0;
}