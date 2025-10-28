/*Q68 (Arrays (1D))
Delete an element from an array.*/
  #include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("-------------------------------------------------------------\n");

    int arr[50], n, i, pos;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete element (1 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements left to delete
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease size

    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
