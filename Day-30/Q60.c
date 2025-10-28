/*Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("-------------------------------------------------------------\n");

    int n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, zero = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("\nTotal Positive Numbers = %d", positive);
    printf("\nTotal Negative Numbers = %d", negative);
    printf("\nTotal Zeros = %d\n", zero);

    return 0;
}
