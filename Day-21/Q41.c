/*Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
#include <math.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10; 

    digits = (int)log10(num);  
    firstDigit = num / pow(10, digits);  
    middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;
    swappedNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
