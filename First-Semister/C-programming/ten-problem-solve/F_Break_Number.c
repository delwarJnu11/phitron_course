// #include <stdio.h>

// // Function to calculate f(x)
// int calculateF(int x) {
//     int count = 0;
//     while (x % 2 == 0) {
//         x /= 2;
//         count++;
//     }
//     return count;
// }

// int main() {
//     long long int N;
//     scanf("%lld", &N);

//     int numbers[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%lld", &numbers[i]);
//     }

//     long long int maxF = 0;
//     for (int i = 0; i < N; i++) {
//         long long int f = calculateF(numbers[i]);
//         if (f > maxF) {
//             maxF = f;
//         }
//     }

//     printf("%lld\n", maxF);

//     return 0;
// }
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &numbers[i]);
    }

    int maxF = 0;
    for (int i = 0; i < N; i++) {
        int f = __builtin_ctzll(numbers[i]);
        if (f > maxF) {
            maxF = f;
        }
    }

    printf("%d\n", maxF);

    return 0;
}