#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int lastGroupSize = N % K;
    int numGroups = N / K;

    // Print minimum for each complete group
    for (int i = 0; i < numGroups; i++) {
        int min = numbers[i * K];
        for (int j = 1; j < K; j++) {
            if (numbers[i * K + j] < min) {
                min = numbers[i * K + j];
            }
        }
        printf("%d ", min);
    }

    // Print minimum for the last group (if exists)
    if (lastGroupSize > 0) {
        int min = numbers[numGroups * K];
        for (int i = 1; i < lastGroupSize; i++) {
            if (numbers[numGroups * K + i] < min) {
                min = numbers[numGroups * K + i];
            }
        }
        printf("%d", min);
    }

    return 0;
}
