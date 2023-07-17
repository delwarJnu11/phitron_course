#include <stdio.h>

int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int element = row*col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(arr[i][j] == 0){
            cnt++;
           }

        }
    }

    if(element==cnt){
        printf("Zero Matrix");
    }else{
         printf("Not Zero Matrix");
    }
    return 0;
}