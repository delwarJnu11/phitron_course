#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    long long int l,r;
    for(int i=0;i<t;i++){
        scanf("%lld %lld", &l,&r);
        long long int sum = 0; 
        if(l < r){
            long long int first = l * (l+1) / 2;
            long long int second = r * (r+1) / 2;
            sum += (second - first) + l;
            printf("%lld\n",sum);
        }else{
            long long int first = l * (l+1) / 2;
            long long int second = r * (r+1) / 2;
            sum += (first-second) + r;
            printf("%lld\n",sum);
        }
    }
    return 0;
}