/*
Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.*/
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; 
    printf("Name - Anshika Joshi\nSap id - 590028351\nBatch - B1\nCourse - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
