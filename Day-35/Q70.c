/*Q70 (Arrays (1D))
Rotate an array to the right by k positions.*/
// Rotate an array to the right by k positions //

#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    k = k % n; // To handle if k > n
    int temp[k];

    // Store last k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the array to the right by k
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the stored elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate the array to the right:\n");
    scanf("%d", &k);

    rightRotate(arr, n, k);

    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
