#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'z'){
        printf("%c",'a');
    }else if(ch >= 'a' && ch <= 'z'){
        int wanted_output = ch+1;
        printf("%c",wanted_output);
    }
    return 0;
}
