#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int count = 0;
    // for loop string length count
    //  for (int i = 0; s[i] != '\0'; i++)
    //  {
    //      count++;
    //  }

    // while loop string length count
    int i = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;
}