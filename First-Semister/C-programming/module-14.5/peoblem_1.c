// Question: Take a positive integer N as input and print the pattern. 
//sample input = 5 
// output -->   
//     *
//    **
//   ***
//  ****
// *****

#include <stdio.h>

int main(){
    int i,j,n,s,k=1;
    scanf("%d",&n);
    s=n-1;

    for(i=1;i<=n;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k++;
        printf("\n");
    }

    return 0;
}