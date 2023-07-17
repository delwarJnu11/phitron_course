#include <stdio.h>

int findNumberPosition(int arr[], int size, int num) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i + 1; 
        }
    }
    return -1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, S;
        scanf("%d", &N); 
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &S);

        int position = findNumberPosition(arr, N, S);
        if (position == -1) {
            printf("Case %d: Not Found\n", t);
        } else {
            printf("Case %d: %d\n", t, position);
        }
    }

    return 0;
}
