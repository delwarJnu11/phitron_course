#include <stdio.h>

int main(){
    int t;
    long long int s,a,b,c;
    scanf("%d",&t);
    //take input and find Missing Number
    for(int i=0;i<t;i++){
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        long long int add = a+b+c;
        long long int res = s - add;
        printf("%lld\n",res);
    }
   
    return 0;
}