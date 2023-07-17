#include <stdio.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(char str[], int n) {
    int i, j, minIndex;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (str[j] < str[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&str[i], &str[minIndex]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char str[n + 1];
    scanf("%s", str);

    selectionSort(str, n);

    printf("%s\n", str);

    return 0;
}
