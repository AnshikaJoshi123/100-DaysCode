/*Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Name - Anshika Joshi\nSap id - 590028351\nBatch - B1\nCourse - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); 
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
