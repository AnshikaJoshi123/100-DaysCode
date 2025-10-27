/*Q26 (Loops without Arrays/Strings)
Write a program to print numbers from 1 to n.*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Name - Anshika Joshi\nSap id - 590028351\nBatch - B1\nCourse - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
