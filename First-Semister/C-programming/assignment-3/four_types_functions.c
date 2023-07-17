#include <stdio.h>
//Has Return + No Parameter start
int sub(void){
    int a,b;
    scanf("%d %d",&a,&b);
    return a-b;
}
int main(){
    //Has Return + No Parameter function call 
    int sub_result = sub();
    printf("%d",sub_result);

    return 0;
}