/*
Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int i, j;
    int n = 5; 

    for (i = 1; i <= n; i++) {
        int stars;

        if (i <= 3)
            stars = 2 * i - 1; 
        else
            stars = 2 * (n - i + 1) - 1; 

        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }

        printf("\n"); 
    }

    return 0;
}
