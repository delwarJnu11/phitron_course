#include <stdio.h>

int main() {
    // Write C code here
   int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    long long int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum < 0){
        printf("%lld\n", sum*(-1));
    }else{
        printf("%lld\n",sum);
    }

    return 0;
}