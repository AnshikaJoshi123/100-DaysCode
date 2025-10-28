/*Write a program to print the following pattern:
1
12
123
1234
12345
  */
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int i, j;
    for (i = 1; i <= 5; i++) {
    
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}
