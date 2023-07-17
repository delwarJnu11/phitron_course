#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ages[n];
    // input ages 
    for(int i=0;i<n;i++){
        scanf("%d ",&ages[i]);
    }
    int size = sizeof(ages)/sizeof(ages[0]);
    //sorting ages in ascending order
    int tmp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(ages[i] > ages[j]){
                tmp = ages[i];
                ages[i] = ages[j];
                ages[j] = tmp;
            }
        }
    }
    //print ascending order ages
    if(size % 2 == 1){
        printf("%d",ages[(size/2)]);
    }else{
        printf("%d %d", ages[(size/2)-1],ages[((size/2)-1)+1]);
    }

    return 0;
}