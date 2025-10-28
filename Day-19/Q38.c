/*Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; // store original number for display

    while (num > 0) {
        digit = num % 10;   // get last digit
        sum += digit;       // add to sum
        num = num / 10;     // remove last digit
    }

    printf("The sum of digits of %d is: %d\n", temp, sum);

    return 0;
}
