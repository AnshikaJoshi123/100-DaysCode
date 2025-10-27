/*Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  

    while (num != 0) {
        remainder = num % 10;             
        reversed = reversed * 10 + remainder;  
        num = num / 10;                   
    }

    if (original == reversed)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);

    return 0;
}
