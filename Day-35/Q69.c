/*Q69 (Arrays (1D))
Find the second largest element in an array.*/
// Find the second largest element in an array

#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
  printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("-------------------------------------------------------------\n");

    int n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find largest and second largest
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN) {
        printf("No second largest element found (all elements might be equal).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
