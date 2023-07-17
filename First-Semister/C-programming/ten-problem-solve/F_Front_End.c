#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int front = 0; 
    int back = n - 1;

    while (front <= back) {
        // Print and remove the front element
        printf("%d ", arr[front]);
        front++;

        // Check if there are more elements to be printed
        if (front <= back) {
            // Print and remove the back element
            printf("%d ", arr[back]);
            back--;
        }
    }


    return 0;
}
