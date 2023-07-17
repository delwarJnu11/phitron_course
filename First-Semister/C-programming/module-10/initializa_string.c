#include <stdio.h>

int main()
{
    // char a[6] = {'H', 'e', 'l', 'l', 'o'}; // works
    // char a[] = "Bangladesh"; // works
    // char a[10] = "Bangladesh"; // not works
    char a[11] = "Bangladesh"; // works
    printf("%s", a);
    return 0;
}