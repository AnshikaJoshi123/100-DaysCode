/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>
#include <math.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        temp = temp / 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp = temp / 10;
    }

    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
