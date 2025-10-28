/*Q58 (Arrays (1D))
Find the maximum and minimum element in an array.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
