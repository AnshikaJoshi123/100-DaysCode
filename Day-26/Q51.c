/*Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int i, j, space;

    for (i = 5; i >= 1; i--) {
        
        for (space = 1; space < i; space++) {
            printf(" ");
        }

    
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n"); 
    }

    return 0;
}
