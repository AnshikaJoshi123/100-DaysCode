/*Q36 (Loops without Arrays/Strings)
Write a program to find the HCF (GCD) of two numbers.*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}
