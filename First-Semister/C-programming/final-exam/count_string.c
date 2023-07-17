#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    int capital=0,small=0,spaces=0;
    fgets(s, 1000, stdin);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i] <= 'Z'){
            capital++;
        }else if(s[i]>='a' && s[i] <= 'z'){
            small++;
        }else if(s[i]==32){
            spaces++;
        }
    }
    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d",spaces);
    return 0;
}