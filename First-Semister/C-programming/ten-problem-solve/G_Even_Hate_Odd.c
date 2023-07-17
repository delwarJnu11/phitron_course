#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];

        // Input array elements
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int evenCount = 0, oddCount = 0;
        
        // Count even and odd elements
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0){
                evenCount++;
            }
            else{
                oddCount++;
            }
        }

        int diff = abs(evenCount - oddCount);

        if (diff == 0) {
            printf("0\n");
        } else if (diff % 2 == 0) {
            printf("%d\n", diff / 2);
        } else {
            printf("-1\n");
        }

    }

    return 0;
}