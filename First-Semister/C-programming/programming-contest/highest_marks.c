#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&marks[i]);
    }
    //find max number
    int MAX = marks[0];
    for(int i=0;i<n;i++){
        if(marks[i] >= MAX){
            MAX = marks[i];
        }
    }
    //difference
    for(int i=0;i<n;i++){
        int difference = MAX - marks[i];
        printf("%d ", difference);
    }
    return 0;
}