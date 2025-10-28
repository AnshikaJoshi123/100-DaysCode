/*Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("-------------------------------------------------------------\n");

    int n, element, i, j, pos;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[50]; 

    printf("Enter %d elements (in ascending order):\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    
    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }

    if (i == n)
        pos = n;


    for (j = n; j > pos; j--) {
        arr[j] = arr[j - 1];
    }

  
    arr[pos] = element;
    n++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
