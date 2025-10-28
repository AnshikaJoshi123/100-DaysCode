/*Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, digit;
    int product = 1;  
    int hasOdd = 0;   

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; 

    while (num > 0) {
        digit = num % 10;      
        if (digit % 2 != 0) {  
            product *= digit;  
            hasOdd = 1;
        }
        num = num / 10;        // remove last digit
    }

    if (hasOdd)
        printf("The product of odd digits of %d is: %d\n", temp, product);
    else
        printf("No odd digits found in %d\n", temp);

    return 0;
}
