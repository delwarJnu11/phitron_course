//Question: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function.

#include <stdio.h>

//convert small to capital letter function
char small_to_capital(char ch){
    int converted_alpha = ch - 32;
    return converted_alpha;
}

int main(){
    char ch;
    scanf("%c",&ch);
    char result = small_to_capital(ch);
    printf("%c",result);
    return 0;
}