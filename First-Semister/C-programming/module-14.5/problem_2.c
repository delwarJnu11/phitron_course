// Question: Take a positive integer N as input and print the pattern.

// sample Input -> 5
// sample Output ->
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main(){
    int i,j,n,s=0,k;
    scanf("%d",&n);
    k = (n*2)-1;
    // outer loop
    for(i=1;i<=(n*2)-1;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
    }

    return 0;
}
