/*Q45 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int n, i;
    float sum = 0.0;
    float numerator = 2.0, denominator = 3.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;       
        denominator += 4;     
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
