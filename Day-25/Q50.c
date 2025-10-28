/*Q50 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int i, j, space;

    for (i = 0; i < 5; i++) {
    
        for (space = 0; space < i; space++) {
            printf(" ");
        }

        for (j = 5; j > i; j--) {
            printf("*");
        }

        printf("\n"); 
    }

    return 0;
}
