// Question: Make a function named capital_to_small() which will take a capital alphabet as a parameter (which is a character) and it will convert that capital alphabet to small alphabet and return through that function.

#include <stdio.h>

//convert  capital to small letter function
char capital_to_small(char ch){
    int converted_alpha = ch + 32;
    return converted_alpha;
}

int main(){
    char ch;
    scanf("%c",&ch);
    char result = capital_to_small(ch);
    printf("%c",result);
    return 0;
}