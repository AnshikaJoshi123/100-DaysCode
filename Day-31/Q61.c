/*Q61 (Arrays (1D))
Search for an element in an array using linear search.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("-------------------------------------------------------------\n");

    int n, i, key, found = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("\nElement %d found at position %d.\n", key, i + 1);
            break;
        }
    }

    if (!found) {
        printf("\nElement %d not found in the array.\n", key);
    }

    return 0;
}
