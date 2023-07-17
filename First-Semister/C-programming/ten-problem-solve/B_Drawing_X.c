#include <stdio.h>

void drawFashionableX(int N) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                if (i == N / 2 && j == N / 2)
                    printf("X");
                else
                    printf("*");
            } else if (i == N / 2 || j == N / 2) {
                if (i < N / 2)
                    printf("/");
                else
                    printf("\\");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    drawFashionableX(N);
    return 0;
}
