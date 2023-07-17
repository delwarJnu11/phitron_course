//@Task: Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

#include <stdio.h>
//create reusable function max of two numbers 
int max(int a, int b){
    int mx;
    if(a>b){
        mx=a;
    }else{
        mx=b;
    }
    return mx;
}
//finding max number
int max_of_four(int a, int b, int c, int d){
    int mx_1 = max(a,b);
    int mx_2 = max(c,d);
    int max_digit = max(mx_1,mx_2);
    return max_digit;

}
//main function
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans = max_of_four(a,b,c,d);
    printf("%d",ans);
    return 0;
}
