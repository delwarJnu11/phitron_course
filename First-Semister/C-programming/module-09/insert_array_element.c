#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    // write a position to insert element in the array
    int pos;
    scanf("%d", &pos);
    // empty specific position for insert new element
    for (int i = n; i > pos + 1; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos] = 100;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}