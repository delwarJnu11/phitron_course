#include <stdio.h>

int main(){
    int ascii_upper,ascii_lower;
    char x;
    scanf("%c", &x);

    if(x >= 'a' && x <='z'){
        ascii_upper = x - 32;
        printf("%c", ascii_upper);
    }else if(x >= 'A' && x <= 'Z'){
        ascii_lower = x + 32;
        printf("%c", ascii_lower);
    }
    return 0;
}