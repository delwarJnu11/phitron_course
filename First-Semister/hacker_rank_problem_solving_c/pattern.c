#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;
    int matrix[size][size];

    int start = 0, end = size - 1;

    while (start <= end)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                    matrix[i][j] = n;
            }
        }
        start++;
        end--;
        n--;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
