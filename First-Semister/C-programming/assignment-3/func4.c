//No Return + No Parameter 
#include <stdio.h>
void divided(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int div = a/b;
    printf("%d", div);
}
int main(){
    //No Return + No Parameter function call
    divided();
    return 0;
}