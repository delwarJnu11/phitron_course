#include <stdio.h>

int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];

    //input 2d array
    for(int i=0;i<row;i++){
        for( int j=0;j<col;j++){
            scanf("%d ",&ar[i][j]);
        }
    }

    

    //output exact row
    int er=1;
    for(int  i=0;i<col;i++){
        printf("%d ",ar[er][i]);
    }


    return 0;
}