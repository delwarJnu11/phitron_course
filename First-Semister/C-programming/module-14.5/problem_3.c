// Question: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function.

// sample Input : a output -> 97
// sample Input : A output -> 65

/*
*Function Type-1: Parameter with return
*/
#include <stdio.h>
//convert character to ascii value
// int char_to_ascii(char ch){
//     return ch;
// }

// int main(){
//     char ch;
//     scanf("%c",&ch);
//     int res = char_to_ascii(ch);
//     printf("%d",res);
//     return 0;
// }

/*
*Function Type-2: No Parameter with return
*/

// int char_to_ascii(void){
//     char ch;
//     scanf("%c",&ch);
//     return ch;
// }


// int main(){
//     int res = char_to_ascii();
//     printf("%d",res);
//     return 0;
// }

/*
*Function Type-3: Parameter with No return
*/

// void char_to_ascii(char ch){
//     printf("%d",ch);
// }

// int main(){
//     int ch;
//     scanf("%c",&ch);
//     char_to_ascii(ch);
//     return 0;
// }

/*
*Function Type-4: No Parameter with No return
*/

void char_to_ascii(void){
    char ch;
    scanf("%c",&ch);
    printf("%d",ch);
}

int main(){
    char_to_ascii();
    return 0;
}


