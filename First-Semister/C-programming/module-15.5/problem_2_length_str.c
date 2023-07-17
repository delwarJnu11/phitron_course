#include <stdio.h>
int my_len(char text[]){
    int count = 0;
    for(int i=0; text[i] != '\0';i++){
        count++;
    }
   return count;
}

int main(){
    char text[100];
    scanf("%s",text); 
    // int count = 0;
    // for(int i=0; text[i] != '\0';i++){
    //     count++;
    // }
    int count = my_len(text);
    printf("%d",count);
    return 0;
}