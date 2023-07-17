#include <stdio.h>
#include <string.h>

// check given string is palindrome or not
int is_palindrome(char text[]){
    int i, sz,flag = 1;
    sz = strlen(text);
    
    for(i=0;i < sz ;i++){
        if(text[i] != text[sz-i-1]){
            flag = 0;
            break;
           }
        }
    
   return flag;
}

int main(){
    char text[11];
    scanf("%s", text);
    int flag = is_palindrome(text);
    if(flag == 1){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome");
    }
    
    return 0;
}