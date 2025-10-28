/*Q65 (Arrays (1D))
Search in a sorted array using binary search.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("-------------------------------------------------------------\n");

    int n, key, low, high, mid, found = 0;

    printf("Enter number of elements (sorted in ascending order): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary Search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found)
        printf("Element %d found at position %d.\n", key, mid + 1);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
