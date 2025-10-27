/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>

int main() {
    int n, i,product;

    printf("Name - Anshika Joshi\nSap id - 590028351\nBatch - B1\nCourse - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the given range.\n");
        return 0;
    }

    for (i = 2; i <= n; i += 2) { 
        product *= i;
    }


    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
