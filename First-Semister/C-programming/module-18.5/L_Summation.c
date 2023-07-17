#include <stdio.h>
long long int sum(int arr[], int n)
{
	if (n <= 0) return 0;
	return (sum(arr, n - 1) + arr[n - 1]);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    long long int count = sum(arr,n);
    printf("%lld",count);
    return 0;
}